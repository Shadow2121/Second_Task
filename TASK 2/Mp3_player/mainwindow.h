#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMediaPlayer>
#include<QVideoWidget>
#include<QFileDialog>
#include<QProgressBar>
#include<QSlider>
#include<QDialog>
#include<QMediaPlayer>
#include<QtDebug>
#include <QListWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_actionOpen_triggered();

    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionmake_a_play_list_triggered();

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
};
#endif // MAINWINDOW_H
