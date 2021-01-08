#include "Card.h"

#define DECK_SIZE (8)

class XDeck : public XGameEntity
{
public:
	XDeck() = default;

	XDeck(XCard* Cards[DECK_SIZE]);

	~XDeck() = default;

public:
	void Shuffle();//洗牌

	void Init();

	void Draw(int32_t Slot);//从卡槽抽牌


public:
	int m_CurrentCardPosition;

	//m_CardSlot表示4个可用卡槽,m_CardNext表示下一张会抽到的卡
	XCard* m_CardSlot[4];

	XCard* m_CardNext;

private:
	XCard* m_Cards[DECK_SIZE];


};