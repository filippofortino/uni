/**
 * ** Esercizi **
 *
 * Es. 2
 * Scrivere un programma C++ che:
 *  • leggere da tastiera una stringa di max 100 caratteri;
 *  • copiarla su un altra stringa (no <cstring>);
 *  • stampi la stringa originale e quella copiata.
 *
 * @date 18/10/2017
 * @author Filippo Fortino
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int i = 0;
    char string[101], clone[101];

    cout << "Inserisci una stringa" << endl;
    cin >> string;

    do {
        clone[i] = string[i];
    } while(string[i++] != '\0');

    cout << "Stringa originale:" << endl << string << endl;
    cout << "Stringa copiata:" << endl << clone << endl;
    return 0;
}
