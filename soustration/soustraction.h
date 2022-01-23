#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class soustraction; }
QT_END_NAMESPACE

class soustraction : public QDialog
{
    Q_OBJECT

public:
    soustraction(QWidget *parent = nullptr);
    ~soustraction();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::soustraction *ui;
};
#endif // SOUSTRACTION_H
