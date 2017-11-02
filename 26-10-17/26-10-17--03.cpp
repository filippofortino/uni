/**
 * ** Laboratorio **
 *
 * Es. 5.3 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 26/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

void inizializza(int **p) {
    // Assign NULL to variable pointed by p
    *p = NULL;
}

int main(int argc, char const *argv[]) {
    // Make pointer point to something
    int a;
    int *pointer = &a;

    cout << pointer << endl;
    inizializza(&pointer);
    cout << pointer << endl;
    return 0;
}
