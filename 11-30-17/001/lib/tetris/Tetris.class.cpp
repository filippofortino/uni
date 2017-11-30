#include "Tetris.class.h"
#include <iostream>
#include <cstdlib>

Tetris::Tetris() {
    for(int i = 0; i < MAT_DIM; i++)
        for(int j = 0; j < MAT_DIM; j++)
            grid[i][j] = 0;
}
