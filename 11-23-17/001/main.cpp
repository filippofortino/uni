/**
 * ** Laboratorio **
 *
 * Es. 9.1 - Gestione delle iscrizioni ad una gara
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 23/11/2017
 * @author Filippo Fortino
 */

 // Aldo è gay

#include <iostream>
#include "lib/iscrizione/iscrizione.h"

using namespace std;

int main(int argc, char const *argv[]) {
    elem *L;
    init(L);
    visualizza(L);

    aggiungi(L, "mario.bianchi", 24);
    aggiungi(L, "sergio.rossi", 6);
    aggiungi(L, "sergio.rossi", 4); // Già inserito
    aggiungi(L, "gianni.verdi", 32);
    aggiungi(L, "luigi.neri", 6); // Già inserito

    visualizza(L);
    return 0;
}
