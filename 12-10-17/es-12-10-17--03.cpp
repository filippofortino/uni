/**
 * ** Laboratorio **
 *
 * Es. 3.3 – quadrato.cpp
 * Scrivere un programma C++ che:
 *  • legga da tastiera un numero naturale n;
 *  • stampi un quadrato n x n di asterischi;
 *  • stampi un quadrato n x n vuoto di asterischi.
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;

    cout << "Inserisci n: ";
    cin >> n;

    cout << "Stampo quadrato di lato " << n << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Stampo quadrato vuoto di lato " << n << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            /**
             * Nested for loop
             * variable 'i' counts rows
             * variable 'j' counts columns
             *
             * first row:     i == 0
             * last row:      i == (n-1)
             * first column:  j == 0
             * last column:   j == (n-1)
             */
            if(i == 0 || i == (n-1) || j == 0 || j == (n-1)) {
                cout << "* ";
            } else cout << "  "; // Two spaces replaces '* '
        }
        cout << endl;
    }
    return 0;
}
