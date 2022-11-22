#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//选择文本文件/码字集
void MainWindow::on_pushButton_clicked()
{
    fileName_txt = QFileDialog::getOpenFileName(this,QStringLiteral("选择文件"),".",QStringLiteral("本本文件(*txt)"));
    ui->textBrowser->setText(fileName_txt);

    QFile file(fileName_txt);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray array = file.readAll();
        QString str(array);
        ui->text->setText(str);
        file.close();
    }
}

//选择二进制文件
void MainWindow::on_pushButton_2_clicked()
{

}

//编码
void MainWindow::on_pushButton_3_clicked()
{
    int num = 0;   //字符结构体的频度不为0的字符个数
    mychar chars[NUMBER]; //字符结构体数组
}



