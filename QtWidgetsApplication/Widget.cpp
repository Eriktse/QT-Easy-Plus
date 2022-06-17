#include "Widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
	//设置软件标题
	//中文转换成QString需要用fromLocal8Bit方法
	this->setWindowTitle(QString::fromLocal8Bit("简单加法器"));

	//设置软件图标
	//添加qrc资源文件，新增前缀，新增文件后用QIcon（path）生成QIcon对象
	this->setWindowIcon(QIcon(":/img/src/logo.png"));

	//将指针指向对象
	lab = new QLabel(this);
	ret = new QLabel(this);
	but = new QPushButton(this);
	le1 = new QLineEdit("1", this);
	le2 = new QLineEdit("1", this);

	//设置初始属性

	//中间加号
	lab->setText("+");
	lab->setGeometry(80, 25, 200, 20);
	//显示结果的文本框
	ret->setText(" = ");
	ret->setGeometry(160, 25, 50, 10);
	//两个输入框
	le1->setGeometry(10, 10, 50, 50);
	le2->setGeometry(100, 10, 50, 50);
	//按钮
	but->setText(QString::fromLocal8Bit("计算"));
	but->setGeometry(200, 10, 100, 50);


	//绑定事件
	connect(but, &QPushButton::released, this, &Widget::func);
}

Widget::~Widget()
{
	delete le1;
	delete le2;
	delete lab;
	delete ret;
	delete but;
}

void Widget::func()
{
	//将QString转换成char*
	//使用toLatin1().data()方法转换
	long long a = le1->text().toInt();
	long long b = le2->text().toInt();
	std::cout << a << '+' << b << '\n';
	QString s = QString::number(a + b);
	s = " = " + s;
	ret->setText(s);
}
