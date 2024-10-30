#include "Deck.hpp"

namespace CardGame {

	void Deck::CreatDeck() {
		for (size_t i = 1; i <= 4; i++)
		{
			for (size_t j = 2; j <= 14; j++)
			{
				fullDeck_.emplace_back(i, j);
			}
		}
	}

	Card Deck::GetCard(int index)
	{
		return fullDeck_[index];
	}

	void Deck::PlaceCard(Card newCard)
	{
		fullDeck_.emplace_back(newCard);
	}

}