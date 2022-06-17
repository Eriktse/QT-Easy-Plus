
#include "Widget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    //创建应用
    QApplication a(argc, argv);
    //创建控件并显示
    Widget w;
    w.show();
    //a.exec()不断检测事件并做出回应
    return a.exec();
}
