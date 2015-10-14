/**
 * @file Territoire.cpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 07/10/2015
 * @brief Implémentation de la classe Joueur
**/

#include <iostream>
#include <vector>
#include "Joueur.h"

//----------------------------------------------------------------------------------------
Joueur::Joueur(int id, std::string nom)
{
	id_=id;
	nom_=nom;
	reserve_=40;
	PaysControles_ = new std::vector<Pays>;
}

//----------------------------------------------------------------------------------------
int Joueur::getId()
{
	return id_;
}

//----------------------------------------------------------------------------------------
std::string Joueur::getNom()
{
	return nom_;
}

//----------------------------------------------------------------------------------------
int Joueur::getReserve()
{
	return reserve_;
}

//----------------------------------------------------------------------------------------
void Joueur::conquete(Pays newPays, int nbTroupes)
{
	PaysControles_.add(newPays);
	reserve_ -= nbTroupes;
}

//----------------------------------------------------------------------------------------
void Joueur::ravitaillement(int nbTroupes)
{
	reserve_ -= nbTroupes;
}

//----------------------------------------------------------------------------------------
void Joueur::perteTroupes(int nbTroupes)
{
	reserve_ += nbTroupes;
}