#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    long dni;
    int notas[3];
public:
    Alumno(long dni);
    double promedio();
    int getNota3() const;
    void setNota3(int newNota3);
    int getNota2() const;
    void setNota2(int newNota2);
    int getNota1() const;
    void setNota1(int newNota1);
    long getDni() const;
};

#endif // ALUMNO_H
