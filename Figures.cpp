//
//  Figures.cpp
//  Figure
//
//  Created by anas shaik on 26/02/2023.
//

#include "Figures.hpp"

using namespace std;

Figure::Figure()
{}

Figure::~Figure()
{}

void Figure::afficher() const
{
    cout<<"Je suis une figure"<<endl;
}



Triangle::Triangle(double base, double hauteur) : m_base(base), m_hauteur(hauteur)
{}

Triangle::~Triangle()
{}


void Triangle::afficher() const
{
    cout<<"Je suis un triangle"<<endl;
}

double Triangle::perimetre()
{
    return m_hauteur*3;
}

double Triangle::aire()
{
    return m_base*m_hauteur;
}

Carre::Carre(double longueur) : m_longueur(longueur)
{}

Carre::~Carre()
{}

void Carre::afficher() const
{
    cout<<"Je suis un carre"<<endl;
}

double Carre::perimetre()
{
    return m_longueur*4;
}

double Carre::aire()
{
    return m_longueur*m_longueur;
}

Rectangle::Rectangle(double longueur, double largeur) : m_longueur(longueur), m_largeur(largeur)
{}

Rectangle::~Rectangle()
{}

void Rectangle::afficher() const
{
    cout<<"Je suis un rectangle"<<endl;
}

double Rectangle::perimetre()
{
    return m_longueur*2 + m_largeur*2;
}

double Rectangle::aire()
{
    return m_longueur*m_largeur;
}

Cercle::Cercle(double rayon) : m_rayon(rayon)
{}

Cercle::~Cercle()
{}

void Cercle::afficher() const
{
    cout<<"Je suis un cercle"<<endl;
}

double Cercle::perimetre()
{
   return m_rayon * pi * 2;
}

double Cercle::aire()
{
    return m_rayon * m_rayon * pi;
}
