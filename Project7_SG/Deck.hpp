#ifndef DECK_HPP
#define DECK_HPP

#include <vector>

#include "Card.hpp"

namespace CardGame {

	class Deck {
	public:
		void CreatDeck();
		Card GetCard(int index);
		void PlaceCard(Card newCard); 

	private:
		std::vector<Card> fullDeck_;

	};
}


#endif // !DECK_HPP
