#include "compito.h"

Palazzo::Palazzo(int N){
  if(N<0){
    exit(1);
  }
  maxPiani=N;
  quantiPiani=1;
  v = new stato* [N];
  v[0] = new stato[1];
  v[0][0] = Chiuso;
}

Palazzo::Palazzo(const Palazzo& p){
  maxPiani=p.maxPiani;
  quantiPiani=p.quantiPiani;
  v=p.v;
}

bool Palazzo::aggiungi(){
  if((quantiPiani+1)<=maxPiani){

  }
}
