#include "Widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
	QWidget::setWindowTitle(QString::fromLocal8Bit("���ڱ���"));
	lab->setText(QString::fromLocal8Bit("�����ť�رմ���"));
	connect(but, &QPushButton::released, this, &Widget::close);

}

void Widget::setLabText()
{
	lab->setText(QString::fromLocal8Bit("123"));
}
