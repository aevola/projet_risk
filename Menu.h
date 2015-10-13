/**
 * @file Menu.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 06/10/2015
 * @brief Etat Initiale du Jeu
**/

#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <SFML/Graphics.hpp>
#include "Etape.h"

/**
 * @class Menu.hpp
 * 
 * @brief Patron de classe implémentant un menu
 * 
 * Elle est composé d'une fenetre, de trois sprites
**/ 

class Jeu;

class Menu : public Etape
{
	private:
		sf::Texture bouton_;
		sf::Sprite titre_;
		sf::Sprite jouer_;
		sf::Texture texture_;
		sf::Sprite quitter_;
		Jeu* jeu_;
      
   public:
      /**
       * @brief Constructeur
       */
      Menu();

      /**
       * @brief Permet de lancer le début de la partie
       *
       */
	void jouer();

	/**
       * @brief Ferme la fenetre et met fin au programme
       *
       */
	//void quitter(){ jeu_->getFenetre()->display(); }

	

     
};

#endif // __MENU_HPP__
