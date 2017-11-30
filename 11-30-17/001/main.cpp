#include <iostream>
#include "lib/Tetris/Tetris.class.h"
using namespace std;

int main(){

   // test dell'operatore di output e della 'ins'
   Tetris t;
   cout << t;

   t.ins('P',0);	// successo
   t.ins('A',1);	// successo
   t.ins('R',3);	// fallimento
   cout << t;

   // test dell'operatore == (deve dire che t1 e t2 *HANNO* la stessa sagoma)
   Tetris t1;
   t1.ins('P',0);
   t1.ins('P',0);
   t1.ins('P',0);
   cout << t1;

   Tetris t2;
   t2.ins('A',0);
   cout << t2;

   if (t1 == t2)
      cout << "t1 e t2 *HANNO* la stessa sagoma" << endl << endl;
   else
      cout << "t1 e t2 *NON* hanno la stessa sagoma" << endl << endl;

   return 0;
}
