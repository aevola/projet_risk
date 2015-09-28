/**
 * @file Sprite.hpp
 * @author PROSPERT Nathan & EVOLA Antoine
 * @since 28/09/2015
 * @brief Classe abstraite pour la création des sprites
**/

#ifndef __SPRITE_HPP__
#define __SPRITE_HPP__

#include <SFML/Graphics.hpp>


/**
 * @class Sprite Sprite.hpp
 * 
 * @brief Classe abstraite implémentant un sprite
 * 
 * Elle est composé d'une texture et d'un ensemble de Points ainsi que d'une couleur
**/ 
class Sprite
{
	private:
		sf::Color couleur_;
		Point tabpoint_[];
      
	public:
     
	/**
	* @brief Fonction virtuelle pure. Doit être implémenté dans Territoire !
	*/
	virtual void creerSprite() = 0;

};

#endif // __SPRITE_HPP__
