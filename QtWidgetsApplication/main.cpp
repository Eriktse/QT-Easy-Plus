
#include "Widget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    //����Ӧ��
    QApplication a(argc, argv);
    //�����ؼ�����ʾ
    Widget w;
    w.show();
    //a.exec()���ϼ���¼���������Ӧ
    return a.exec();
}
