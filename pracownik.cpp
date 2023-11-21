#include <string>
#include <pracownik.hpp>

using namespace std;

Pracownik::Pracownik(string im) : imie(im) {};
Inz::Inz(string im, string wyd) : Pracownik(im), wydzial(wyd) {};
Mag::Mag(string im, bool czy_widl) : Pracownik(im), obsl_widl(czy_widl) {};
Mkt::Mkt(string im, int fol) : Pracownik(im), follows(fol) {};
Rob::Rob(string im, double bu) : Pracownik(im), but(bu) {};

const int Inz::wynagrodzenie;



