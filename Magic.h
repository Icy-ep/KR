#pragma once
#include "Card.h"

class XMagic : public XGameEntity
{
public:
	XMagic() = default;

	XMagic(XCard* pCard);

	~XMagic() = default;

private:
	int32_t m_Strength;//����ǿ�� �����˺�������Ч����

	int32_t m_Range;//������Χ

	int32_t m_Time;//�����ܳ���ʱ��
};