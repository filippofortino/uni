/**
 * Tetric class
 */
const int MAT_DIM = 5;

class Tetris {
    char grid[MAT_DIM][MAT_DIM];

public:
    Tetris();
    bool ins(char elem, int col);
    friend ostream& operator << (ostream& os, const Teris& t);
    bool operator == (const Tetris &t2)const;
}

/*
struct elem {
  char nome[31];
  int pettorale;
  elem* pun;
};

class Iscrizione
{
  elem* testa;

public:
  Iscrizione();
  void visualizza()const;
  bool aggiungi(const char* nome, int numero);

  // SECONDA PARTE
  bool cerca(const char* nome)const;
  bool elimina(const char* nome);
};
*/
