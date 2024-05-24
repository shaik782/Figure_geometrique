#ifndef Figures_hpp
#define Figures_hpp

#include <stdio.h>
#include <iostream>

class Figure
{
    public:
    Figure();
    virtual void afficher() const;
    virtual double perimetre() = 0;
    virtual  double aire() = 0;//le =0 fait que la classefigure devient abstraite
    virtual ~Figure();
    
};

class Triangle : public Figure
{
    public:
    Triangle(double base, double hauteur);
    virtual void afficher() const;
    virtual double perimetre();
    virtual double aire();
    virtual ~Triangle();

    
    private:
    double m_base;
    double m_hauteur;
};


class Carre : public Figure
{
    public :
    Carre(double longueur);
    virtual void afficher() const;
    virtual double perimetre();
    virtual double aire();
    virtual ~Carre();

    
    private :
    double m_longueur;
    
};
    
class Rectangle : public Figure
{
    public :
    Rectangle(double longueur, double largeur);
    virtual void afficher() const;
    virtual double perimetre();
    virtual double aire();
    virtual ~Rectangle();

    
    private :
    double m_longueur;
    double m_largeur;
    
};
    
class Cercle : public Figure
{
    public :
    Cercle(double rayon);
    virtual void afficher() const;
    virtual double perimetre();
    virtual double aire();
    virtual ~Cercle();

    
    private:
    double m_rayon;
    const double pi{3.14};
};
#endif /* Figures_hpp */
