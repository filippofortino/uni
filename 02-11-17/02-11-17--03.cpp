/**
 * ** Laboratorio **
 *
 * Es. 6.3 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 02/11/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int* mulMatVec(int *matrix, int *vector, int global_dim) {
    // int results[global_dim];
    // int *results = (int*)malloc(global_dim * sizeof(int));
    int * results = new int[global_dim]();
    for(int i = 0; i < global_dim; i++) *(results + i) = 0;

    for(int i = 0; i < global_dim; i++) {
        for(int j = 0; j < global_dim; j++)
            *(results + i) += *(matrix + i * global_dim + j) * *(vector+j);

        cout << endl;
    }

    return results;
}

int main(int argc, char const *argv[]) {
    const int dim = 3;

    int mat[dim][dim], vect[dim], *results;

    cout << "Inserisci " << dim * dim << " interi per la matrice:\n";
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            cin >> mat[i][j];

    cout << "Inserisci " << dim << " interi per la matrice:\n";
    for(int i = 0; i < dim; i++)
        cin >> vect[i];

    results = mulMatVec((int *)mat, vect, dim);
    cout << "Risultati\n";
    for(int i = 0; i < dim; i++)
        cout << results[i] << endl;;


    return 0;
}
