#ifndef LALIGA3_H
#define LALIGA3_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QFont>
#include <QString>
#include <QRandomGenerator>
#include <QTime>
#include <iostream>
#include <QGlobal.h>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class LaLiga3; }
QT_END_NAMESPACE

class LaLiga3 : public QMainWindow
{
    Q_OBJECT

public:
    LaLiga3(QWidget *parent = nullptr);
    ~LaLiga3();

private slots:
    void on_RealMadrid_clicked();

    void on_pushButton_6_clicked();


    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::LaLiga3 *ui;
};
#endif // LALIGA3_H
