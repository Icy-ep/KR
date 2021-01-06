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
	int32_t m_CardLevel;//卡牌等级

	int32_t m_CardCost;//卡牌费用

	int32_t m_CardId;//卡牌编号

	int32_t m_goldNextLevel;//升级所需金币

	int32_t m_fragNextLevel;//升级所需碎片
	
	std::string m_CardName;//卡牌名称

};