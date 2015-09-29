/**
 * @file Territoire.tpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Implémentation de la classe Territoire
**/

#include <iostream>

//----------------------------------------------------------------------------------------
Territoire::Territoire(string nom, sf::Sprite map, int joueur, int nbSoldat)
{
	nom_ = nom;
	map_ = map;
	posseceur_ = joueur;
	nbSoldat_ = nbSoldat;
}

//----------------------------------------------------------------------------------------
string Territoire::getNom()
{
	return nom_;
}

//----------------------------------------------------------------------------------------
int Territoire::getPosseceur()
{
	return posseceur_;
}

//----------------------------------------------------------------------------------------
int Territoire::getNbSoldat()
{
	return nbSoldat_;
}

//----------------------------------------------------------------------------------------
void Territoire::setPosseceur(int joueur)
{
	posseceur_ = joueur;
}

//----------------------------------------------------------------------------------------
void Territoire::setNbSoldat(int soldataplacer)
{
	nbSoldat_ = soldataplacer;
}

//----------------------------------------------------------------------------------------
