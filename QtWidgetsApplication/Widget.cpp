#include "Widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
	//�����������
	//����ת����QString��Ҫ��fromLocal8Bit����
	this->setWindowTitle(QString::fromLocal8Bit("�򵥼ӷ���"));

	//�������ͼ��
	//���qrc��Դ�ļ�������ǰ׺�������ļ�����QIcon��path������QIcon����
	this->setWindowIcon(QIcon(":/img/src/logo.png"));

	//��ָ��ָ�����
	lab = new QLabel(this);
	ret = new QLabel(this);
	but = new QPushButton(this);
	le1 = new QLineEdit("1", this);
	le2 = new QLineEdit("1", this);

	//���ó�ʼ����

	//�м�Ӻ�
	lab->setText("+");
	lab->setGeometry(80, 25, 200, 20);
	//��ʾ������ı���
	ret->setText(" = ");
	ret->setGeometry(160, 25, 50, 10);
	//���������
	le1->setGeometry(10, 10, 50, 50);
	le2->setGeometry(100, 10, 50, 50);
	//��ť
	but->setText(QString::fromLocal8Bit("����"));
	but->setGeometry(200, 10, 100, 50);


	//���¼�
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
	//��QStringת����char*
	//ʹ��toLatin1().data()����ת��
	long long a = le1->text().toInt();
	long long b = le2->text().toInt();
	std::cout << a << '+' << b << '\n';
	QString s = QString::number(a + b);
	s = " = " + s;
	ret->setText(s);
}
