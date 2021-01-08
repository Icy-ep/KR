#include "Card.h"
#include "State.h"

class XUnit : public XGameEntity
{
public:
	XUnit() = default;

	XUnit(XCard* pCard);

	virtual ~XUnit() = default;

public:
	bool CheckDeploy();//����Ƿ��Ѿ���ɲ���

	void Attacked(int32_t AttackPoint);//�ܵ��������������ж�

	virtual void Deploy(float FrameTime);//����λ

	virtual void Init();//��m_Card�ı�ź͵ȼ����㵥λ����

	virtual void ChangeState(XState* NewState);//�ı�״̬�������뿪��ǰ״̬�ͽ�����һ��״̬���¼�

private:
	int32_t m_HitPoint;//����

	int32_t m_Attack;//������

	int32_t m_Defense;//������

	int32_t m_Speed;//�ƶ��ٶ�

	int32_t m_ViewRange;//�Ӿ�

	int32_t m_AttackRange;//��������

	float m_DeployTime;//����ʱ��

	float m_SkillTime;//�������ܼ��

	float m_AttackSpeed;//�����ٶȣ�ÿAttackSpeed�빥��һ��

	bool m_IsMelee;//�Ƿ��ս

	XCard m_Card;//��Ӧ����

	XState* m_pCurrentState;//����״̬
};

class XMovableUnit : public XUnit
{

};

class XFixedUnit : public XUnit
{

};

