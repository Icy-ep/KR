class XUnit;

class XState : public XGameEntity
{
public:
	XState() = default;

	virtual ~XState() = default;

public:
	virtual void EnterState(XUnit* nUnit) = 0;

	virtual void ExecuteState(XUnit* nUnit, float FrameTime) = 0;

	virtual void ExitState(XUnit* nUnit) = 0;
};

class XStateDeploy : public XState
{
public:
	XStateDeploy() = default;

	~XStateDeploy() = default;

};

class XStateMoving : public XState
{
public:
	XStateMoving() = default;

	~XStateMoving() = default;

};

class XStateAttacking : public XState
{
public:
	XStateAttacking() = default;

	~XStateAttacking() = default;

};

class XStateDead : public XState
{
public:
	XStateDead() = default;

	~XStateDead() = default;

};

class XStateIdle : public XState
{
public:
	XStateIdle() = default;

	~XStateIdle() = default;

};

class XStateDestroyed : public XState
{
public:
	XStateDestroyed() = default;

	~XStateDestroyed() = default;

};

class XGlobalStates
{
public:
	XGlobalStates() = default;
	
	~XGlobalStates() = default;

public:
	static XStateDeploy* m_StateDeploy = new XStateDeploy();

	static XStateMoving* m_StateMoving = new XStateMoving();

	static XStateAttacking* m_StateAttacking = new XStateAttacking();

	static XStateDead* m_StateDead = new XStateDead();

	static XStateIdle* m_StateIdle = new XStateIdle();

	static XStateDestroyed* m_StateDestroyed = new XStateDestroyed();
};