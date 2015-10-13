#include "Jeu.h"

Jeu::Jeu(){
	 menu_ = new Menu();
	 fenetre_.create(sf::VideoMode::getDesktopMode(),"Risk_Games",sf::Style::Default);
}

sf::RenderWindow* Jeu::getFenetre(){
	return &fenetre_;
}

void Jeu::setEtape(Etape* etape){
	courant_ = etape;
}

Etape* Jeu::getEtatCourant(){
	return courant_;
}

Etape* Jeu::getEtatRavitaillement(){
	return courant_;
}
