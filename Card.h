#include <string>

#include "GameEntity.h"

#define MAX_LEVEL (15)

class XCard : public XGameEntity
{
public:
	XCard() = default;

	XCard(int nLevel);

	~XCard() = default;

public:
	int32_t GetCardLevel();

	int32_t GetCardCost();

	int32_t GetCardId();

	std::string GetCardName();


private:
	void LevelUp();



private:
	int32_t m_CardLevel;//���Ƶȼ�

	int32_t m_CardCost;//���Ʒ���

	int32_t m_CardId;//���Ʊ��

	int32_t m_goldNextLevel;//����������

	int32_t m_fragNextLevel;//����������Ƭ
	
	std::string m_CardName;//��������

};