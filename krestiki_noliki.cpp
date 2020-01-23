#include "krestiki_noliki.h"
#include "ui_krestiki_noliki.h"
#include <QHBoxLayout>
#include <QTableWidgetItem>
#include <QSize>
#include <QPixmap>
#include "name_player.h"
#include <QString>


Krestiki_Noliki::Krestiki_Noliki(QWidget *parent): QMainWindow(parent), ui(new Ui::Krestiki_Noliki)
{
    ui->setupUi(this);

    name_player *Players = new name_player;
    Players->show();
    connect(Players, SIGNAL(Send_name_Player_1(QString)) , this , SLOT(Read_Name_1(QString) ) );
    connect(Players, SIGNAL(Send_name_Player_2(QString)) , this , SLOT(Read_Name_2(QString) ) );
    Players->exec();



   // peremen = false;

    krest.addFile(QString(":/new/prefix1/108.png") , QSize(10,10) ,QIcon::Disabled , QIcon::Off );  // выставили иконку "Крестик" для
    //неактивной кнопке

    nol.addFile(QString(":/new/prefix1/number0_PNG19182.png") , QSize(50,50) , QIcon::Disabled, QIcon::Off); // выставили иконку "Нолик" для
    //неактивной кнопке


    /*
    if (peremen == false){
    Krestiki_Noliki::Read_Name_1(m);}
    else{
    Krestiki_Noliki::Read_Name_2(m_2);
    }

    */




}

Krestiki_Noliki::~Krestiki_Noliki()
{
    delete ui;

}

///////////////////////////////////


QString Krestiki_Noliki::Read_Name_1(const QString &nname_1)
{
    m = nname_1;
    ui->statusbar->showMessage("Сейчас Ходит игрок " + nname_1  );
    return m;
}

QString Krestiki_Noliki::Read_Name_2(const QString &nname_2)
{
    m_2 = nname_2;
    ui->statusbar->showMessage("Сейчас Ходит игрок " + nname_2  );
    return m_2;
}




///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////рАБОТА С кнопками //////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////

int Krestiki_Noliki::on_pushButton_clicked()   // первая кнопка
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton->setEnabled(0);
            ui->pushButton->setIcon(krest);
            ui->pushButton->setIconSize(QSize(100,100));

            //ui->statusbar->showMessage("Сейчас Ходит игрок " + nname  );

            Krestiki_Noliki::Read_Name_1(m);

            this->A = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
            return this->A;



         }

    else
        {
            ui->pushButton->setEnabled(0);
            ui->pushButton->setIcon(nol);
            ui->pushButton->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->A = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
            return this->A;

    }



}

void Krestiki_Noliki::on_pushButton_3_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_3->setEnabled(0);
            ui->pushButton_3->setIcon(krest);
            ui->pushButton_3->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->B = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
         }

    else
        {
            ui->pushButton_3->setEnabled(0);
            ui->pushButton_3->setIcon(nol);
            ui->pushButton_3->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->B = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}

void Krestiki_Noliki::on_pushButton_2_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_2->setEnabled(0);
            ui->pushButton_2->setIcon(krest);
            ui->pushButton_2->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->C = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
    }

    else
        {
            ui->pushButton_2->setEnabled(0);
            ui->pushButton_2->setIcon(nol);
            ui->pushButton_2->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->C = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}



int Krestiki_Noliki::on_pushButton_4_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_4->setEnabled(0);
            ui->pushButton_4->setIcon(krest);
            ui->pushButton_4->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->D = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
            return this->D;


         }

    else
        {
            ui->pushButton_4->setEnabled(0);
            ui->pushButton_4->setIcon(nol);
            ui->pushButton_4->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->D = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
            return this->D;


    }
}




void Krestiki_Noliki::on_pushButton_6_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_6->setEnabled(0);
            ui->pushButton_6->setIcon(krest);
            ui->pushButton_6->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->E = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
    }

    else
        {
            ui->pushButton_6->setEnabled(0);
            ui->pushButton_6->setIcon(nol);
            ui->pushButton_6->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->C = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}

void Krestiki_Noliki::on_pushButton_5_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_5->setEnabled(0);
            ui->pushButton_5->setIcon(krest);
            ui->pushButton_5->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->F = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
    }

    else
        {
            ui->pushButton_5->setEnabled(0);
            ui->pushButton_5->setIcon(nol);
            ui->pushButton_5->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->F = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}

int Krestiki_Noliki::on_pushButton_7_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_7->setEnabled(0);
            ui->pushButton_7->setIcon(krest);
            ui->pushButton_7->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->G = 2;
            peremen = true; 
            Krestiki_Noliki::Winner();
            return this->G;

    }

    else
        {
            ui->pushButton_7->setEnabled(0);
            ui->pushButton_7->setIcon(nol);
            ui->pushButton_7->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->G = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
            return this->G;

    }
}

void Krestiki_Noliki::on_pushButton_8_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_8->setEnabled(0);
            ui->pushButton_8->setIcon(krest);
            ui->pushButton_8->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->H = 2;
            peremen = true;
            Krestiki_Noliki::Winner();
        }

    else
        {
            ui->pushButton_8->setEnabled(0);
            ui->pushButton_8->setIcon(nol);
            ui->pushButton_8->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->H=1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}

void Krestiki_Noliki::on_pushButton_9_clicked()
{
    if (peremen == false)
        {
        /// появление крестики, смена будетовой переменной
            ui->pushButton_9->setEnabled(0);
            ui->pushButton_9->setIcon(krest);
            ui->pushButton_9->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_1(m);

            this->J = 2;
            peremen = true;
            Krestiki_Noliki::Winner();

    }

    else
        {
            ui->pushButton_9->setEnabled(0);
            ui->pushButton_9->setIcon(nol);
            ui->pushButton_9->setIconSize(QSize(100,100));

            Krestiki_Noliki::Read_Name_2(m_2);

            this->J = 1;
            peremen = false;
            Krestiki_Noliki::Winner();
    }
}



/////////////// Условия победы /////////////

void Krestiki_Noliki::Winner(){

    Win = QIcon(":/new/prefix1/f8e9fda2b9f7573dd2f33864d5a0f28f.png");
    WIN_Messeg_Box = new QMessageBox(QMessageBox::Information , "ПОБЕДА" , "Победил игрок" + m_2 , QMessageBox::Ok,this);
    WIN_Messeg_Box_2 = new QMessageBox(QMessageBox::Information , "ПОБЕДА" , "Победил игрок" + m , QMessageBox::Ok,this);

        /// A-D-G
    if(A == 2 && D == 2 && G == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (A == 1 && D == 1 && G== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }

        /// A-B-C
    if(A == 2 && B == 2 && C == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (A == 1 && B == 1 && C== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }


        /// D-E-F
    if(D == 2 && E == 2 && F == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (D == 1 && E == 1 && F== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }


        /// G-H-J
    if(G == 2 && H == 2 && J == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (G == 1 && H == 1 && J == 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }


        /// B-E-H
    if(B == 2 && E == 2 && H == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (B == 1 && E == 1 && H== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }


        /// C-F-J
    if(C == 2 && F == 2 && J == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (C == 1 && F == 1 && J== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }

        /// A-E-J
    if(A == 2 && E == 2 && J == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (A == 1 && E == 1 && J== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }

        /// C-E-G
    if(C == 2 && E == 2 && G == 2)
        {

        WIN_Messeg_Box->setWindowIcon(Win);
        WIN_Messeg_Box->show();

    }
    else if (C == 1 && E == 1 && G== 1) {

        WIN_Messeg_Box_2->setWindowIcon(Win);
        WIN_Messeg_Box_2->show();
    }


    if (ui->pushButton->isEnabled() == 0 &&
            ui->pushButton_2->isEnabled() == 0 &&
            ui->pushButton_3->isEnabled() == 0 &&
            ui->pushButton_4->isEnabled() == 0 &&
            ui->pushButton_5->isEnabled() == 0 &&
            ui->pushButton_6->isEnabled() == 0 &&
            ui->pushButton_7->isEnabled() == 0 &&
            ui->pushButton_8->isEnabled() == 0 &&
            ui->pushButton_9->isEnabled() == 0 )
    {
        QMessageBox::information(this , "НИЧЬЯ" , "Победила дружба" , QMessageBox::StandardButton::Yes);

    }


}

    // Сведение об авторе

void Krestiki_Noliki::on_actionAutor_triggered()
{
    QMessageBox *My_Box_Autor = new QMessageBox(QMessageBox::Information, "Автор" , "SHCHERBA KIRILL", QMessageBox::Ok , this);
    My_Box_Autor->show();
}


