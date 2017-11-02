/**
 * ** Laboratorio **
 *
 * Es. 6.1 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 02/11/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int sommaDiag(int mat[][3], int rows);

int main(int argc, char const *argv[]) {
    const int rows = 3, col = 3;

    int mat[rows][col];

    cout << "Inresisci " << (rows * col) << " numeri interi:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "La somma degli elementi sulla diag. princ. e sec. e': ";
    cout << sommaDiag(mat, rows) << endl;

    return 0;
}

/**
    1 2 3
    4 5 6
    7 8 9
**/

int sommaDiag(int mat[][3], int rows) {
    int main_d = 0, second_d = 0;
    for(int i = 0; i < rows; i++){
        main_d += mat[i][i];
        second_d += mat[i][rows-i-1];
    }

    return main_d + second_d;
}
