/**
 * ** Laboratorio **
 *
 * Es. 5.1 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 26/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

void tavolaPitagorica(int n);

int main(int argc, char const *argv[]) {
    int n1, n2, n3;

    cout << "Inserisci tre interi positivi:" << endl;
    cin >> n1 >> n2 >> n3;

    cout << endl;
    tavolaPitagorica(n1);
    cout << endl;
    tavolaPitagorica(n2);
    cout << endl;
    tavolaPitagorica(n3);
    cout << endl;

    return 0;
}

void tavolaPitagorica(int n) {
    cout << "Tavola pitagorica di ordine " << n << ":" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << (i * j) << "\t";
        }
        cout << endl;
    }
}
