/**
 * Es. A caso
 *
 * @date 10/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    unsigned int n, sum = 0, j;

    cin >> n;

    for(int i = 0; i < n; i++) {
        sum += i;
        j = sum;

        while(j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
