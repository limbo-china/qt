#include <QtWidgets>
#include "mainwindow.h"
#include "finddialog.h"
#include "gotocelldialog.h"
#include "sortdialog.h"
#include "spreadsheet.h"
#include "aboutdialog.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	spreadsheet = new Spreadsheet;
	setCentralWidget(spreadsheet);

	this->resize(QSize(1200, 800));
	createActions();
	createMenus();
	createContextMenu();
	createToolBars();
	createStatusBar();

	readSettings();

	findDialog = 0;

	setWindowIcon(QIcon(":/images/icon.png"));
	setCurrentFile("");
}
Ui::MainWindowClass MainWindow::getUiClass() {
	return ui;
}
void MainWindow::closeEvent(QCloseEvent *event) {
	if (okToContinue()) {
		writeSettings();
		event->accept();
	}
	else {
		event->ignore();
	}
}
void MainWindow::createActions() {
	newAction = new QAction(tr("&New"), this);
	newAction->setIcon(QIcon(":/images/new.png"));
	newAction->setShortcut(QKeySequence::New);
	newAction->setStatusTip(tr("Create a new spreadsheet file"));
	connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

	openAction = new QAction(tr("&Open"), this);
	openAction->setIcon(QIcon(":/images/open.png"));
	openAction->setShortcut(QKeySequence::Open);
	openAction->setStatusTip(tr("Open an existing spreadsheet file"));
	connect(openAction, SIGNAL(triggered()), this, SLOT(open()));

	saveAction = new QAction(tr("&Save"), this);
	saveAction->setIcon(QIcon(":/images/save.png"));
	saveAction->setShortcut(QKeySequence::Save);
	saveAction->setStatusTip(tr("Save current spreadsheet file"));
	connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));

	saveAsAction = new QAction(tr("&Save As"), this);
	saveAsAction->setShortcut(QKeySequence::SaveAs);
	saveAsAction->setStatusTip(tr("Save current spreadsheet file As ..."));
	connect(saveAsAction, SIGNAL(triggered()), this, SLOT(saveAs()));

	for (int i = 0; i < MaxRecentFiles; i++) {
		recentFileActions[i] = new QAction(this);
		recentFileActions[i]->setVisible(false);
		connect(recentFileActions[i], SIGNAL(triggered()), this, SLOT(openRecentFile()));
	}
	
	exitAction = new QAction(tr("E&xit"), this);
	exitAction->setShortcut(tr("Ctrl+Q"));
	exitAction->setStatusTip(tr("Exit the applicatiton"));
	connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

	cutAction = new QAction(tr("C&ut"), this);
	cutAction->setIcon(QIcon(":/images/cut.png"));
	cutAction->setShortcut(QKeySequence::Cut);
	cutAction->setStatusTip(tr("Cut"));
	connect(cutAction, SIGNAL(triggered()), spreadsheet, SLOT(cut()));
	
	copyAction = new QAction(tr("&Copy"), this);
	copyAction->setIcon(QIcon(":/images/copy.png"));
	copyAction->setShortcut(QKeySequence::Copy);
	copyAction->setStatusTip(tr("Copy"));
	connect(copyAction, SIGNAL(triggered()), spreadsheet, SLOT(copy()));

	pasteAction = new QAction(tr("&Paste"), this);
	pasteAction->setIcon(QIcon(":/images/paste.png"));
	pasteAction->setShortcut(QKeySequence::Paste);
	pasteAction->setStatusTip(tr("Paste"));
	connect(pasteAction, SIGNAL(triggered()), spreadsheet, SLOT(paste()));

	deleteAction = new QAction(tr("&Delete"), this);
	deleteAction->setShortcut(QKeySequence::Delete);
	deleteAction->setStatusTip(tr("Delete"));
	connect(deleteAction, SIGNAL(triggered()), spreadsheet, SLOT(del()));

	selectRowAction = new QAction(tr("&Row"), this);
	selectRowAction->setStatusTip(tr("Select current row in the spreadsheet"));
	connect(selectRowAction, SIGNAL(triggered()), spreadsheet, SLOT(selectCurrentRow()));
	selectColumnAction = new QAction(tr("&Column"), this);
	selectColumnAction->setStatusTip(tr("Select current column in the spreadsheet"));
	connect(selectColumnAction, SIGNAL(triggered()), spreadsheet, SLOT(selectCurrentColumn()));
	selectAllAction = new QAction(tr("&All"), this);
	selectAllAction->setShortcut(QKeySequence::SelectAll);
	selectAllAction->setStatusTip(tr("Select all the cells in the spreadsheet"));
	connect(selectAllAction, SIGNAL(triggered()), spreadsheet, SLOT(selectAll()));

	findAction = new QAction(tr("&Find"), this);
	findAction->setIcon(QIcon(":/images/find.png"));
	findAction->setShortcut(QKeySequence::Find);
	findAction->setStatusTip(tr("Find contains in the spreadsheet"));
	connect(findAction, SIGNAL(triggered()), this, SLOT(find()));
	goToCellAction = new QAction(tr("&Go To Cell"));
	goToCellAction->setIcon(QIcon(":/images/gotocell.png"));
	goToCellAction->setShortcut(tr("Ctrl+G"));
	goToCellAction->setStatusTip(tr("Go to the cell you want"));
	connect(goToCellAction, SIGNAL(triggered()), this, SLOT(goToCell()));

	sortAction = new QAction(tr("&Sort"),this);
	sortAction->setIcon(QIcon(":/images/sort.png"));
	sortAction->setStatusTip(tr("Sort in the spreadsheet"));
	connect(sortAction, SIGNAL(triggered()), this, SLOT(sort()));



	showGridAction = new QAction(tr("&Show Grid"), this);
	showGridAction->setCheckable(true);
	//showGridAction->setChecked(spreadsheet->showGrid());
	showGridAction->setStatusTip(tr("Show or hide the spreadsheet's grid"));
	//connect(showGridAction, SIGNAL(toggled(bool)), spreadsheet, SLOT(setShowGrid(bool)));

	aboutAction = new QAction(tr("About Spreadsheet"), this);
	aboutAction->setStatusTip(tr("Show the information about Spreadsheet"));
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));
	aboutQtAction = new QAction(tr("About &Qt"), this);
	aboutQtAction->setStatusTip(tr("Show the Qt library's About box"));
	connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}
void MainWindow::createMenus() {
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addAction(saveAction);
	fileMenu->addAction(saveAsAction);
	separatorAction = fileMenu->addSeparator();
	for (int i = 0; i < MaxRecentFiles; i++)
		fileMenu->addAction(recentFileActions[i]);
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	editMenu = menuBar()->addMenu(tr("&Edit"));
	editMenu->addAction(cutAction);
	editMenu->addAction(copyAction);
	editMenu->addAction(pasteAction);
	editMenu->addAction(deleteAction);
	selectSubMenu = editMenu->addMenu(tr("&Select"));
	selectSubMenu->addAction(selectRowAction);
	selectSubMenu->addAction(selectColumnAction);
	selectSubMenu->addAction(selectAllAction);
	editMenu->addSeparator();
	editMenu->addAction(findAction);
	editMenu->addAction(goToCellAction);

	toolsMenu = menuBar()->addMenu(tr("&Tools"));
	//toolsMenu->addAction(recalculateAction);
	toolsMenu->addAction(sortAction);

	optionsMenu = menuBar()->addMenu(tr("&Options"));
	//optionsMenu->addAction(showGridAction);
	//optionsMenu->addAction(autoRecalcAction);

	menuBar()->addSeparator();

	helpMenu = menuBar()->addMenu(tr("&Help"));
	helpMenu->addAction(aboutAction);
	helpMenu->addAction(aboutQtAction);
}
void MainWindow::createToolBars() {
	fileToolBar = addToolBar(tr("&File"));
	fileToolBar->addAction(newAction);
	fileToolBar->addAction(openAction);
	fileToolBar->addAction(saveAction);

	editToolBar = addToolBar(tr("&Edit"));
	editToolBar->addAction(cutAction);
	editToolBar->addAction(copyAction);
	editToolBar->addAction(pasteAction);
	editToolBar->addSeparator();
	editToolBar->addAction(findAction);
	editToolBar->addAction(goToCellAction);
	editToolBar->addAction(sortAction);
}
void MainWindow::createStatusBar(){
	locationLabel = new QLabel("W999");
	locationLabel->setAlignment(Qt::AlignHCenter);
	locationLabel->setMinimumSize(locationLabel->sizeHint());

	formulaLabel = new QLabel;
	formulaLabel->setIndent(3);

	statusBar()->addWidget(locationLabel);
	statusBar()->addWidget(formulaLabel, 1);

	connect(spreadsheet, SIGNAL(currentCellChanged(int, int, int, int)), this, SLOT(updateStatusBar()));
	connect(spreadsheet, SIGNAL(modified()), this, SLOT(spreadsheetModified()));

	updateStatusBar();
}
void MainWindow::readSettings(){}
void MainWindow::writeSettings(){}
bool MainWindow::okToContinue() { 
	if (isWindowModified()) {
		int r = QMessageBox::warning(this, tr("Spreadsheet"), tr("The document has been modified.\n""Do you want to save your changes?"),
			QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
		if (r == QMessageBox::Yes) {
			return save();
		}
		else if (r == QMessageBox::Cancel) {
			return false;
		}
	}
	return true;
}
bool MainWindow::loadFile(const QString &fileName) { 
	if (!spreadsheet->readFile(fileName)) {
		statusBar()->showMessage(tr("Loading canceled"), 2000);
		return false;
	}
	setCurrentFile(fileName);
	statusBar()->showMessage(tr("File loaded"), 2000);
	return true;
}
bool MainWindow::saveFile(const QString &fileName) { 
	if (!spreadsheet->writeFile(fileName)) {
		statusBar()->showMessage(tr("Saving canceled"), 2000);
		return false;
	}
	setCurrentFile(fileName); 
	statusBar()->showMessage(tr("File saved"), 2000);
	return true;
}
void MainWindow::setCurrentFile(const QString &fileName){
	curFile = fileName;
	setWindowModified(false);
	QString showName = tr("Untitled");
	if (!curFile.isEmpty()) {
		showName = strippedName(curFile);
		recentFiles.removeAll(curFile);
		recentFiles.prepend(curFile);
		updateRecentFileActions();
	}
	setWindowTitle(tr("%1[*] - %2").arg(showName).arg(tr("Spreadsheet [ By Limbo ]")));
}
void MainWindow::updateRecentFileActions(){
	QMutableStringListIterator i(recentFiles);

	while (i.hasNext()) {
		if (!QFile::exists(i.next()))
			i.remove();
	}
	for (int j = 0; j < MaxRecentFiles; j++) {
		if (j < recentFiles.count()) {
			QString text = tr("&%1 %2").arg(j + 1).arg(strippedName(recentFiles[j]));
			recentFileActions[j]->setText(text);
			recentFileActions[j]->setData(recentFiles[j]);
			recentFileActions[j]->setVisible(true);
		}
		else {
			recentFileActions[j]->setVisible(false);
		}
	}
	separatorAction->setVisible(!recentFiles.isEmpty());
}
QString MainWindow::strippedName(const QString &fullFileName) {
	return QFileInfo(fullFileName).fileName();
}
void MainWindow::createContextMenu() {

}
void MainWindow::newFile() {
	if (okToContinue()) {
		spreadsheet->clear();
		setCurrentFile("");
	}
}
void MainWindow::open() {
	if (okToContinue()) {
		QString fileName = QFileDialog::getOpenFileName(this, tr("Open Spreadsheet"), ".", tr("Spreadsheet files (*.sp)"));
		if (!fileName.isEmpty())
			loadFile(fileName);
	}
}
bool MainWindow::save() {
	if (curFile.isEmpty()) {
		return saveAs();
	}
	else
		return saveFile(curFile);
}
bool MainWindow::saveAs() {
	QString fileName = QFileDialog::getSaveFileName(this, tr("Save Spreadsheet"), ".", tr("Spreadsheet files (*.sp)"));
	if (fileName.isEmpty())
		return false;
	return saveFile(fileName);
}
void MainWindow::find() {
	if (!findDialog) {
		findDialog = new FindDialog(this);
		connect(findDialog, SIGNAL(findNext(const QString &, Qt::CaseSensitivity)),
			spreadsheet, SLOT(findNext(const QString &, Qt::CaseSensitivity)));
		connect(findDialog, SIGNAL(findPrevious(const QString &, Qt::CaseSensitivity)),
			spreadsheet, SLOT(findPrevious(const QString &, Qt::CaseSensitivity)));
	}
	findDialog->show();
	findDialog->raise();
	findDialog->activateWindow();
}
void MainWindow::goToCell() {
	Gotocelldialog *dialog =new Gotocelldialog(this);
	if (dialog->exec()) {
		QString str = dialog->getUiClass().lineEdit->text().toUpper();
		spreadsheet->setCurrentCell(str.mid(1).toInt() - 1, str[0].unicode() - 'A');
	}
	delete dialog;
}
void MainWindow::sort() {
	QTableWidgetSelectionRange range = spreadsheet->selectedRange();
	QChar first = 'A' + range.leftColumn();
	QChar last = 'A' + range.rightColumn();
	Sortdialog dialog(first,last,this);
	if (dialog.exec()) {
		SpreadsheetCompare compare;
		int t = dialog.getUiClass().primaryColumnCombo->currentIndex();
		compare.keys[0] = t;
		compare.ascending[0] = dialog.getUiClass().primaryOrderCombo->currentIndex() ? false : true;
		t = dialog.getUiClass().secondaryColumnCombo->currentIndex();
		if (t) {
			compare.keys[1] = t;
			compare.ascending[1] = dialog.getUiClass().secondaryOrderCombo->currentIndex() ? false : true;
		}
		t = dialog.getUiClass().tertiaryColumnCombo->currentIndex();
		if (t) {
			compare.keys[2] = t;
			compare.ascending[2] = dialog.getUiClass().tertiaryOrderCombo->currentIndex() ? false : true;
		}

		spreadsheet->sort(compare);
	}
}
void MainWindow::about() {
	AboutDialog dialog(this);
	dialog.exec();
}
void MainWindow::openRecentFile() {
	if (okToContinue()) {
		QAction *action = qobject_cast<QAction *>(sender());
		if (action)
			loadFile(action->data().toString());
	}
}
void MainWindow::updateStatusBar() {
	locationLabel->setText(spreadsheet->currentLocation());
	formulaLabel->setText(spreadsheet->currentFormula());
}
void MainWindow::spreadsheetModified() {
	setWindowModified(true);
	updateStatusBar();
}
MainWindow::~MainWindow()
{

}
