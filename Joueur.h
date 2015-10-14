/**
 *
 *
**/
#ifndef __joueur_H__
#define __joueur_H__

#include <iostream>
#include <vector>

/**
 * @class Joueur
 *
 *
 */
class joueur
{
	private :
		int _id;								//identifiant du joueur
		int _reserve;						//nombre de troupes qu'il possede en reserve
		std::string _nom;					//nom du joueur
		vector<Pays> _PaysControles;	//liste des pays qu'il controle

	public :
		/**
		 * @brief Constructeur, créer un joueur à l'aide de son nom
		 * @param nom du joueur
		 **/
		joueur(int id, std::string nom);

		/**
		 * @brief Donne l'id du joueur
		 * @return l'id du joueur
		 */
		int getId();

		/**
		 * @brief Donne le nom du joueur
		 * @return le nom du joueur
		 */
		std::string getNom();

		/**
		 * @brief Donne le nombre de troupes que le joueur possède dans sa reserve
		 * @return le nombre de troupes que le joueur possède dans sa reserve
		 */
		int getReserve();

		/**
		 * @brief Donne le nombre de pays le joueur controle
		 * @return le nombre de pays que le joueur controle
		 **/
		int getNbPays();

		/**
		 * @brief ajoute un nouveau pays aux pays que le joueur controle
		 * @param le nouveau pays
		 * @param le nombre de troupes à positionner dessus
		 **/
		void conquete(Pays newPays, int nbTroupes);

		/**
		 * @brief enleve le nombre de troupes que le joueur viens de gagner de sa réserve
		 * @param le nombre de troupes que le joueur à gagner
		 */
		void ravitaillement(int nbTroupes);
		
		/**
		 * @brief ajoute le nombre de troupes que le joueur viens de perdre à sa réserve
		 * @param le nombre de troupes que le joueur à perdues
		 */
		void perteTroupes(int nbTroupes);

};

#endif 
