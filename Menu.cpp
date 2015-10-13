#include "Jeu.h"

void Menu::jouer(){

	jeu_->setEtape(jeu_->getEtatRavitaillement());
}

 Menu::Menu(){
		texture_.loadFromFile("menu/bouton.png");
		jouer_.setTexture(texture_);
		quitter_.setTexture(texture_);
	}
