#ifndef HAND_HPP
#define HAND_HPP

#include <vector>

#include "Card.hpp"

namespace CardGame {

	class Hand {
	public:
		//����� �������� ������ ��� ��������� ����

	private:
		std::vector<Card> handDeck_;
	};
}

#endif // !HAND_HPP
