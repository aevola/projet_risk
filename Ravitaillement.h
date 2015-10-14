/**
 *
 *
**/
#ifndef __ravitaillement_H__
#define __ravitaillement_H__

#include <iostream>
#include <vector>

/**
 * @class Ravitaillement
 *
 *
 */
class Ravitaillement
{

	public :
		/**
		 * @brief Constructeur, crée un Ravitaillement
		 **/
		Ravitaillement(Jeu jeu, Joueur joueur);

		/**
		 * @brief Fin du Ravitallement, passage à l'étape combat
		 **/
		void debutCombat();


		/**
	 	 *	@brief Affiche l'etape en cours
	 	 **/
		void afficher();

		/**
		 * @brief Calcul le nombre de renforts dont le joueur dispose
		 * @return le nombre de troupes en renfort dont le joueur dispose
		 **/
		int calculRenfort();

		/**
		 * @brief Place des troupes sur le pays en parametre
		 * @param pays : le pays qui va recevoir des nouvelles troupes
		 * @param nbTroupes : le nombre de troupes à placer sur le pay
		 */
		void placerTroupes(Pays pays, int nbTroupes);

};

#endif 
