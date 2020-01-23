#include "name_player.h"
#include "ui_name_player.h"
#include <QMessageBox>



name_player::name_player(QWidget *parent): QDialog(parent), ui_2(new Ui::name_player)
{
    ui_2->setupUi(this);
    My_Text = "Игра рассчитана на два человека, вы должны поочерёдно делать ход, ставя крестик или нолик. \
Первый игрок ставит крестик, второй - нолик. Побеждает тот, кто первый соберёт все свои символы в линию";

    My_BOX = new QMessageBox(QMessageBox::Information,"ПРАВИЛА",My_Text,QMessageBox::Ok,this);
    My_BOX->show();
    My_BOX->exec();


}

name_player::~name_player()
{
    delete ui_2;
}


////// НАЖАТИЕ НА КНОПКУ ............
/// //////////////////////////////
void name_player::on_pushButton_clicked()
{
    emit Send_name_Player_1(ui_2->lineEdit->text());
    emit Send_name_Player_2(ui_2->lineEdit_2->text());
    close();
}
