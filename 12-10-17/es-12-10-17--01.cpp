/**
 * ** Laboratorio **
 *
 * Es. 3.1 – bit.cpp
 * Scrivere un programma C++ che legga da tastiera un numero naturale n a 32 bit e:
 *  • generi una maschera m1 con il bit in posizione n a 1 e tutti gli altri a zero;
 *  • generi una maschera m2 con il bit in posizione n a 0 e tutti gli altri a uno;
 *  • stampi a video il valore di m1 e m2.
 *
 * La numerazione si intende a partire dal bit meno significativo. Ad esempio, se n=3,
 * m1=00000...01000 e m2=11111...10111
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    unsigned int n, m1, m2;

    cout << "Inserisci n:" << endl;
    cin >> n;

    /**
     * Using shifting
     * fast method
     */
    m1 = 1 << n;
    m2 = ~m1;


    /**
     * Using cmath and pow
     * Slow method
     */
    // L' n-esimo bit a 1, il resto a 0
    //* m1 = pow(2, n);

    // L'n-esimo bit a 0, il resto a 1
    //* m2 = (pow(2, 8 * sizeof(m2)) - 1) - pow(2, n);

    cout << "Maschera m1: " << m1 << endl;
    cout << "Maschera m2: " << m2 << endl;

    return 0;
}
