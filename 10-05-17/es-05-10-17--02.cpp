/**
 * Es. Leggere un intero e dire se è multiplo di 2 e 4
 *
 * @date 05/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Inserisci un numero maggiore di zero: " << endl;
    cin >> num;

    if(num % 2 == 0 && num % 4 == 0) {
        cout << "Il numero inserito e' un multiplo di 4" << endl;
    } else if(num % 2 == 0) {
        cout << "Il numero e' un multiplo di 2 ma non di 4" << endl;
    } else {
        cout << "Il numero inserito non e' multiplo di 2" << endl;
    }

    return 0;
}
