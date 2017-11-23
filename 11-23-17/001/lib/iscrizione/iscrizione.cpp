#include <iostream>
#include <cstring>
#include "iscrizione.h"

using namespace std;

bool init(elem *&list) {
    if( (list = NULL) )
        return true;

    return false;
}

void visualizza(elem *list) {
    elem *l = list;
    cout << "Atleti iscritti:\n";

    while(l) {
        cout << l->nome << ", " << l->pettorale << endl;
        l = l->pun;
    }
    cout << endl;
}

bool aggiungi(elem *&list, const char *name, int pet) {
    elem *n, *r, *l = list;

    while(l) {
        if( (strcmp(l->nome, name) == 0) || l->pettorale == pet )
            return false;
        else
            l = l->pun;
    }
    n = new elem;
    strcpy(n->nome, name);
    n->pettorale = pet;
    n->pun = NULL;

    if(l == list)
        list = n;
    else {
        for(l = list; l != NULL; l = l->pun)
            r = l;

        r->pun = n;
    }

    return true;
}
