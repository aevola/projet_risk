#include <SFML/Graphics.hpp>
#include <iostream>
#include "Territoire.h"
#include "Etape.h"
#include "Jeu.h"
#include "Menu.h"
#include "Continent.h"

using namespace std;

int main() {
	Jeu partie;
	Continent europe("Europe");
	Continent afrique("Afrique");
	Continent asie("Asie");
	Continent ameriquenord("Amerique Nord");
	Continent ameriquesud("Amerique Sud");
	Continent oceanie("Oceanie");
	vector<Continent> listecontinent;
	listecontinent.push_back(europe);
	listecontinent.push_back(afrique);
	listecontinent.push_back(asie);
	listecontinent.push_back(ameriquenord);
	listecontinent.push_back(ameriquesud);
	listecontinent.push_back(oceanie);
	while (partie.getFenetre()->isOpen()){
		sf::Event event;
		while(partie.getFenetre()->pollEvent(event)){
			if(event.type ==sf::Event::Closed){
				partie.getFenetre()->close();
			}
		}
		/*for(int j = 0; j < listecontinent.size(); ++j){
			for(int i = 0; i < listecontinent.at(j).getNbterritoire(); ++i){
				UserInterface.get_fenetre()->draw(listecontinent.at(j).getlisteterritoire(i).getSprite());
			}
		}*/
		partie.getFenetre()->display();
	}
	return 0;
}
