#include "State.h"

void XStateDeploy::EnterState(XUnit* Unit)
{
	//���ò���ʱ��
	//��λͷ�ϳ�һ������
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
	//ȥ����λͷ�ϵĶ���
}

void XStateMoving::EnterState(XUnit* Unit)
{
	//ѡ��Ŀ��
}

void XStateMoving::ExecuteState(XUnit* Unit)
{
	//����λ�ƶ�
}

void XStateMoving::ExitState(XUnit* Unit)
{
	//ȡ���ƶ�����
}

void XStateAttacking::EnterState(XUnit* Unit)
{
	//���ù������ܼ��
}

void XStateAttacking::ExecuteState(XUnit* Unit)
{
	
	//������Χ�����е���
}

void XStateAttacking::ExitState(XUnit* Unit)
{

	//ȡ����������
}