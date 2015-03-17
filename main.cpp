#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    a.setApplicationName("QTextEditor");
    a.setApplicationVersion("0.0.1");
    a.setOrganizationName("ggu");
    a.setOrganizationDomain("ggu.ac.in");
    QIcon icon(":/icons/GGV-Logo.png");
    a.setWindowIcon(icon);
    return a.exec();
}
