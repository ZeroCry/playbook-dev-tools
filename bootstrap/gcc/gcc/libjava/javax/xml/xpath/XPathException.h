
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_xpath_XPathException__
#define __javax_xml_xpath_XPathException__

#pragma interface

#include <java/lang/Exception.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace xpath
      {
          class XPathException;
      }
    }
  }
}

class javax::xml::xpath::XPathException : public ::java::lang::Exception
{

public:
  XPathException(::java::lang::String *);
  XPathException(::java::lang::Throwable *);
  virtual ::java::lang::Throwable * getCause();
  virtual void printStackTrace();
  virtual void printStackTrace(::java::io::PrintStream *);
  virtual void printStackTrace(::java::io::PrintWriter *);
private:
  static const jlong serialVersionUID = -1837080260374986980LL;
public: // actually package-private
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::Exception)))) cause;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_xml_xpath_XPathException__