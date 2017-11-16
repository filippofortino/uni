/**
 * ** Laboratorio **
 *
 * Es. 7.1 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 09/11/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int* createMat(int r, int c) {
    //int * result = new int[r*c]();
    int *result = (int *)calloc(r * c, sizeof(int));
    int val = 1;

    for(int i = 0; i < r; i++)
        if(i % 2 == 0)
            for(int j = 0; j < c; j++)
                *(result + (i * c + j)) = val++;
        else
            for(int j = (c - 1); j >= 0; j--)
                *(result + (i * c + j)) = val++;

    return result;
}

int main(int argc, char const *argv[]) {
    int rows = 3, cols = 3;
    int * res;

    cout << "Inserisci N: ";
    cin >> rows;
    cout << "Inserisci M: ";
    cin >> cols;

    res = createMat(rows, cols);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << *(res + (i * cols + j)) << "\t";
        cout << endl;
    }

    free(res);
    return 0;
}
