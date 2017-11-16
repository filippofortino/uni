/**
 * Array e stringhe
 *
 * @date 12/10/2017
 * @author Filippo Fortino
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    char stringa[] = {'c', 'i', 'a', '\0', 'o'};

    cout << strlen(stringa) << endl; // Returns 3 because there's '\0' in the middle

    return 0;
}
