/**
 * Funzioni e Puntatori
 *
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

void natale(int *n) {
    *n = 10;
}

int main(int argc, char const *argv[]) {
    int test = 4, *prova = &test;

    cout << &prova << endl;
    cout << prova << endl;
    cout << *prova << endl;
    // cout << "1: " << test << endl;
    // natale(&test);
    // cout << "2: " << test << endl;
    cout << "\n\n";
    
    {
        cout << test << endl;
        int test = 3471263;
        cout << test << endl;
    }

    cout << endl << test << endl;
    return 0;

}
