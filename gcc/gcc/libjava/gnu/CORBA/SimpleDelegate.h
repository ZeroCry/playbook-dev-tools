
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_SimpleDelegate__
#define __gnu_CORBA_SimpleDelegate__

#pragma interface

#include <org/omg/CORBA/portable/Delegate.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class IOR;
        class SimpleDelegate;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Context;
          class ContextList;
          class ExceptionList;
          class NVList;
          class NamedValue;
          class ORB;
          class Object;
          class Request;
      }
    }
  }
}

class gnu::CORBA::SimpleDelegate : public ::org::omg::CORBA::portable::Delegate
{

public:
  SimpleDelegate(::org::omg::CORBA::ORB *, ::gnu::CORBA::IOR *);
  virtual void setIor(::gnu::CORBA::IOR *);
  virtual ::gnu::CORBA::IOR * getIor();
  virtual ::org::omg::CORBA::Request * create_request(::org::omg::CORBA::Object *, ::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *);
  virtual ::org::omg::CORBA::Request * create_request(::org::omg::CORBA::Object *, ::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *, ::org::omg::CORBA::ExceptionList *, ::org::omg::CORBA::ContextList *);
  virtual ::org::omg::CORBA::Object * duplicate(::org::omg::CORBA::Object *);
  virtual jboolean equals(::org::omg::CORBA::Object *, ::org::omg::CORBA::Object *);
  virtual ::org::omg::CORBA::Object * get_interface_def(::org::omg::CORBA::Object *);
  virtual jint hash(::org::omg::CORBA::Object *, jint);
  virtual jint hashCode(::org::omg::CORBA::Object *);
  virtual jboolean is_a(::org::omg::CORBA::Object *, ::java::lang::String *);
  virtual jboolean is_equivalent(::org::omg::CORBA::Object *, ::org::omg::CORBA::Object *);
  virtual jboolean is_local(::org::omg::CORBA::Object *);
  virtual jboolean non_existent(::org::omg::CORBA::Object *);
  virtual ::org::omg::CORBA::ORB * orb(::org::omg::CORBA::Object *);
  virtual void release(::org::omg::CORBA::Object *);
  virtual ::org::omg::CORBA::Request * request(::org::omg::CORBA::Object *, ::java::lang::String *);
public: // actually protected
  ::org::omg::CORBA::ORB * __attribute__((aligned(__alignof__( ::org::omg::CORBA::portable::Delegate)))) orb__;
  ::gnu::CORBA::IOR * ior;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_SimpleDelegate__