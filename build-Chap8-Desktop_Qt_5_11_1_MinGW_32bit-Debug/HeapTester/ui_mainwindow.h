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
#include "heaptestwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDelete_Min;
    QAction *actionFill_Random;
    QAction *actionClear_Heap;
    QAction *actionragnarsTest;
    HeapTestWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuHeapTester;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionDelete_Min = new QAction(MainWindow);
        actionDelete_Min->setObjectName(QStringLiteral("actionDelete_Min"));
        actionFill_Random = new QAction(MainWindow);
        actionFill_Random->setObjectName(QStringLiteral("actionFill_Random"));
        actionClear_Heap = new QAction(MainWindow);
        actionClear_Heap->setObjectName(QStringLiteral("actionClear_Heap"));
        actionragnarsTest = new QAction(MainWindow);
        actionragnarsTest->setObjectName(QStringLiteral("actionragnarsTest"));
        centralWidget = new HeapTestWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuHeapTester = new QMenu(menuBar);
        menuHeapTester->setObjectName(QStringLiteral("menuHeapTester"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHeapTester->menuAction());
        menuHeapTester->addAction(actionClear_Heap);
        menuHeapTester->addAction(actionDelete_Min);
        menuHeapTester->addAction(actionFill_Random);
        menuHeapTester->addAction(actionragnarsTest);
        mainToolBar->addAction(actionDelete_Min);
        mainToolBar->addAction(actionClear_Heap);
        mainToolBar->addAction(actionragnarsTest);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "The HeapTester - minimum heap / prio queue", nullptr));
        actionDelete_Min->setText(QApplication::translate("MainWindow", "Delete Min", nullptr));
        actionFill_Random->setText(QApplication::translate("MainWindow", "Fill Random", nullptr));
        actionClear_Heap->setText(QApplication::translate("MainWindow", "Clear Heap", nullptr));
        actionragnarsTest->setText(QApplication::translate("MainWindow", "ragnarsTest", nullptr));
        menuHeapTester->setTitle(QApplication::translate("MainWindow", "HeapTester", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
