#pragma once
#include <QWidget>
#include <QPushbutton>
#include <QLabel>

class Widget : public QWidget
{
	
	Q_OBJECT

public:

	Widget(QWidget* parent = 0);
	//~Widget();
	QLabel* lab;
	QPushButton* but;

public slots://������
	void setLabText();
};