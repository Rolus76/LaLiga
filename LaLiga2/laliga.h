#ifndef LALIGA_H
#define LALIGA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LaLiga; }
QT_END_NAMESPACE

class LaLiga : public QMainWindow
{
    Q_OBJECT

public:
    LaLiga(QWidget *parent = nullptr);
    ~LaLiga();

private:
    Ui::LaLiga *ui;
};
#endif // LALIGA_H
