#include "addiction.h"
#include "ui_addiction.h"

Addiction::Addiction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Addiction)
{
    ui->setupUi(this);
}

Addiction::~Addiction()
{
    delete ui;
}


void Addiction::on_pushButton_2_clicked()
{
    QString text = "";
   int val = ui->lcdNumber->intValue();
    val = val +1;
   for(int i=0;i<=12;i++){
     QString v = QString::number(val);
     QString vm = QString::number(val+i);
     text = text + v + "+" + QString::number(i) + "=" + vm +"<br>";

   }
   ui->textEdit_2->setHtml(text);
   ui->lcdNumber->display(val);
   ui->textEdit->setReadOnly(true);
}


void Addiction::on_pushButton_clicked()
{
    QString text = "";
   int val = ui->lcdNumber->intValue();
    val = val -1;
   for(int i=0;i<=12;i++){
     QString v = QString::number(val);
     QString vm = QString::number(val+i);
     text = text + v + "+" + QString::number(i) + "=" + vm +"<br>";

   }
   ui->textEdit_2->setHtml(text);
   ui->lcdNumber->display(val);
   ui->textEdit->setReadOnly(true);
}

