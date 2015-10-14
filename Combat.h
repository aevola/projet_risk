/**
 *
 *
**/
#ifndef __combat_H__
#define __combat_H__

#include <iostream>

/**
 * @class Combat
 *
 *
 */
class Combat : public Etape
{

	public :
		/**
		 * @brief Constructeur, crée un combat
		 **/
		Combat(Jeu jeu, Joueur joueur);

		/**
		 * @brief Fin du combat, passage à l'étape Renforcement
		 **/
		void finCombat();

		/**
		 *	@brief Affiche l'etape en cours
		 **/
		void afficher();

		/**
		 * @brief simule un combat à l'aide de l'attaquant et du deffenseur
		 * @param att : le pays attaquant
		 * @param def : le pays qui se fait attaquer
		 **/
		void simulation(Pays att, Pays def);
		
};

#endif 
