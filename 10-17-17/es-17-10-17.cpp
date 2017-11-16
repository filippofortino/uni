/**
 * Array e stringhe
 *
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int counter = 0;
    char haystack[100], needle;

    cout << "Inserisci una stringa -> ";
    cin >> haystack;

    cout << "Inserisci carattere -> ";
    cin >> needle;

    for(int i = 0; haystack[i] != '\0'; i++)
        if(haystack[i] == needle) counter++;

    //cout << "Ci sono " << counter << " caratteri: '" << needle << "' nella stringa " << haystack << endl;
    printf("Ci sono %d caratteri '%c' nella stringa '%s'\n", counter, needle, haystack);

    return 0;
}
