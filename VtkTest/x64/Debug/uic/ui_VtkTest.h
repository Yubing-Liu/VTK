/********************************************************************************
** Form generated from reading UI file 'VtkTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VTKTEST_H
#define UI_VTKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qvtkopenglnativewidget.h>

QT_BEGIN_NAMESPACE

class Ui_VtkTestClass
{
public:
    QWidget *centralWidget;
    QVTKOpenGLNativeWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VtkTestClass)
    {
        if (VtkTestClass->objectName().isEmpty())
            VtkTestClass->setObjectName(QString::fromUtf8("VtkTestClass"));
        VtkTestClass->resize(1123, 792);
        centralWidget = new QWidget(VtkTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QVTKOpenGLNativeWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 1041, 681));
        VtkTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VtkTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1123, 26));
        VtkTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VtkTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VtkTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VtkTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VtkTestClass->setStatusBar(statusBar);

        retranslateUi(VtkTestClass);

        QMetaObject::connectSlotsByName(VtkTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *VtkTestClass)
    {
        VtkTestClass->setWindowTitle(QCoreApplication::translate("VtkTestClass", "VtkTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VtkTestClass: public Ui_VtkTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VTKTEST_H
