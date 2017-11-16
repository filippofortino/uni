/**
 * ** Laboratorio **
 *
 * Es. 3.2 – potenza.cpp
 * Scrivere un programma C++ che:
 *  • legga da tastiera due interi non negativi b ed e;
 *  • visualizzi il risultato di b^e
 *
 * Si gestiscano i casi b=0 ed e=0.
 * Non si faccia uso della funzione pow() della libreria <cmath>.
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>
//#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    int b, e;
    float res = 1;

    cout << "Inserisci b" << endl;
    cin >> b;

    cout << "Inserisci e" << endl;
    cin >> e;

    if(e >= 0) // esponente positivo (o 0)
        for(int i = 0; i < e; i++) {
            res *= b;
            // res = res * b;
        }
    else // esponente negativo
        for(int i = e; i < 0; i++) {
            res /= b;
        }

    cout << b << " elevato alla " << e << " vale: " << res << endl;
    //cout << "Risultato corretto: " << pow(b, e) << endl;
    return 0;
}
