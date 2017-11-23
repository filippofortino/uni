struct elem {
    char nome[31];
    int pettorale;
    elem *pun;
};

bool init(elem *&list);
void visualizza(elem *list);
bool aggiungi(elem *&list, const char *name, int pet);
