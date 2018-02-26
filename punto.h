#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
private:
    double x,y;
public:
    Punto(double x=0.0, double y=0.0);
    Punto(const Punto&  p);
    Punto& operator=(const Punto& p);
    ~Punto();

};

#endif // PUNTO_H
