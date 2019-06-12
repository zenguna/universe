#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "PASPerfLib.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"This is the test application";
    pasPerfLib *objpasPerfLib = new pasPerfLib();
    objpasPerfLib->sayHelloWorld();
    delete objpasPerfLib;
    return a.exec();
}
