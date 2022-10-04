#ifndef CILINDRO_H_
#define CILINDRO_H_

class Cilindro{
    private:
        double raio, altura; // > 0
    public:
        Cilindro();
        bool setRaio(double);
        bool setAltura(double);
        double areaLateral()const;
        double areaTotal()const;
        double volume()const;
};

Cilindro::Cilindro(){
    raio = 1;
    altura = 1;
}

bool Cilindro::setRaio(double aux){
    if (aux > 0){
        raio = aux;
        return true;
    }else{
        return false;
    }
}

bool Cilindro::setAltura(double aux){
    if (aux > 0){
        altura = aux;
        return true;
    }else{
        return false;
    }
}

double Cilindro::areaLateral()const{
    return (2*3.14*raio*altura);
}

double Cilindro::areaTotal()const{
    return (2*3.14*raio*(altura+raio));
}

double Cilindro::volume()const{
    return (3.14*raio*raio*altura);
}

#endif