#include <cstdio>

using namespace std;

class Faktura {
public:
    int id;
    float obrot;
    float podatekNaliczony;
    float stawkaPodatku;
    static int nextID;
public:
    Faktura(double obrot,  double stawkaPodatku = 0.23, double podatekNaliczony = 0.0) :
        id(nextID++),
        obrot(obrot),
        podatekNaliczony(podatekNaliczony),
        stawkaPodatku(stawkaPodatku)
    {}
};

int Faktura::nextID = 0;

// extern "C" float podatek(Faktura f);
// extern "C" void wypisz(const Faktura &f);
float podatek(Faktura f) {
    return f.obrot;
}

void wypisz(const Faktura &f) {
    // todo
}

int main() {
    Faktura buraki(1000, 0.23, 100);

    printf("Podatek : %f\n", podatek( buraki));
    wypisz(buraki);

    return 0;
}