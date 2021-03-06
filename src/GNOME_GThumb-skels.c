/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#include <string.h>
#define ORBIT2_STUBS_API
#include "GNOME_GThumb.h"

static ORBitSmallSkeleton get_skel_small_GNOME_GThumb_Application(POA_GNOME_GThumb_Application *servant,
const char *opname,gpointer *m_data, gpointer *impl)
{
switch(opname[0]) {
case 'i':
if(strcmp((opname + 1), "mport_photos")) break;
*impl = (gpointer)servant->vepv->GNOME_GThumb_Application_epv->import_photos;
{ORBit_IInterface *volatile _t_=&GNOME_GThumb_Application__iinterface;*m_data = (gpointer)&_t_->methods._buffer [3];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_GNOME_GThumb_Application_import_photos;
break;
case 'l':
if(strcmp((opname + 1), "oad_image")) break;
*impl = (gpointer)servant->vepv->GNOME_GThumb_Application_epv->load_image;
{ORBit_IInterface *volatile _t_=&GNOME_GThumb_Application__iinterface;*m_data = (gpointer)&_t_->methods._buffer [2];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_GNOME_GThumb_Application_load_image;
break;
case 'o':
switch(opname[1]) {
case 'p':
switch(opname[2]) {
case 'e':
switch(opname[3]) {
case 'n':
switch(opname[4]) {
case '_':
switch(opname[5]) {
case 'b':
if(strcmp((opname + 6), "rowser")) break;
*impl = (gpointer)servant->vepv->GNOME_GThumb_Application_epv->open_browser;
{ORBit_IInterface *volatile _t_=&GNOME_GThumb_Application__iinterface;*m_data = (gpointer)&_t_->methods._buffer [0];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_GNOME_GThumb_Application_open_browser;
break;
case 'v':
if(strcmp((opname + 6), "iewer")) break;
*impl = (gpointer)servant->vepv->GNOME_GThumb_Application_epv->open_viewer;
{ORBit_IInterface *volatile _t_=&GNOME_GThumb_Application__iinterface;*m_data = (gpointer)&_t_->methods._buffer [1];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_GNOME_GThumb_Application_open_viewer;
break;
default: break; 
}
break;
default: break; 
}
break;
default: break; 
}
break;
default: break; 
}
break;
default: break; 
}
break;
case 'q':
if(strcmp((opname + 1), "ueryInterface")) break;
*impl = (gpointer)servant->vepv->Bonobo_Unknown_epv->queryInterface;
{ORBit_IInterface *volatile _t_=&Bonobo_Unknown__iinterface;*m_data = (gpointer)&_t_->methods._buffer [2];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_Bonobo_Unknown_queryInterface;
break;
case 'r':
if(strcmp((opname + 1), "ef")) break;
*impl = (gpointer)servant->vepv->Bonobo_Unknown_epv->ref;
{ORBit_IInterface *volatile _t_=&Bonobo_Unknown__iinterface;*m_data = (gpointer)&_t_->methods._buffer [0];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_Bonobo_Unknown_ref;
break;
case 'u':
if(strcmp((opname + 1), "nref")) break;
*impl = (gpointer)servant->vepv->Bonobo_Unknown_epv->unref;
{ORBit_IInterface *volatile _t_=&Bonobo_Unknown__iinterface;*m_data = (gpointer)&_t_->methods._buffer [1];}
return (ORBitSmallSkeleton)_ORBIT_skel_small_Bonobo_Unknown_unref;
break;
default: break; 
}
return NULL;
}

void POA_GNOME_GThumb_Application__init(PortableServer_Servant servant,
CORBA_Environment *env)
{
  static PortableServer_ClassInfo class_info = {NULL, (ORBit_small_impl_finder)&get_skel_small_GNOME_GThumb_Application, "IDL:GNOME/GThumb/Application:1.0", &GNOME_GThumb_Application__classid, NULL, &GNOME_GThumb_Application__iinterface};
  PortableServer_ServantBase__init (       ((PortableServer_ServantBase *)servant), env);
  POA_Bonobo_Unknown__init(servant, env);
   ORBit_skel_class_register (&class_info,
   (PortableServer_ServantBase *)servant, POA_GNOME_GThumb_Application__fini,
   ORBIT_VEPV_OFFSET (POA_GNOME_GThumb_Application__vepv, GNOME_GThumb_Application_epv),
(CORBA_unsigned_long) Bonobo_Unknown__classid,
ORBIT_VEPV_OFFSET (POA_GNOME_GThumb_Application__vepv, Bonobo_Unknown_epv),
   (CORBA_unsigned_long) 0);}

void POA_GNOME_GThumb_Application__fini(PortableServer_Servant servant,
CORBA_Environment *env)
{
  POA_Bonobo_Unknown__fini(servant, env);
  PortableServer_ServantBase__fini(servant, env);
}

