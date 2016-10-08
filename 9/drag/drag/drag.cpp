#include "drag.h"

#include <QtGui>
drag::drag(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	textEdit = new QTextEdit;
	setCentralWidget(textEdit);

	textEdit->setAcceptDrops(false);
	setAcceptDrops(true);

	setWindowTitle(tr("Text Editor"));
}
void drag::dragEnterEvent(QDragEnterEvent *event) {
	if (event->mimeData()->hasFormat("text/uri-list")) {
		event->acceptProposedAction();
	}
}
void drag::dropEvent(QDropEvent *event) {
	QList<QUrl> urls = event->mimeData()->urls();
	if (urls.isEmpty())
		return;
	QString fileName = urls.first().toLocalFile();

	if (fileName.isEmpty())
		return;

	//if (readFile(fileName))
		setWindowTitle(tr("%1 - %2").arg(fileName)
			.arg(tr("Drag File")));
}
drag::~drag()
{

}
