#include "Widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
	QWidget::setWindowTitle(QString::fromLocal8Bit("窗口标题"));
	lab->setText(QString::fromLocal8Bit("点击按钮关闭窗口"));
	connect(but, &QPushButton::released, this, &Widget::close);

}

void Widget::setLabText()
{
	lab->setText(QString::fromLocal8Bit("123"));
}
