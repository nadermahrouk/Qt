#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QChar>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Définir l'image d'arrière-plan avec QPalette et un chemin relatif
    QPalette palette;
    QPixmap background("C:/Users/NADER/Desktop/Qt_projet/calculatrice/Capture.jpg");  // Chemin relatif vers l'image
    palette.setBrush(QPalette::Window, QBrush(background));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "1";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}


void MainWindow::on_pushButton_2_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "2";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_3_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "3";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_4_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "4";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_5_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "5";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_6_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "6";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_7_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "7";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_8_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "8";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_9_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "9";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}
void MainWindow::on_pushButton_0_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "0";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}
void MainWindow::on_pushButton_15_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "+";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_16_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "-";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}

void MainWindow::on_pushButton_14_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme
    QString operat = "";
    int index = -1; // Initialiser à -1 pour vérifier plus tard
    bool ok;

    QChar operation[] = {'+', '-', '*', '/'}; // Déclaration des opérations

    float a, b, c;

    // Récupérer le texte actuel
    int len = currentText.length();

    // Trouver l'opération dans la chaîne
    for (int i = 0; i < len; i++) {
        // Vérifier si le caractère courant est une opération
        if (currentText[i] == operation[0] ||
            currentText[i] == operation[1] ||
            currentText[i] == operation[2] ||
            currentText[i] == operation[3]) {
            operat = currentText[i]; // Enregistrer l'opération
            index = i; // Enregistrer l'index
            break; // Sortir de la boucle dès que l'opération est trouvée
        }
    }

    // Vérifier si une opération a été trouvée
    if (index == -1) {
        ui->textBrowser->setText("Erreur: aucune opération trouvée."); // Message d'erreur
        return; // Sortir si aucune opération n'est trouvée
    }

    // Extraire les opérandes
    a = currentText.mid(0, index).toFloat(&ok); // Opérande avant l'opération
    if (!ok) {
        ui->textBrowser->setText("Erreur: opérande invalide."); // Message d'erreur
        return; // Sortir si la conversion échoue
    }

    b = currentText.mid(index + 1).toFloat(&ok); // Opérande après l'opération
    if (!ok) {
        ui->textBrowser->setText("Erreur: opérande invalide."); // Message d'erreur
        return; // Sortir si la conversion échoue
    }

    // Effectuer l'opération
    if (operat == '+') {
        c = a + b;
    } else if (operat == '-') {
        c = a - b;
    } else if (operat == '*') {
        c = a * b;
    } else  {
        if (b != 0) {
            c = a / b;
        } else {
            ui->textBrowser->setText("Erreur: division par zéro."); // Message d'erreur
            return; // Sortir si division par zéro
        }
    }

    // Convertir le résultat en QString et mettre à jour le textBrowser
    currentText = QString::number(c);
    ui->textBrowser->setText(currentText);
}


void MainWindow::on_pushButton_13_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "*";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}


void MainWindow::on_pushButton_17_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText += "/";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}


void MainWindow::on_pushButton_18_clicked()
{
    // Récupérer le texte actuel
    QString currentText = ui->textBrowser->toPlainText();  // Récupérer le texte sans mise en forme

    // Ajouter "1" au texte existant
    currentText = "";

    // Mettre à jour le textBrowser avec le nouveau texte
    ui->textBrowser->setText(currentText);
}




