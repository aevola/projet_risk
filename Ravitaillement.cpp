
/**
 * @file combat.cpp
 * @author A.EVOLA N.PROSPERT
 * @since 
 * @brief implémentation des méthodes de la classe Combat
 *
**/


#include <iostream>
#include "Ravitaillement.h"
//---------------------------------------------------------------------
//---------------------------------------------------------------------

Ravitaillement::Ravitaillement(Jeu jeu, Joueur joueur)
{
	Etape::Etape(jeu,joueur);
}

void Ravitaillement::debutCombat()
{
	jeu_.setEtape(jeu_.getEtapeCombat());
	jeu_.afficher();
}

void Ravitaillement::afficher()
{
	std::cout << "Etape 1 : Ravitaillement\n";
}

int Ravitaillement::calculRenfort()
{
	int nbPays = joueur_.getNbPays(), renforts;

	if(nbPays >= 12)
		renfort = nbPays/3;
	else
		renfort = 3;

	return renfort;
}

void Ravitaillement::placerTroupes(Pays pays, int nbTroupes)
{
	joueur_.ravitaillement(nbTroupes);
	pays.GainDeTroupes(nbTroupes);
}
