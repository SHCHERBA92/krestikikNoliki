#ifndef KRESTIKI_NOLIKI_H
#define KRESTIKI_NOLIKI_H

#include <QMainWindow>
#include <QMessageBox>




QT_BEGIN_NAMESPACE
namespace Ui { class Krestiki_Noliki; }
QT_END_NAMESPACE

class Krestiki_Noliki : public QMainWindow
{
    Q_OBJECT

public:
    Krestiki_Noliki(QWidget *parent = nullptr);
    ~Krestiki_Noliki();
     int A , B ,C, D, E, F, G, H, J;
     void Winner();

private slots:
    int on_pushButton_clicked();   // A

    void on_pushButton_3_clicked(); //B

    void on_pushButton_2_clicked();//C

    int on_pushButton_4_clicked();     //D

    void on_pushButton_6_clicked();//E

    void on_pushButton_5_clicked();//F

    int on_pushButton_7_clicked();  //G

    void on_pushButton_8_clicked();//H

    void on_pushButton_9_clicked();//J

    QString Read_Name_1(const QString &nname);
    QString Read_Name_2(const QString &nname);


    void on_actionAutor_triggered();

private:
    Ui::Krestiki_Noliki *ui;
    bool peremen = false;
    QIcon krest, nol ;

    QString m , m_2;

    QIcon Win ;//= QIcon(":/new/prefix1/f8e9fda2b9f7573dd2f33864d5a0f28f.png");
    QMessageBox *WIN_Messeg_Box ;//= new QMessageBox(QMessageBox::Information , "ПОБЕДА" , "Победил игрок" + Krestiki_Noliki::Read_Name_1(m) , QMessageBox::Ok,this);
    QMessageBox *WIN_Messeg_Box_2 ;
};
#endif // KRESTIKI_NOLIKI_H
