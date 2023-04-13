#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMainWindow>
#include <iostream>
#include <unistd.h>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialize_comboBoxes(const size_t rows, const size_t cols)
{
    size_t i;
    for(i = 0; i < rows; ++i)
    {
        ui->inputStartx->addItem(QString::number(i));
        ui->inputEndx->addItem(QString::number(i));
    }
    for(i = 0; i < cols; ++i)
    {
        ui->inputStarty->addItem(QString::number(i));
        ui->inputEndy->addItem(QString::number(i));
    }
}

void MainWindow::extract_userData()
{
    QString selectedStartX = ui->inputStartx->currentText();
    QString selectedStartY = ui->inputStarty->currentText();

    QString selectedEndX = ui->inputEndx->currentText();
    QString selectedEndY = ui->inputEndy->currentText();

    m_solver = mazeSolver(25,25,ui->graphicsView,selectedStartX.toInt(),selectedStartY.toInt(),selectedEndX.toInt(),selectedEndY.toInt());
}
void MainWindow::on_generateMaze_clicked()
{
    extract_userData();
    initialize_comboBoxes(m_solver.rows(),m_solver.cols());
    m_solver.generate_maze();
    m_solver.display_maze(ui->graphicsView);
}


void MainWindow::on_findPath_clicked()
{
    m_solver.bfs();
}

