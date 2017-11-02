/**
 * ** Laboratorio **
 *
 * Es. 6.1 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 26/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int cercaIndice(int v[], int len);

int main(int argc, char const *argv[]) {
    const int v_len = 5;

    int vect[v_len];

    cout << "Inserisci " << v_len << " interi:" << endl;
    for(int i = 0; i < v_len; i++) {
        cin >> vect[i];
    }

    cout << "L'indice della posizione dell'elemento massimo e': ";
    cout << cercaIndice(vect, v_len) << endl;

    return 0;
}

int cercaIndice(int v[], int len) {
    int max = v[0], pos = 0;
    for(int i = 0; i < len; i++) {
        if(max < v[i]) {
            max = v[i];
            pos = i;
        }
    }

    return pos;
}
