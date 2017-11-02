/**
 * Es. A caso
 *
 * @date 09/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int i;

    cin >> i;

    switch (i) {
        case 1:
            cout << "aldo";
            break;

        case 3:
            cout << "non aldo";
            break;

        default:
            cout << "Boh";
    }

    return 0;
}
