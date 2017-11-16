/**
 * Es. Inserisci un numero intero e stampa 'P' se > 0,
 * 'Z' se = 0 e 'N' se < 0
 *
 * @date 05/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main() {
int num;
     //do {
    cout << "Inserisci un numero intero: " << endl;

    cin >> num;

    if(num > 0) {
        cout << "P" << endl;
    } else if (num == 0) {
        cout << "Z" << endl;
    } else {
        cout << "N" << endl;
    }
    //cout << endl << endl;
    //} while (num != -99); Cicle to test result

    return 0;
 }
