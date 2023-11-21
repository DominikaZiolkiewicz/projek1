#ifndef firma

#include <memory>
#include <variant>

using namespace std;

class Firma{
    double stan_konta;
    int n_prac;
    unique_ptr< variant<Inz, Mag, Mkt, Rob> > prac;
    

    public:


};

#endif firma