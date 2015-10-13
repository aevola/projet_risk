/**
 * @file Jeu.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 22/09/2015
 * @brief Création et gestion de l'interface utilisateur ainsi que du plateau du RISK
**/

#ifndef __JEU_HPP__
#define __JEU_HPP__

#include <SFML/Graphics.hpp>
#include "Menu.h"
/**
 * @class Jeu.hpp
 * 
 * @brief Patron de classe implémentant une interface utilisateur
 * 
 * Elle est composé d'une fenetre SFML qui contient un ensemble de texture, sprite
 * ainsi que de texte.
**/ 
class Jeu
{
	private:
	sf::RenderWindow fenetre_;
	Etape* menu_ = new Menu();
	Etape* courant_ = menu_;

      
   public:
      /**
       * @brief Constructeur
       */
	Jeu();

      /**
       * @brief Accède à la fenetre du GUI
       *
       * @return la fenetre du jeu
       */
	sf::RenderWindow* getFenetre();

      /**
       * @brief Remplace l'étape courante
       *
       */
	void setEtape(Etape* etape);

      /**
       * @brief Retourne l'étape courante
       *
       * @return courant_;
       */
	Etape* getEtatCourant();
      Etape* getEtatRavitaillement();
	
  
};

#endif // __JEU_HPP__
