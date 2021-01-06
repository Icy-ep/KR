#include "Card.h"

class XUnit : public XGameEntity
{
public:
	XUnit() = default;

	XUnit(XCard* pCard);

	virtual ~XUnit() = default;

public:
	virtual void Deploy();//部署单位

	virtual void Init();//从m_Card的编号和等级计算单位属性

	virtual void ChangeState(XState* NewState);//改变状态，触发离开当前状态和进入下一个状态的事件

private:
	int32_t m_HitPoint;//生命

	int32_t m_Attack;//攻击力

	int32_t m_Speed;//移动速度

	int32_t m_ViewRange;//视距

	int32_t m_AttackRange;//攻击距离

	int32_t m_DeployTime;//部署时间

	float m_AttackSpeed;//攻击速度，每AttackSpeed秒攻击一次

	bool m_IsMelee;//是否近战

	XCard m_Card;//对应卡牌

	XState* m_pCurrentState;//所处状态
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