#include "QtGitTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGitTest w;
    w.show();
    return a.exec();
}
