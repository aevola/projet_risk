/**
 *
 *
**/
#ifndef __Etape_HPP__
#define __Etape_HPP__

#include <iostream>
#include <vector>

/**
 * @interface Etape
 *
 *
 */

class Etape
{
	public :
		virtual ~Etape(){}
		virtual void jouer() = 0;
		/*virtual void debutPartie() = 0;
		virtual void debutCombat() = 0;
		virtual void finCombat() = 0;
		virtual void debutTour() = 0;
		virtual void finPartie() = 0;
		virtual void quitter() = 0;*/

};

#endif 
