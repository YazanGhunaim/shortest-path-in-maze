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
#include <QtWidgets/QSlider>
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
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QComboBox *inputStartx;
    QComboBox *inputStarty;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_3;
    QComboBox *inputEndx;
    QComboBox *inputEndy;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(591, 516);
        MainWindow->setAutoFillBackground(false);
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 381, 481));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        titleLabel = new QLabel(layoutWidget);
        titleLabel->setObjectName("titleLabel");

        horizontalLayout->addWidget(titleLabel, 0, Qt::AlignHCenter);

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
        widget->setGeometry(QRect(420, 90, 130, 267));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_9->addWidget(label_3, 0, Qt::AlignHCenter);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_7->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        inputStartx = new QComboBox(widget);
        inputStartx->setObjectName("inputStartx");

        verticalLayout_6->addWidget(inputStartx);

        inputStarty = new QComboBox(widget);
        inputStarty->setObjectName("inputStarty");

        verticalLayout_6->addWidget(inputStarty);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        inputEndx = new QComboBox(widget);
        inputEndx->setObjectName("inputEndx");

        verticalLayout_3->addWidget(inputEndx);

        inputEndy = new QComboBox(widget);
        inputEndy->setObjectName("inputEndy");

        verticalLayout_3->addWidget(inputEndy);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_5);


        verticalLayout_9->addLayout(verticalLayout_8);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Maze Solver", nullptr));
        generateMaze->setText(QCoreApplication::translate("MainWindow", "Generate Maze", nullptr));
        findPath->setText(QCoreApplication::translate("MainWindow", "Find Path", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Grid Size", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
