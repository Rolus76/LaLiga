#include "laliga.h"
#include "ui_laliga.h"

LaLiga::LaLiga(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LaLiga)
{
    ui->setupUi(this);
}

LaLiga::~LaLiga()
{
    delete ui;
}

