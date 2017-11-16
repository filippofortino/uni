/**
 * ** Laboratorio **
 *
 * Es. 7.2 -
 *
 *
 * @url http://www.iet.unipi.it/g.nardini/teaching.html
 * @date 09/11/2017
 * @author Filippo Fortino
 */

#include <iostream>

using namespace std;

struct pila {
    int top;
    int stack[10];
};

void init(pila &p) {
    p.top = -1;
}

bool push(pila &p, int val) {
    if(p.top == 9) return false;
    p.top++;
    p.stack[p.top] = val;
    return true;
}

bool pop(pila &p, int &val) {
    if(p.top == -1) return false;
    val = p.stack[p.top];
    p.top--;
    return true;
}

int main(int argc, char const *argv[]) {
    pila pari, dispari;
    int val;

    init(pari);
    init(dispari);

    cout << "Inserisci 10 numeri:\n";
    for(int i = 0; i < 10; i++) {
        cin >> val;

        if(val % 2 == 0)
            push(pari, val);
        else
            push(dispari, val);
    }

    cout << endl;

    cout << "Elementi pari:\n";
    while(pop(pari, val)) {
        cout << val << " ";
    }

    cout << "\nElementi dispari:\n";
    while(pop(dispari, val)) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}
