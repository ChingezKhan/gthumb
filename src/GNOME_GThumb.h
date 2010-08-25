/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#ifndef GNOME_GThumb_H
#define GNOME_GThumb_H 1
#include <glib.h>
#define ORBIT_IDL_SERIAL 20
#include <orbit/orbit-types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/** typedefs **/
#line 14 "/usr/share/idl/bonobo-2.0/Bonobo.idl"
#include <bonobo/Bonobo.h>
#if !defined(ORBIT_DECL_GNOME_GThumb_Application) && !defined(_GNOME_GThumb_Application_defined)
#define ORBIT_DECL_GNOME_GThumb_Application 1
#define _GNOME_GThumb_Application_defined 1
#define GNOME_GThumb_Application__freekids CORBA_Object__freekids
typedef CORBA_Object GNOME_GThumb_Application;
extern CORBA_unsigned_long GNOME_GThumb_Application__classid;
#if !defined(TC_IMPL_TC_GNOME_GThumb_Application_0)
#define TC_IMPL_TC_GNOME_GThumb_Application_0 'G'
#define TC_IMPL_TC_GNOME_GThumb_Application_1 'N'
#define TC_IMPL_TC_GNOME_GThumb_Application_2 'O'
#define TC_IMPL_TC_GNOME_GThumb_Application_3 'M'
#define TC_IMPL_TC_GNOME_GThumb_Application_4 'E'
#define TC_IMPL_TC_GNOME_GThumb_Application_5 '_'
#define TC_IMPL_TC_GNOME_GThumb_Application_6 'G'
#define TC_IMPL_TC_GNOME_GThumb_Application_7 'T'
#define TC_IMPL_TC_GNOME_GThumb_Application_8 'h'
#define TC_IMPL_TC_GNOME_GThumb_Application_9 'u'
#define TC_IMPL_TC_GNOME_GThumb_Application_10 'm'
#define TC_IMPL_TC_GNOME_GThumb_Application_11 'b'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_GThumb
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_GNOME_GThumb_Application_struct;
#define TC_GNOME_GThumb_Application ((CORBA_TypeCode)&TC_GNOME_GThumb_Application_struct)
#endif
#endif

/** POA structures **/
#ifndef _defined_POA_GNOME_GThumb_Application
#define _defined_POA_GNOME_GThumb_Application 1
typedef struct {
  void *_private;
void (*open_browser)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev);
void (*open_viewer)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev);
void (*load_image)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev);
void (*import_photos)(PortableServer_Servant _servant, CORBA_Environment *ev);
} POA_GNOME_GThumb_Application__epv;
typedef struct {
  PortableServer_ServantBase__epv *_base_epv;
  POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
  POA_GNOME_GThumb_Application__epv *GNOME_GThumb_Application_epv;
} POA_GNOME_GThumb_Application__vepv;
typedef struct {
  void *_private;
  POA_GNOME_GThumb_Application__vepv *vepv;
} POA_GNOME_GThumb_Application;
extern void POA_GNOME_GThumb_Application__init(PortableServer_Servant servant, CORBA_Environment *ev);
extern void POA_GNOME_GThumb_Application__fini(PortableServer_Servant servant, CORBA_Environment *ev);
#endif /* _defined_POA_GNOME_GThumb_Application */

/** skel prototypes **/
void _ORBIT_skel_small_GNOME_GThumb_Application_open_browser(POA_GNOME_GThumb_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_open_browser)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_GThumb_Application_open_viewer(POA_GNOME_GThumb_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_open_viewer)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_GThumb_Application_load_image(POA_GNOME_GThumb_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_load_image)(PortableServer_Servant _servant, const CORBA_char * uri, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_GThumb_Application_import_photos(POA_GNOME_GThumb_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_import_photos)(PortableServer_Servant _servant, CORBA_Environment *ev));

/** stub prototypes **/
#define GNOME_GThumb_Application_ref Bonobo_Unknown_ref
#define GNOME_GThumb_Application_unref Bonobo_Unknown_unref
#define GNOME_GThumb_Application_queryInterface Bonobo_Unknown_queryInterface
void GNOME_GThumb_Application_open_browser(GNOME_GThumb_Application _obj, const CORBA_char * uri, CORBA_Environment *ev);
void GNOME_GThumb_Application_open_viewer(GNOME_GThumb_Application _obj, const CORBA_char * uri, CORBA_Environment *ev);
void GNOME_GThumb_Application_load_image(GNOME_GThumb_Application _obj, const CORBA_char * uri, CORBA_Environment *ev);
void GNOME_GThumb_Application_import_photos(GNOME_GThumb_Application _obj, CORBA_Environment *ev);
#include <orbit/orb-core/orbit-interface.h>

#ifdef ORBIT_IDL_C_IMODULE_GNOME_GThumb
static 
#else
extern 
#endif
ORBit_IInterface GNOME_GThumb_Application__iinterface;
#define GNOME_GThumb_Application_IMETHODS_LEN 4
#ifdef ORBIT_IDL_C_IMODULE_GNOME_GThumb
static 
#else
extern 
#endif
ORBit_IMethod GNOME_GThumb_Application__imethods[GNOME_GThumb_Application_IMETHODS_LEN];

/** IMethods index */

#ifndef __GNOME_GThumb_Application__imethods_index
#define __GNOME_GThumb_Application__imethods_index
typedef enum {
	GNOME_GThumb_Application_open_browser__imethods_index,
	GNOME_GThumb_Application_open_viewer__imethods_index,
	GNOME_GThumb_Application_load_image__imethods_index,
	GNOME_GThumb_Application_import_photos__imethods_index
} GNOME_GThumb_Application__imethods_index;
#endif /* __GNOME_GThumb_Application__imethods_index */

#ifndef __ORBIT_IMETHODS_INDEX
#define __ORBIT_IMETHODS_INDEX
#define ORBIT_IMETHODS_INDEX(m) (m ## __imethods_index)
#endif /* __ORBIT_IMETHODS_INDEX */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef EXCLUDE_ORBIT_H
#include <orbit/orbit.h>

#endif /* EXCLUDE_ORBIT_H */
#endif
#undef ORBIT_IDL_SERIAL