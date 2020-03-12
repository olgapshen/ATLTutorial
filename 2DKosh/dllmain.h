// dllmain.h : Declaration of module class.

class CMy2DKoshModule : public ATL::CAtlDllModuleT< CMy2DKoshModule >
{
public :
	DECLARE_LIBID(LIBID_My2DKoshLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MY2DKOSH, "{53f13ea0-5886-431e-9655-c95ae734f09f}")
};

extern class CMy2DKoshModule _AtlModule;
