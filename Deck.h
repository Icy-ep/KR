#include "Card.h"

#define DECK_SIZE (8)

class XDeck : public XGameEntity
{
public:
	XDeck() = default;

	XDeck(XCard Cards[DECK_SIZE]);

	~XDeck() = default;

public:
	void Shuffle();//Ï´ÅÆ

private:
	XCard m_Cards[DECK_SIZE];


};