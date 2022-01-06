#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pBCalculatePlus_clicked();
    void on_pBCalculateFois_clicked();
    void on_pBCalculateDiviser_clicked();
    void on_pBCalculateMoins_clicked();
    void on_pBClear_clicked();
    void on_pBExit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
