// dllmain.h : Declaration of module class.

class CMyATLKoshModule : public ATL::CAtlDllModuleT< CMyATLKoshModule >
{
public :
	DECLARE_LIBID(LIBID_MyATLKoshLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MYATLKOSH, "{53f13ea0-5886-431e-9655-c95ae734f09f}")
};

extern class CMyATLKoshModule _AtlModule;
