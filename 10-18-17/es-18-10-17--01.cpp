/**
 * ** Esercizi **
 *
 * Es. 1 - Senza vettori
 * Scrivere un programma C++ che:
 *  • legga da tastiera 10 numeri interi;
 *  • calcoli la somma;
 *  • stampi se il risultato è pari o dispari.
 *
 * @date 18/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, sum = 0;

    cout << "Inserisci i 10 numeri" << endl;

    // Ask the user to insert 10 numbers
    // and sum them
    for(int i = 0; i < 10; i++) {
        cin >> n;
        
        sum += n;
    }

    cout << endl << sum << endl;
    cout << "La somma dei numeri inseriti e' ";
    // Check if the sum is even or odd
    sum % 2 == 0 ? cout << "PARI" : cout << "DISPARI";
    cout << endl;

    return 0;
}
