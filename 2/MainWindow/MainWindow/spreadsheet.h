#pragma once
#ifndef SPREADSHEET_H 
#define SPREADSHEET_H

#include <QTableWidget>

class Cell;
class SpreadsheetCompare;

class Spreadsheet :public QTableWidget {
	Q_OBJECT
public:
	Spreadsheet(QWidget* parent = 0);

	bool autoRecalculate() const { return autoRecalc; }
	QString currentLocation() const;
	QString currentFormula() const;
	void clear();
	bool readFile(const QString &fileName);
	bool writeFile(const QString &fileName);
	void sort(const SpreadsheetCompare &compare);
	QTableWidgetSelectionRange selectedRange() const;

	public slots:
	void cut();
	void copy();
	void paste();
	void del();
	void selectCurrentRow();
	void selectCurrentColumn();
	void recalculate();
	//void setAutoRecalculate(bool recalc);
	void findNext(const QString &str, Qt::CaseSensitivity cs);
	void findPrevious(const QString &str, Qt::CaseSensitivity cs);

signals:
	void modified();
	
	private slots:
	void somethingChanged();
	
private:
	enum { MagicNumber = 0x7F51C883, RowCount = 999, ColumnCount = 26 };
//
	Cell *cell(int row, int column) const;
	//QString text(int row, int column) const;
	QString formula(int row, int column) const;
	void setFormula(int row, int column, const QString &formula);
	void qStableSort(QList<QStringList>::iterator, QList<QStringList>::iterator, const SpreadsheetCompare &);//�ڽ����ڵ�ʱЧ�ʵ��£���θĽ���
	QList<QStringList>::iterator sortPartion(QList<QStringList>::iterator, QList<QStringList>::iterator, const SpreadsheetCompare &);
	void exchangeRow(QStringList &, QStringList &);
	bool autoRecalc;
};

class SpreadsheetCompare {
public:
	SpreadsheetCompare();
	bool operator()(const QStringList &row1, const QStringList &row2) const;
	
	enum { KeyCount = 3 };
	int keys[KeyCount];
	bool ascending[KeyCount];
};
#endif // !SPREADSHEET_H 