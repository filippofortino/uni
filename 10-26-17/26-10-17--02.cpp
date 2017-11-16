/**
 * ** Laboratorio **
 *
 * Es. 5.2 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 26/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

void raddoppia(int *n);

int main(int argc, char const *argv[]) {
    int n;

    cout << "Insersci un intero: ";
    cin >> n;

    raddoppia(&n);

    cout << "Nuovo valore: " << n << endl;
    return 0;
}

void raddoppia(int *n) {
    *n *= 2;
}
