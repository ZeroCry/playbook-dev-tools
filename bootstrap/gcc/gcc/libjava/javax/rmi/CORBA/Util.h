
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_rmi_CORBA_Util__
#define __javax_rmi_CORBA_Util__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
        class Remote;
        class RemoteException;
    }
  }
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
          class Stub;
          class Tie;
          class Util;
          class UtilDelegate;
          class ValueHandler;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ORB;
          class SystemException;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class javax::rmi::CORBA::Util : public ::java::lang::Object
{

  Util();
public:
  static ::java::lang::Object * copyObject(::java::lang::Object *, ::org::omg::CORBA::ORB *);
  static JArray< ::java::lang::Object * > * copyObjects(JArray< ::java::lang::Object * > *, ::org::omg::CORBA::ORB *);
  static ::javax::rmi::CORBA::ValueHandler * createValueHandler();
  static ::java::lang::String * getCodebase(::java::lang::Class *);
  static ::javax::rmi::CORBA::Tie * getTie(::java::rmi::Remote *);
  static jboolean isLocal(::javax::rmi::CORBA::Stub *);
  static ::java::lang::Class * loadClass(::java::lang::String *, ::java::lang::String *, ::java::lang::ClassLoader *);
  static ::java::rmi::RemoteException * mapSystemException(::org::omg::CORBA::SystemException *);
  static void registerTarget(::javax::rmi::CORBA::Tie *, ::java::rmi::Remote *);
  static void unexportObject(::java::rmi::Remote *);
  static ::java::rmi::RemoteException * wrapException(::java::lang::Throwable *);
  static void writeAbstractObject(::org::omg::CORBA::portable::OutputStream *, ::java::lang::Object *);
  static void writeAny(::org::omg::CORBA::portable::OutputStream *, ::java::lang::Object *);
  static ::java::lang::Object * readAny(::org::omg::CORBA::portable::InputStream *);
  static void writeRemoteObject(::org::omg::CORBA::portable::OutputStream *, ::java::lang::Object *);
public: // actually package-private
  static ::javax::rmi::CORBA::UtilDelegate * delegate;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_rmi_CORBA_Util__
