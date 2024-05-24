//
//  main.cpp
//  Figure
//
//  Created by anas shaik on 26/02/2023.
//

#include <iostream>
#include <vector>
#include<string>
#include "Figures.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    vector<Figure*> listeFigure;
    listeFigure.push_back(new Carre(5));
    listeFigure.push_back(new Cercle(3));
    listeFigure.push_back(new Rectangle(3,5));
    listeFigure.push_back(new Triangle(2,4));
    
    for (int i(0); i<listeFigure.size(); i++)
    {
        listeFigure[i]->afficher();
        cout<< "Aire : "<<listeFigure[i]->aire()<<endl;
        cout<< "Perimetre : "<<listeFigure[i]->perimetre()<<endl;

    }
    
    for(int i(0); i<listeFigure.size(); ++i)
        {
            delete listeFigure[i];  //On libère la i-ème case mémoire allouée
            listeFigure[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
        }
    return 0;
}
