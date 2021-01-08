#include "Card.h"
#include "State.h"

class XUnit : public XGameEntity
{
public:
	XUnit() = default;

	XUnit(XCard* pCard);

	virtual ~XUnit() = default;

public:
	bool CheckDeploy();//检测是否已经完成部署

	void Attacked(int32_t AttackPoint);//受到攻击，附死亡判定

	virtual void Deploy(float FrameTime);//部署单位

	virtual void Init();//从m_Card的编号和等级计算单位属性

	virtual void ChangeState(XState* NewState);//改变状态，触发离开当前状态和进入下一个状态的事件

private:
	int32_t m_HitPoint;//生命

	int32_t m_Attack;//攻击力

	int32_t m_Defense;//防御力

	int32_t m_Speed;//移动速度

	int32_t m_ViewRange;//视距

	int32_t m_AttackRange;//攻击距离

	float m_DeployTime;//部署时间

	float m_SkillTime;//攻击技能间隔

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

