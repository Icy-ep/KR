#pragma once

#include "Card.h"

XCard::XCard(int nLevel)
{

}

int32_t XCard::GetCardLevel()
{
	return m_CardLevel;
}

int32_t XCard::GetCardCost()
{
	return m_CardCost;
}

int32_t XCard::GetCardId()
{
	return m_CardId;
}

std::string XCard::GetCardName() {
	return "";//to do
}

void XCard::LevelUp() {
	if (m_CardLevel >= MAX_LEVEL)
	{
		return;
	}
	//�۳���Ҫ��Դ������
	++m_CardLevel;
}