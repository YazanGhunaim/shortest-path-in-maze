#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "mazeSolver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateMaze_clicked();

    void on_findPath_clicked();

private:
    Ui::MainWindow *ui;
    mazeSolver m_solver;
};
#endif // MAINWINDOW_H
