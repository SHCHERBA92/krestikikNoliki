#ifndef NAME_PLAYER_H
#define NAME_PLAYER_H

#include <QDialog>
#include <QString>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class name_player; }
QT_END_NAMESPACE

class name_player : public QDialog
{
    Q_OBJECT

public:
    name_player(QWidget *parent = nullptr);
    ~name_player();
     QMessageBox *My_BOX;

     // QString name_Player_1;
     // QString name_Player_2;

private slots:
    void on_pushButton_clicked();

private:
    Ui::name_player *ui_2;
    QString My_Text;
signals:
    void Send_name_Player_1(const QString &str_1);
    void Send_name_Player_2(const QString &str_2);


};

#endif // NAME_PLAYER_H
