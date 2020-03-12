

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for My2DKosh.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __My2DKosh_i_h__
#define __My2DKosh_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPolyCtl_FWD_DEFINED__
#define __IPolyCtl_FWD_DEFINED__
typedef interface IPolyCtl IPolyCtl;

#endif 	/* __IPolyCtl_FWD_DEFINED__ */


#ifndef ___IPolyCtlEvents_FWD_DEFINED__
#define ___IPolyCtlEvents_FWD_DEFINED__
typedef interface _IPolyCtlEvents _IPolyCtlEvents;

#endif 	/* ___IPolyCtlEvents_FWD_DEFINED__ */


#ifndef __PolyCtl_FWD_DEFINED__
#define __PolyCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class PolyCtl PolyCtl;
#else
typedef struct PolyCtl PolyCtl;
#endif /* __cplusplus */

#endif 	/* __PolyCtl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPolyCtl_INTERFACE_DEFINED__
#define __IPolyCtl_INTERFACE_DEFINED__

/* interface IPolyCtl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPolyCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("048c4db5-5411-4631-ac64-7a5b57455b07")
    IPolyCtl : public IDispatch
    {
    public:
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolyCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPolyCtl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPolyCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPolyCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPolyCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPolyCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPolyCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPolyCtl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IPolyCtl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IPolyCtl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        END_INTERFACE
    } IPolyCtlVtbl;

    interface IPolyCtl
    {
        CONST_VTBL struct IPolyCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolyCtl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolyCtl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolyCtl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolyCtl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPolyCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPolyCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPolyCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPolyCtl_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IPolyCtl_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolyCtl_INTERFACE_DEFINED__ */



#ifndef __My2DKoshLib_LIBRARY_DEFINED__
#define __My2DKoshLib_LIBRARY_DEFINED__

/* library My2DKoshLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_My2DKoshLib;

#ifndef ___IPolyCtlEvents_DISPINTERFACE_DEFINED__
#define ___IPolyCtlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IPolyCtlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IPolyCtlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7ed2b240-5a48-462d-94ee-776ba37342c0")
    _IPolyCtlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IPolyCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IPolyCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IPolyCtlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IPolyCtlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IPolyCtlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IPolyCtlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IPolyCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IPolyCtlEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IPolyCtlEventsVtbl;

    interface _IPolyCtlEvents
    {
        CONST_VTBL struct _IPolyCtlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IPolyCtlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IPolyCtlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IPolyCtlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IPolyCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IPolyCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IPolyCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IPolyCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IPolyCtlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PolyCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("b7dc2b63-cb73-468b-b002-2c91381a1bfc")
PolyCtl;
#endif
#endif /* __My2DKoshLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


