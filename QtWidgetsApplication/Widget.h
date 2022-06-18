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
	QLineEdit *le1, *le2;//两个输入框
	QLabel *lab, *ret;//一个表示加号，一个输出结果
	QPushButton* but;//计算按钮

public slots://公共槽
	void func();
};