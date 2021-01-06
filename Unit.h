#include "Card.h"

class XUnit : public XGameEntity
{
public:
	XUnit() = default;

	XUnit(XCard* pCard);

	virtual ~XUnit() = default;

public:
	virtual void Deploy();//����λ

	virtual void Init();//��m_Card�ı�ź͵ȼ����㵥λ����

	virtual void ChangeState(XState* NewState);//�ı�״̬�������뿪��ǰ״̬�ͽ�����һ��״̬���¼�

private:
	int32_t m_HitPoint;//����

	int32_t m_Attack;//������

	int32_t m_Speed;//�ƶ��ٶ�

	int32_t m_ViewRange;//�Ӿ�

	int32_t m_AttackRange;//��������

	int32_t m_DeployTime;//����ʱ��

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

class XState : public XGameEntity
{
public:
	XState() = default;

	virtual ~XState() = default;

	virtual void EnterState(XUnit* nUnit) = 0;

	virtual void ExecuteState(XUnit* nUnit) = 0;

	virtual void ExitState(XUnit* nUnit) = 0;
};

class XStateDeploy : public XState
{
public:
	XStateDeploy() = default;

	virtual ~XStateDeploy() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};

class XStateMoving : public XState
{
public:
	XStateMoving() = default;

	virtual ~XStateMoving() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};

class XStateAttacking : public XState
{
public:
	XStateAttacking() = default;

	virtual ~XStateAttacking() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};

class XStateDead : public XState
{
public:
	XStateDead() = default;

	virtual ~XStateDead() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};

class XStateIdle : public XState
{
public:
	XStateIdle() = default;

	virtual ~XStateIdle() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};

class XStateDestroyed : public XState
{
public:
	XStateDestroyed() = default;

	virtual ~XStateDestroyed() = default;

	virtual void EnterState(XUnit* nUnit);

	virtual void ExecuteState(XUnit* nUnit);

	virtual void ExitState(XUnit* nUnit);


};