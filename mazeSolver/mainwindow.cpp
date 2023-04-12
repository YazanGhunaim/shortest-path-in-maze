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


void MainWindow::on_generateMaze_clicked()
{
    m_solver = mazeSolver(20,20);
    m_solver.generate_maze();
    m_solver.display_maze(ui->graphicsView);
}


void MainWindow::on_findPath_clicked()
{
    m_solver.bfs();
}

