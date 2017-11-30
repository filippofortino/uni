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
