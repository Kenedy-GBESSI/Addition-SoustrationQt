#ifndef ADDICTION_H
#define ADDICTION_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Addiction; }
QT_END_NAMESPACE

class Addiction : public QDialog
{
    Q_OBJECT

public:
    Addiction(QWidget *parent = nullptr);
    ~Addiction();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Addiction *ui;
};
#endif // ADDICTION_H
