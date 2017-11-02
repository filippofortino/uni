/**
 * ** Laboratorio **
 *
 * Es. 5.4 – moltiplicaMultipli.cpp
 *
 * Scrivere una funzione di nome moltiplicaSeMultiplo che abbia la seguente
 * intestazione:
 *  int moltiplicaSeMultiplo(int* p)
 *
 * Sia n il valore della variabile puntata da p. La funzione restituisce (come valore di
 * ritorno):
 *  • il quadrato di n, se n è multiplo di 2;
 *  • il cubo di n, se n è multiplo di 3 e non di 2;
 *  • lo stesso valore di n in tutti gli altri casi.
 *
 * Scrivere un programma C++ che:
 *  • legga da tastiera un intero positivo n;
 *  • invochi la funzione moltiplicaSeMultiplo() sull’intero appena inserito;
 *  • stampi a video il valore di ritorno della funzione.
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 26/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int moltiplicaSeMultiplo(int *p);

int main(int argc, char const *argv[]) {
    int n;

    cout << "Inserisci un intero: ";
    cin >> n;

    cout << "Il risultato e': " << moltiplicaSeMultiplo(&n) << endl;


    return 0;
}

int moltiplicaSeMultiplo(int *p) {
    if(*p % 2 == 0) {
        return *p * *p;
    } else if(*p % 3 == 0) {
        return *p * *p * *p;
    } else {
        return *p;
    }

}
