enum stato {Aperta, Chiusa};

class Palazzo{
  stato **v;
  int maxPiani;
  int quantiPiani;

  friend ostream& operator<<(ostream& os, const Palazzo& p);

public:
  Palazzo(int N);
  Palazzo(const Palazzo& p);
  bool aggiungi();
};
