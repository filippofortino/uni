/**
 * Es. Operatori C++
 *
 * @date 03/10/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

int main() {
    int i, j, k, m, f;
    cout << "?";
    cin >> i >> j >> k;
    m = (i > j) ? (i > k ? i : k) : (j > k ? j : k);

    cout << endl << "m: " << m << endl;

    // Same as before
    if(i > j)
        if(i > k)
            f = i;
        else
            f = k;
    else
        if(j > k)
            f = j;
        else
            f = k;

    cout << endl << "f: " << f <<endl;

    getchar();
    return 0;
}
