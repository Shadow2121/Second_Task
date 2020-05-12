#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);

    connect(player, &QMediaPlayer::positionChanged ,this ,&MainWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged ,this ,&MainWindow::on_durationChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionPlay_triggered()
{
    //player->setMedia(QUrl::fromLocalFile("C:/Users/User/Music/temp.mp3"));
    player->play();
}

void MainWindow::on_actionPause_triggered()
{
    player->pause();
}

void MainWindow::on_actionStop_triggered()
{
    player->stop();
}

void MainWindow::on_actionOpen_triggered()
{
    QString Filename =QFileDialog::getOpenFileName(this,"Open the file");
    on_actionStop_triggered();

    player->setMedia(QUrl::fromLocalFile(Filename));
    on_actionPlay_triggered();
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
    player->setVolume(position);
}

void MainWindow::on_positionChanged(qint64 position)
{
    ui->horizontalSlider->setValue(position);
}

void MainWindow::on_durationChanged(qint64 position)
{
    ui->horizontalSlider->setMaximum(position);
}
