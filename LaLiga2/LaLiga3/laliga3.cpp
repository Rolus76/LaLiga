#include "laliga3.h"
#include "ui_laliga3.h"

LaLiga3::LaLiga3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LaLiga3)
{
    ui->setupUi(this);
}

LaLiga3::~LaLiga3()
{
    delete ui;
}



void LaLiga3::on_RealMadrid_clicked()
{
    ui->textEdit->setText("Thibaut Courtois,Rodrygo Goes,Vinícius Júnior,Karim Benzema,Casemiro,"
                       "Luka Modrić,Toni Kroos,Éder Militão,David Alaba,Daniel Carvajal");

}


void LaLiga3::on_pushButton_6_clicked()
{
    ui->textEdit->setText("Alexander Isak, David Silva, Mathew Ryan, Mikel Oyarzabal, Adnan Januzaj,"
                          " Diego Rico,Álex Remiro, Mikel MerinoAlexander Sølroth, Ander Barrenetxea,Nacho Monreal");
}


void LaLiga3::on_pushButton_8_clicked()
{
     ui->textEdit->setText("Jules Koundé, Erik Lamela, Ivan Rakitić,Lucas Ocampos,Yassine Bounou,Jesús Navas,"
                           "Marcos Acuña,Diego Carlos,Suso,Munir El Haddadi,Alejandro Gómez");
}


void LaLiga3::on_pushButton_9_clicked()
{
     ui->textEdit->setText("Luis Suárez Antoine Griezmann, João Félix, Rodrigo De Paul ,Yannick Carrasco,Ángel Correa, "
                           "Jan Oblak, Koke, Marcos Llorente, Kieran Trippier, Thomas lemar");
}


void LaLiga3::on_pushButton_15_clicked()
{
     ui->textEdit->setText("Joel Robles, Martín Montoya,Edgar González, Paul Akouokou,Marc Bartra,Victor Ruiz"
                           "  Juanmi Jiménez, Nabil Fekir, Borja Iglesias,Sergio Canales, Cristian Tello");
}


void LaLiga3::on_pushButton_17_clicked()
{
     ui->textEdit->setText("Luca Zidane,Mario Suárez,Alejandro Catena,Santiago Comesaña,Isi Palazón,Óscar Trejo, Randy Nteka, Bébé, Andrés Martín");
}


void LaLiga3::on_pushButton_20_clicked()
{
     ui->textEdit->setText("Sergio Pirón,Ignacio Vidal,  Juan Cruz,  Unai García,David Zubiria, Kike Barja"
                           " Oier Sanjurjo,Jon Moncayola,Darko Brašanac,  Ezequiel Ávila, Roberto Morales");
}


void LaLiga3::on_pushButton_19_clicked()
{
     ui->textEdit->setText("Unai Simón,Álex Petxarroman,Unai Núñez, Iñigo Martínez, Yeray Álvarez, Mikel Vesga,"
                           "Alejandro Berenguer,Oihan Sancet, Iñaki Williams, Iker Muniain, Jon Morcillo");
}


void LaLiga3::on_pushButton_16_clicked()
{
     ui->textEdit->setText("Marc-André ter Stegen,Sergiño Dest,Gerard Piqué, Ronald Araújo,"
                           "Riqui Puig, Ousmane Dembélé,Memphis Depay,Ansu Fati, Martin Braithwaite");
}


void LaLiga3::on_pushButton_18_clicked()
{
     ui->textEdit->setText(" Jaume Domènech, Thierry Correia, Toni Lato, Yunus Musah,Gabriel Paulista"
                           " Hugo Guillamón,Gonçalo Guedes,Uroš Račić, Maximiliano Gómez,Carlos Soler, Hélder Costa");
}


void LaLiga3::on_pushButton_11_clicked()
{
     ui->textEdit->setText("Andrés Prieto, Gonzalo Ávila,Adrià Pedrosa,Víctor Sánchez,Edinaldo Gomes,Wu Lei,Ander Iturraspe"
                           " Facundo Ferreyra,Sergi Darder,Raúl de Tomás");
}


void LaLiga3::on_pushButton_14_clicked()
{
 ui->textEdit->setText("Manuel Reina,Joan Sastre,Lumor Agbenyenu,Josep Señé,Xisco Campos, Lago Junior"
                       "Marc Pedraza,Ariday Cabrera, Salva Sevilla,Abdón Prats,Alexander Alegría");
}


void LaLiga3::on_pushButton_13_clicked()
{
 ui->textEdit->setText("Sergio Asenjo, Mario Gaspar,Raúl Albiol,Pau Torres,Ramiro Funes Mori,Gerard Moreno"
                       "Santi Cazorla,Carlos Bacca,Vicente Iborra,Samuel Chukwueze");
}

void LaLiga3::on_pushButton_12_clicked()
{
  ui->textEdit->setText("Rui Silva,Dimitri Foulquier,Nehuén Pérez,Maxime Gonalons,Luis Milla,Germán Sánchez"
                        "Luis Suárez,Yan Eteki,Roberto Soldado,Antonio Puertas, Darwin Machís");
}



void LaLiga3::on_pushButton_10_clicked()
{
    ui->textEdit->setText("Matías Dituro,Hugo Mallo,Néstor Araujo,Okay Yokuşlu, Denis Suárez"
                          " Thiago Galhardo,Fran Beltrán, Nolito,Iago Aspas, Franco Cervi");
}


void LaLiga3::on_pushButton_7_clicked()
{
    ui->textEdit->setText(" Diego Rodríguez,Diego González, Juan Sánchez Miño, Iván Marcone, Tete Morente"
                          " Gonzalo Verdú,Omenuke Mfulu, Nino,Víctor Rodríguez,Lucas Boyé,Pere Milla");
}


void LaLiga3::on_pushButton_5_clicked()
{
    ui->textEdit->setText("Fernando Pacheco,Rubén Duarte,Rodrigo Ely,Víctor Laguardia,Lisandro Magallán,"
                          "Lucas Pérez,Tomás Pina, Joselu, John Guidetti, Luis Rioja");
}


void LaLiga3::on_pushButton_4_clicked()
{
    ui->textEdit->setText("Jeremías Ledesma,Jens Jønsson,Fali,Marcos Mauro,Warazdat Harojan, Álvaro Jiménez"
                          "José Martín,Salvi Sánchez,Alejandro Fernández,Anthony Lozano,Alberto Perea");
}


void LaLiga3::on_pushButton_2_clicked()
{
    ui->textEdit->setText("Aitor Fernández,Son,Enric Franquesa,Roberto Suárez,Nemanja Radoja"
                          "Óscar Duarte,Álex Blesa, Pepelu, Roger Martí, Enis Bardhi, José Luis Morales");
}


void LaLiga3::on_pushButton_clicked()
{
    ui->textEdit->setText(" Rubén Yáñez,Dakonam Djene,Erick Cabaco,Allan Nyom, Ignasi Miquel,"
                          "Chema, Jaime Mata, Vitolo, José Juan Macías, Enes Ünal, Carles Aleñá");
}



void LaLiga3::on_pushButton_3_clicked()
{
    qDebug() << ui->textEdit->toHtml();
      QString filePath = QFileDialog::getSaveFileName(
                  this, // wskaźnik na okno rodzica (może być 0, gdy rodzica nie ma)
                  "Save text file", // text belki tytułowej okna dialogowego
                  QDir::homePath(), // ścieżka startowa
                  "All txt files (*.txt *.ftf);;Txt files (*.txt);;Formatted tekxt file (*.ftf)" // filtr
                  );
                  QFile writeFile(filePath);

                    if(writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
                        QTextStream write(&writeFile);


                        QFileInfo fileInfo(filePath);
                        QString extension = fileInfo.suffix(); // rozszerzenie pliku
                        if(extension == "txt"){ // jeżeli rozszerzenie to txt to
                            write << ui->textEdit->toPlainText(); // zapisuję do pliku zwykły tekst
                        }else if(extension == "ftf"){ // a jak rozszerzenie to wymyślone przeze mnie ftf (formatted text file) to
                            write << ui->textEdit->toHtml(); // to używam funkcji toHtml żeby zapisać w pliku sformatowany tekst z wykorzystaniem HTML-a
                        }

                        writeFile.close();
                    }
                }

