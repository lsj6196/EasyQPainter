/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyCalculateDegree.h"
#include "MyCalculatePos.h"
#include "MyCube.h"
#include "MyCurve.h"
#include "MyDrawImage.h"
#include "MyPenColor.h"
#include "MyPenStyle.h"
#include "MyPlanetSystem.h"
#include "MySimple3D.h"
#include "MyTextPath.h"
#include "MyWave.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    MyPenStyle *tabPenStyle;
    MyPenColor *tabPenColor;
    MyCube *tabCube;
    MyTextPath *tabTextPath;
    MyPlanetSystem *tabPlanetSystem;
    MyDrawImage *tabDrawImage;
    MyCalculatePos *tabCalculatePos;
    MyCalculateDegree *tabCalculateDegree;
    MyCurve *tabCurve;
    MySimple3D *tabSimple3D;
    MyWave *tabWave;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(472, 322);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabPenStyle = new MyPenStyle();
        tabPenStyle->setObjectName(QString::fromUtf8("tabPenStyle"));
        tabWidget->addTab(tabPenStyle, QString());
        tabPenColor = new MyPenColor();
        tabPenColor->setObjectName(QString::fromUtf8("tabPenColor"));
        tabWidget->addTab(tabPenColor, QString());
        tabCube = new MyCube();
        tabCube->setObjectName(QString::fromUtf8("tabCube"));
        tabWidget->addTab(tabCube, QString());
        tabTextPath = new MyTextPath();
        tabTextPath->setObjectName(QString::fromUtf8("tabTextPath"));
        tabWidget->addTab(tabTextPath, QString());
        tabPlanetSystem = new MyPlanetSystem();
        tabPlanetSystem->setObjectName(QString::fromUtf8("tabPlanetSystem"));
        tabWidget->addTab(tabPlanetSystem, QString());
        tabDrawImage = new MyDrawImage();
        tabDrawImage->setObjectName(QString::fromUtf8("tabDrawImage"));
        tabWidget->addTab(tabDrawImage, QString());
        tabCalculatePos = new MyCalculatePos();
        tabCalculatePos->setObjectName(QString::fromUtf8("tabCalculatePos"));
        tabWidget->addTab(tabCalculatePos, QString());
        tabCalculateDegree = new MyCalculateDegree();
        tabCalculateDegree->setObjectName(QString::fromUtf8("tabCalculateDegree"));
        tabWidget->addTab(tabCalculateDegree, QString());
        tabCurve = new MyCurve();
        tabCurve->setObjectName(QString::fromUtf8("tabCurve"));
        tabWidget->addTab(tabCurve, QString());
        tabSimple3D = new MySimple3D();
        tabSimple3D->setObjectName(QString::fromUtf8("tabSimple3D"));
        tabWidget->addTab(tabSimple3D, QString());
        tabWave = new MyWave();
        tabWave->setObjectName(QString::fromUtf8("tabWave"));
        tabWidget->addTab(tabWave, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(10);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPenStyle), QCoreApplication::translate("MainWindow", "PenStyle", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPenColor), QCoreApplication::translate("MainWindow", "PenColor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCube), QCoreApplication::translate("MainWindow", "Cube", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTextPath), QCoreApplication::translate("MainWindow", "TextPath", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPlanetSystem), QCoreApplication::translate("MainWindow", "PlanetSystem", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDrawImage), QCoreApplication::translate("MainWindow", "DrawImage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCalculatePos), QCoreApplication::translate("MainWindow", "CalculatePos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCalculateDegree), QCoreApplication::translate("MainWindow", "CalculateDegree", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCurve), QCoreApplication::translate("MainWindow", "Curve", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSimple3D), QCoreApplication::translate("MainWindow", "Simpe3D", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWave), QCoreApplication::translate("MainWindow", "Wave", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
