#ifndef TESTACILINDRO_H_
#define TESTACILINDRO_H_
#include "Cilindro.h"

class TestaCilindro{
    private:
        Cilindro *Objeto = new Cilindro;
    public:
        TestaCilindro();
        ~TestaCilindro();
        void menu();
};

TestaCilindro::TestaCilindro(){
}

TestaCilindro::~TestaCilindro(){
    delete Objeto;
}

void TestaCilindro::menu(){
    double entrada;
    int flag;
    do{
        do{
            cout << "Insira raio: ";
            cin >> entrada;
        }while (Objeto->setRaio(entrada) == false);
        do{
            cout << "Insira altura: ";
            cin >> entrada;
        }while (Objeto->setAltura(entrada) == false);
        cout << "Area lateral: " << Objeto->areaLateral() << "\n";
        cout << "Area total: " << Objeto->areaTotal() << "\n";
        cout << "Volume: " << Objeto->volume() << "\n";
        cout << "Digite 0 para encerrar o programa: ";
        cin >> flag;
    }while (flag != 0);
}

#endif