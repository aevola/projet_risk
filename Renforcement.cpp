/**
 * @file combat.cpp
 * @author A.EVOLA N.PROSPERT
 * @since 
 * @brief implémentation des méthodes de la classe Combat
 *
**/


#include <iostream>
#include "Renforcement.h"

//---------------------------------------------------------------------
//---------------------------------------------------------------------

Renforcement::Renforcement(Jeu jeu, Joueur joueur)
{
	Etape::Etape(jeu,joueur);
}

void Renforcement::debutTour()
{
	jeu_.setEtape(jeu_.getEtapeRavitaillement());
	jeu_.afficher();
}

void Renforcement::afficher()
{
	std::cout << "Etape 3 : Renforcement\n";
}

void Renforcement::deplaceTroupes(Pays paysO, Pays paysA, int nbTroupes)
{
	if (pays0.getNbTroupes()>nbTroupes)
	{
		paysO.perteDeTroupes(nbTroupes);
		paysA.gainDeTroupes(nbTroupes);
	} else {
		std::cout << "Pas assez de troupes sur le pays !\n";
	}
}
