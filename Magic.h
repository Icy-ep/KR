#pragma once
#include "Card.h"

class XMagic : public XGameEntity
{
public:
	XMagic() = default;

	XMagic(XCard* pCard);

	~XMagic() = default;

private:
	int32_t m_Strength;//法术强度 决定伤害、减速效果等

	int32_t m_Range;//法术范围

	int32_t m_Time;//法术总持续时间
};