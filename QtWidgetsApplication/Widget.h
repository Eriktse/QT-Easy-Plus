#pragma once
#include <iostream>
#include <QWidget>
#include <QPushbutton>
#include <QLabel>
#include <QLineEdit>

class Widget : public QWidget
{

	Q_OBJECT

public:

	Widget(QWidget* parent = 0);
	~Widget();
	QLineEdit *le1, *le2;//���������
	QLabel *lab, *ret;//һ����ʾ�Ӻţ�һ��������
	QPushButton* but;//���㰴ť

public slots://������
	void func();
};