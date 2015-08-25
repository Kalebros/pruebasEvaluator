#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    evaluador=new Evaluador(this);

    evaluador->vigilaObjecto(ui->checkBox,"checked");
    evaluador->vigilaObjecto(ui->doubleSpinBox,"value");
    evaluador->vigilaObjecto(ui->lineEdit,"text");
    evaluador->vigilaObjecto(ui->spinBox,"value");
    evaluador->vigilaObjecto(ui->comboBox,"currentIndex");
    evaluador->vigilaObjecto(ui->comboBox,"currentText");
}

MainWindow::~MainWindow()
{
    delete ui;
}
