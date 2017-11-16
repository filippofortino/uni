/**
 * ** Laboratorio **
 *
 * Es. 4.1 – menu.cpp
 * Scrivere un programma C++ che
 *  • visualizzi un menù di possibili operazioni (minimo, massimo, media fra due interi);
 *  • attenda la scelta dell’utente;
 *  • esegua l’operazione corrispondente alla scelta fatta dall’utente;
 *  • ripeta i passi precedenti fino a che l’utente non sceglie di terminare il programma.
 *
 * In particolare, il menù deve avere il seguente formato:
 *
 *  Menu operazioni
 *  1: minimo di due interi
 *  2: massimo di due interi
 *  3: media di due interi
 *  0: esci
 *
 * Per le scelte 1, 2 e 3, il programma deve chiedere all’utente di inserire due interi da
 * tastiera, sui quali effettuare l’operazione desiderata.
 * Nel caso che la scelta dell’utente non corrisponda a nessuna voce del menù, il
 * programma deve mostrare il messaggio “Scelta non valida”.
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 19/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int option, n1, n2;
    do {
        // Print user menu
        cout << "Menu operazioni" << endl;
        cout << "1: minimo di due interi" << endl;
        cout << "2: massimo di due interi" << endl;
        cout << "3: media di due interi" << endl;
        cout << "0: esci" << endl << endl;

        // Ask the user for an option
        cout << "Scetla?" << endl;
        cin >> option;

        // Based on user input select one case
        switch(option) {
            case 1:
                cout << "Inserisci due interi:" << endl;
                cin >> n1;
                cin >> n2;

                cout << "Stampo il minimo: " << ( (n1 < n2) ? n1 : n2 ) << endl;
                break;

            case 2:
                cout << "Inserisci due interi:" << endl;
                cin >> n1;
                cin >> n2;

                cout << "Stampo il massimo: " << ( (n1 > n2) ? n1 : n2 ) << endl;
                break;

            case 3:
                cout << "Inserisci due interi:" << endl;
                cin >> n1;
                cin >> n2;

                cout << "Stampo la media: " << ( (float)(n1 + n2) / 2) << endl;
                break;

            // Avoid printing "Scelta non valida" when user wants to exit
            case 0: break;

            default:
                cout << "Scelta non valida" << endl;
        }

        cout << endl;
    } while (option != 0); // When 0 is submitted the program ends
    return 0;
}
