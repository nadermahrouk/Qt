#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    compteur = 0;

    // Connecter le timer à la méthode incrementerCompteur
    connect(timer, &QTimer::timeout, this, &MainWindow::incrementerCompteur);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello Nader again");
    compteur = 0; // Réinitialiser le compteur à 0
    timer->start(200); // Démarrer le timer avec un intervalle de 100 ms
}

void MainWindow::incrementerCompteur()
{
    if (compteur < 10) {
        ui->lcdNumber->display(compteur); // Afficher la valeur actuelle du compteur
        compteur++; // Incrémente le compteur
    } else {
        timer->stop(); // Arrêter le timer lorsque le compteur atteint 10
    }
}
