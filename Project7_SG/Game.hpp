#ifndef GAME_HPP
#define GAME_HPP

namespace CardGame {

	enum Suit {
		clubs,
		diamods,
		hards,
		spikes
	};
	enum Rank {
		two = 2,
		three,
		four,
		five,
		six,
		seven,
		eight,
		nine,
		ten,
		jack,
		queen,
		king,
		ace
	};

	class Card {
	public:
		Card() = default;
		Card(Rank rank, Suit suit):
			rank_(rank),
			suit_(suit)
		{}

		//геттеры делаем обязательно
		Suit GetSuit()const;
		Rank GetRank()const;

		//сеттеры лучше не делать

	private:
		Rank rank_;
		Suit suit_;
	};
}
#endif // !GAME_HPP
