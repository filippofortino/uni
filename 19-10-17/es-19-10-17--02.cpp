/**
 * ** Laboratorio **
 *
 * Es. 4.2 – palindroma.cpp
 * Scrivere un programma C++ che:
 *  • legga da tastiera una stringa di al più 40 caratteri;
 *  • stampi a video se la stringa inserita è palindroma oppure no.
 *
 * Si ricorda che una stringa è palindroma se, letta al contrario, rimane invariata.
 * Esempi di stringhe palindrome: “osso”, “anna”, “radar”.
 * Si considerino diverse lettere maiuscole e minuscole, per cui “Anna” non deve
 * essere considerata come una stringa palindroma.
 *
 * Nota: può essere utile impiegare la funzione strlen() della libreria <cstring>.
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 19/10/2017
 * @author Filippo Fortino
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    int i = 0, j;
    char str[41];
    bool pal = true;

    cout << "Inserisci la stringa\n";
    cin >> str;

    j = (strlen(str) - 1);
    while(i < j) {
        if(str[i] != str[j])
            pal = false;

        i++;
        j--;
    }

    // if(errore) = if(errore == true) = if(errore == 1);
    if(pal)
        cout << "La stringa è palindroma\n";
    else
        cout << "La stringa non è palindroma\n";

    return 0;
}
