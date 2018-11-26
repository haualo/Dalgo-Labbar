/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "mazewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionUltrafast;
    QAction *actionSearchRecursive;
    QAction *actionSearchFIFO;
    QAction *actionUniqpath;
    QAction *actionfMuliplepath;
    MazeWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMaze;
    QMenu *menuVisualisering;
    QMenu *menuAlgoritm;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(575, 376);
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QStringLiteral("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon1);
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName(QStringLiteral("actionFast"));
        actionFast->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFast->setIcon(icon2);
        actionUltrafast = new QAction(MainWindow);
        actionUltrafast->setObjectName(QStringLiteral("actionUltrafast"));
        actionUltrafast->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/cspeed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUltrafast->setIcon(icon3);
        actionSearchRecursive = new QAction(MainWindow);
        actionSearchRecursive->setObjectName(QStringLiteral("actionSearchRecursive"));
        actionSearchFIFO = new QAction(MainWindow);
        actionSearchFIFO->setObjectName(QStringLiteral("actionSearchFIFO"));
        actionUniqpath = new QAction(MainWindow);
        actionUniqpath->setObjectName(QStringLiteral("actionUniqpath"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/single.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUniqpath->setIcon(icon4);
        actionfMuliplepath = new QAction(MainWindow);
        actionfMuliplepath->setObjectName(QStringLiteral("actionfMuliplepath"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/multiple.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfMuliplepath->setIcon(icon5);
        centralWidget = new MazeWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(200, 200));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 22));
        menuMaze = new QMenu(menuBar);
        menuMaze->setObjectName(QStringLiteral("menuMaze"));
        menuVisualisering = new QMenu(menuBar);
        menuVisualisering->setObjectName(QStringLiteral("menuVisualisering"));
        menuAlgoritm = new QMenu(menuBar);
        menuAlgoritm->setObjectName(QStringLiteral("menuAlgoritm"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMaze->menuAction());
        menuBar->addAction(menuVisualisering->menuAction());
        menuBar->addAction(menuAlgoritm->menuAction());
        menuMaze->addSeparator();
        menuMaze->addAction(actionUniqpath);
        menuMaze->addAction(actionfMuliplepath);
        menuVisualisering->addAction(actionSlow);
        menuVisualisering->addAction(actionNormal);
        menuVisualisering->addAction(actionFast);
        menuVisualisering->addAction(actionUltrafast);
        menuAlgoritm->addAction(actionSearchRecursive);
        menuAlgoritm->addAction(actionSearchFIFO);
        mainToolBar->addAction(actionfMuliplepath);
        mainToolBar->addAction(actionUniqpath);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addAction(actionUltrafast);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSearchRecursive);
        mainToolBar->addAction(actionSearchFIFO);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSlow->setText(QApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QApplication::translate("MainWindow", "lagom", nullptr));
        actionFast->setText(QApplication::translate("MainWindow", "snabb", nullptr));
        actionUltrafast->setText(QApplication::translate("MainWindow", "supersnabb", nullptr));
        actionSearchRecursive->setText(QApplication::translate("MainWindow", "Rekursiv", nullptr));
        actionSearchFIFO->setText(QApplication::translate("MainWindow", "FIFO", nullptr));
        actionUniqpath->setText(QApplication::translate("MainWindow", "unikv\303\244gslabyrint", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUniqpath->setToolTip(QApplication::translate("MainWindow", "endast en v\303\244g mellan start & m\303\245l", nullptr));
#endif // QT_NO_TOOLTIP
        actionfMuliplepath->setText(QApplication::translate("MainWindow", "flerv\303\244gslabyrint", nullptr));
#ifndef QT_NO_TOOLTIP
        actionfMuliplepath->setToolTip(QApplication::translate("MainWindow", "flera v\303\244gar mellan start & m\303\245l", nullptr));
#endif // QT_NO_TOOLTIP
        menuMaze->setTitle(QApplication::translate("MainWindow", "Maze", nullptr));
        menuVisualisering->setTitle(QApplication::translate("MainWindow", "Visualisering", nullptr));
        menuAlgoritm->setTitle(QApplication::translate("MainWindow", "Algoritm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
