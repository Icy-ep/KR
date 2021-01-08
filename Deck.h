#include "Card.h"

#define DECK_SIZE (8)

class XDeck : public XGameEntity
{
public:
	XDeck() = default;

	XDeck(XCard* Cards[DECK_SIZE]);

	~XDeck() = default;

public:
	void Shuffle();//ϴ��

	void Init();

	void Draw(int32_t Slot);//�ӿ��۳���


public:
	int m_CurrentCardPosition;

	//m_CardSlot��ʾ4�����ÿ���,m_CardNext��ʾ��һ�Ż�鵽�Ŀ�
	XCard* m_CardSlot[4];

	XCard* m_CardNext;

private:
	XCard* m_Cards[DECK_SIZE];


};