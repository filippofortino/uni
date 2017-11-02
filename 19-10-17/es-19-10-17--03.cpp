/**
 * ** Laboratorio **
 *
 * Es. 4.3 – concatena.cpp
 * Scrivere un programma C++ che:
 *  • inizializzi due array di interi v1 e v2, aventi dimensione n1=3 e n2=4 e contenenti i
 *    valori {2,9,4} e {3,7,0,1} rispettivamente;
 *  • stampi a video il contenuto di v1 e v2;
 *  • definisca un terzo array di interi v3, avente dimensione n3=n1+n2, come il
 *    risultato della concatenazione dei primi due array;
 *  • stampi a video il contenuto di v3.
 *
 * Non è richiesto che il contenuto di v1 e v2 sia inserito da tastiera.
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 19/10/2017
 * @author Filippo Fortino
 */

#include <iostream>
#include <cstring>

using namespace std;

void print_arr(int *vect, int dim);

int main(int argc, char const *argv[]) {
    // Declare constant array dimensions
    const int n1 = 3, n2 = 4;

    int v1[n1] = {2, 9, 4}, v2[n2] = {3, 7, 0, 1}, v3[n1+n2];

    // Concat the two arrays
    for(int i = 0; i < (n1 + n2); i++) {
        if(i < n1) // When v1 ends start with v2
            v3[i] = v1[i];
        else
            v3[i] = v2[i - n1]; // Reset 'i' counter for v2
    }

    // Print all the three arrays
    cout << "v1: "; print_arr(v1, n1);
    cout << "v2: "; print_arr(v2, n2);
    cout << "v3: "; print_arr(v3, (n1 + n2));

    return 0;
}

/**
 * Given array dimension print the array
 *
 * @return void
 */
void print_arr(int *vect, int dim) {
    for(int i = 0; i < dim; i++)
        cout << vect[i] << " ";
    cout << endl;
}
