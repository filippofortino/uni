/**
 * Funzioni ricorsive
 *
 * @date 30/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int factorial(int n);

int main(int argc, char const *argv[]) {
    int n;

    while(true) {
        cin >> n;
        cout << endl << factorial(n) << endl;
    }

    return 0;
}

int factorial(int n) {
    return (n < 2) ? 1 : n * factorial(n - 1);
}
