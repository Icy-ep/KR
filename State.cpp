#include "State.h"

void XStateDeploy::EnterState(XUnit* Unit)
{
	//重置部署时间
	//单位头上出一个读条
}

void XStateDeploy::ExecuteState(XUnit* Unit, float FrameTime)
{
	Unit->Deploy(FrameTime);

	if (Unit->CheckDeploy())
	{
		Unit->ChangeState(XState* XGlobalStates->m_StateDeploy);
	}
}

void XStateDeploy::ExitState(XUnit* Unit)
{
	//去掉单位头上的读条
}

void XStateMoving::EnterState(XUnit* Unit)
{
	//选择目标
}

void XStateMoving::ExecuteState(XUnit* Unit)
{
	//处理单位移动
}

void XStateMoving::ExitState(XUnit* Unit)
{
	//取消移动动画
}

void XStateAttacking::EnterState(XUnit* Unit)
{
	//设置攻击技能间隔
}

void XStateAttacking::ExecuteState(XUnit* Unit)
{
	
	//攻击范围内所有敌人
}

void XStateAttacking::ExitState(XUnit* Unit)
{

	//取消攻击动画
}