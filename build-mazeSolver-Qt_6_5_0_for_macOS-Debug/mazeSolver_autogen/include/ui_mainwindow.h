/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QPushButton *generateMaze;
    QGraphicsView *graphicsView;
    QPushButton *findPath;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QComboBox *inputStartx;
    QComboBox *inputStarty;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_7;
    QComboBox *inputEndx;
    QComboBox *inputEndy;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(531, 504);
        MainWindow->setAutoFillBackground(false);
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 351, 461));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        titleLabel = new QLabel(layoutWidget);
        titleLabel->setObjectName("titleLabel");

        horizontalLayout->addWidget(titleLabel);

        generateMaze = new QPushButton(layoutWidget);
        generateMaze->setObjectName("generateMaze");

        horizontalLayout->addWidget(generateMaze);


        verticalLayout->addLayout(horizontalLayout);

        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        findPath = new QPushButton(layoutWidget);
        findPath->setObjectName("findPath");

        verticalLayout->addWidget(findPath);

        widget = new QWidget(MainWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(380, 110, 131, 241));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        inputStartx = new QComboBox(widget);
        inputStartx->setObjectName("inputStartx");

        verticalLayout_3->addWidget(inputStartx);

        inputStarty = new QComboBox(widget);
        inputStarty->setObjectName("inputStarty");

        verticalLayout_3->addWidget(inputStarty);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout_6->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout_6->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        inputEndx = new QComboBox(widget);
        inputEndx->setObjectName("inputEndx");

        verticalLayout_7->addWidget(inputEndx);

        inputEndy = new QComboBox(widget);
        inputEndy->setObjectName("inputEndy");

        verticalLayout_7->addWidget(inputEndy);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_5);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Maze Solver", nullptr));
        generateMaze->setText(QCoreApplication::translate("MainWindow", "Generate Maze", nullptr));
        findPath->setText(QCoreApplication::translate("MainWindow", "Find Path", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
