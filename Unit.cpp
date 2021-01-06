#pragma once
#include "Unit.h"


XUnit::XUnit(XCard* Card)
{

}

void XUnit::Deploy()
{

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

