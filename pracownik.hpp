#ifndef pracownik

#include <string>
using namespace std;

class Pracownik{
    string imie;

    public:
    Pracownik() = default;
    Pracownik(string im){};
};

class Inz : Pracownik{
    string wydzial;
    static const int wynagrodzenie = 1;

    public:
    Inz(string im, string wyd){};
    void print(){};
};

class Mag : Pracownik{
    bool obsl_widl;
    static const int wynagrodzenie = 1;

    public:
    Mag(string im, bool czy_widl){};
    void print(){};
};

class Mkt : Pracownik{
    int follows;
    static const int wynagrodzenie = 1;

    public:
    Mkt(string im, int fol){};
    void print(){};
};

class Rob : Pracownik{
    double but;
    static const int wynagrodzenie = 1;

    public:
    Rob(string im, double bu){};
    void print(){};
};

#endif pracownik