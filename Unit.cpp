#pragma once
#include "Unit.h"


XUnit::XUnit(XCard* Card)
{

}

bool XUnit::CheckDeploy()
{
	return this->m_DeployTime <= 0;
}

void XUnit::Attacked(int32_t AttackPoint)
{
	if (AttackPoint - m_Defense > 0)
	{
		m_HitPoint = m_HitPoint - (AttackPoint - m_Defense);
	}

	if (m_HitPoint <= 0)
	{
		ChangeState(XState* XGlobalStates.m_StateDead);
	}
}

void XUnit::Deploy(float FrameTime)
{
	this->m_DeployTimem_DeployTime = this->m_DeployTime - FrameTime;
}

void XUnit::Init()
{

}

void XUnit::ChangeState(XState* pNewState)
{
	m_pCurrentState->ExitState(this);

	m_pCurrentState = pNewState;

	m_pCurrentState->EnterState(this);

}

