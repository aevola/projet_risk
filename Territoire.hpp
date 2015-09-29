/**
 * @file Territoire.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Classe héritant de Sprite pour la création des territoires
**/

#ifndef __TERRITOIRE_HPP__
#define __TERRITOIRE_HPP__

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

/**
 * @class Territoire Territoire.hpp
 * 
 * @brief Classe implémentant un territoire
 * 
 * Elle est composé d'un nom, d'un joueur qui correspond au joueur possédant le territoire
 * ainsi que d'un entier qui représente le nombre de soldat présent sur le territoire
**/ 
class Territoire
{
	private:
		string nom_;
		sf::Sprite map_;
		int posseceur_;
		int nbSoldat_;
      
	public:
     
	/**
	* @brief Constructeur
	*/
	Territoire(string nom, sf::Sprite map, int joueur, int nbSoldat);

	/**
	* @brief Récupère le nom du territoire
	* @return nom_
	*/
	string getNom();

	/**
	* @brief Récupère le joueur possédant le territoire
	* @return posseceur_
	*/
	int getPosseceur();

	/**
	* @brief Récupère le nombre de soldat présent sur le territoire
	* @return nbSoldat_
	*/
	int getNbSoldat();

	/**
	* @brief Définit le joueur possédant le territoire
	* @param Joueur qui capture le territoire
	*/
	void setPosseceur(int joueur);

	/**
	* @brief Place un nombre de soldat sur le territoire
	* @param entier nombre de soldat à placé
	*/
	void setNbSoldat(int soldataplacer);


};

#include "Territoire.tpp"

#endif // __TERRITOIRE_HPP__
