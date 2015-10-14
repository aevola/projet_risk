/**
 * @file combat.cpp
 * @author A.EVOLA N.PROSPERT
 * @since 
 * @brief implémentation des méthodes de la classe Combat
 *
**/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <cmath>		/* abs */
#include "Combat.h"

//---------------------------------------------------------------------
//---------------------------------------------------------------------

Combat::Combat(Jeu jeu, Joueur joueur)
{
	Etape::Etape(jeu,joueur);
}

void Combat::finCombat()
{
	_jeu.setEtape(_jeu.getEtapeRenforcement());
	_jeu.afficher();
}

void Combat::afficher()
{
	std::cout << "Etape 2 : Combat\n";
}

void Combat::simulation(Pays att, Pays def)
{
	int resDe, maxDeAtt, minDeAtt, maxDeDef, minDeDef, nbLancersDe;

	cout << "Selectionner le nombre de lancers de dé pour attaquer\n";
	cin >> nbLancersDe;

	for (int i = 0; i<nbLancersDe; ++i)
	{
		resDe = rand()%6;
		if (maxDeAtt < resDe)
			maxDeAtt = resDe;
		if (minDeAtt < resDe)
			minDeAtt = resDe;
	}
	
	cout << "Selectionner le nombre de lancers de dé pour se défendre\n";
	cin >> nbLancersDe;

	for (int i = 0; i<nbLancersDe; ++i)
	{
		resDe = rand()%6;
		if (maxDeDef < resDe)
			maxDeDef = resDe;
		if (minDeDef < resDe)
			minDeDef = resDe;
	}

	int mortsAtt = 0, mortsDef = 0;
	
	if(maxDeAtt>maxDeDef)
		++ mortsDef;
	else
		++ mortsAtt;

	if(minDeAtt>minDeDef)
		++ mortsDef;
	else
		++ mortsAtt;

	att.perteDeTroupes(mortsAtt);
	def.perteDeTroupes(mortDef);

	if (def.getNbTroupes() <= 0)
	{
		def.ChangementControle(joueur_.getId(), 3);
		att.perteDeTroupes(3-mortsAtt);		
	}
}
