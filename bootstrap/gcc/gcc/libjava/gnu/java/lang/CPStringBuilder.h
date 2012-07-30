
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_CPStringBuilder__
#define __gnu_java_lang_CPStringBuilder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
    }
  }
}

class gnu::java::lang::CPStringBuilder : public ::java::lang::Object
{

public:
  CPStringBuilder();
  CPStringBuilder(jint);
  CPStringBuilder(::java::lang::String *);
  CPStringBuilder(::java::lang::StringBuffer *);
  CPStringBuilder(::java::lang::StringBuilder *);
  CPStringBuilder(::java::lang::CharSequence *);
  void setLength(jint);
  jchar charAt(jint);
  jint codePointAt(jint);
  jint codePointBefore(jint);
  void getChars(jint, jint, JArray< jchar > *, jint);
  void setCharAt(jint, jchar);
  ::gnu::java::lang::CPStringBuilder * append(::java::lang::Object *);
  ::gnu::java::lang::CPStringBuilder * append(::java::lang::String *);
  ::gnu::java::lang::CPStringBuilder * append(::java::lang::StringBuffer *);
  ::gnu::java::lang::CPStringBuilder * append(JArray< jchar > *);
  ::gnu::java::lang::CPStringBuilder * append(JArray< jchar > *, jint, jint);
  ::gnu::java::lang::CPStringBuilder * append(jboolean);
  ::gnu::java::lang::CPStringBuilder * CPStringBuilder$append(jchar);
  ::gnu::java::lang::CPStringBuilder * CPStringBuilder$append(::java::lang::CharSequence *);
  ::gnu::java::lang::CPStringBuilder * CPStringBuilder$append(::java::lang::CharSequence *, jint, jint);
  ::gnu::java::lang::CPStringBuilder * append(jint);
  ::gnu::java::lang::CPStringBuilder * append(jlong);
  ::gnu::java::lang::CPStringBuilder * append(jfloat);
  ::gnu::java::lang::CPStringBuilder * append(jdouble);
  ::gnu::java::lang::CPStringBuilder * appendCodePoint(jint);
  ::gnu::java::lang::CPStringBuilder * delete$(jint, jint);
  ::gnu::java::lang::CPStringBuilder * deleteCharAt(jint);
  ::gnu::java::lang::CPStringBuilder * replace(jint, jint, ::java::lang::String *);
  ::gnu::java::lang::CPStringBuilder * insert(jint, JArray< jchar > *, jint, jint);
  ::gnu::java::lang::CPStringBuilder * insert(jint, ::java::lang::Object *);
  ::gnu::java::lang::CPStringBuilder * insert(jint, ::java::lang::String *);
  ::gnu::java::lang::CPStringBuilder * insert(jint, ::java::lang::CharSequence *);
  ::gnu::java::lang::CPStringBuilder * insert(jint, ::java::lang::CharSequence *, jint, jint);
  ::gnu::java::lang::CPStringBuilder * insert(jint, JArray< jchar > *);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jboolean);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jchar);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jint);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jlong);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jfloat);
  ::gnu::java::lang::CPStringBuilder * insert(jint, jdouble);
  jint indexOf(::java::lang::String *);
  jint indexOf(::java::lang::String *, jint);
  jint lastIndexOf(::java::lang::String *);
  jint lastIndexOf(::java::lang::String *, jint);
  ::gnu::java::lang::CPStringBuilder * reverse();
  void trimToSize();
  jint codePointCount(jint, jint);
  jint offsetByCodePoints(jint, jint);
  void ensureCapacity(jint);
private:
  void allocateArray(jint);
public:
  jint length();
  ::java::lang::CharSequence * subSequence(jint, jint);
  ::java::lang::String * substring(jint);
  ::java::lang::String * substring(jint, jint);
  ::java::lang::String * toString();
  ::java::lang::Appendable * append(::java::lang::CharSequence *, jint, jint);
  ::java::lang::Appendable * append(::java::lang::CharSequence *);
  ::java::lang::Appendable * append(jchar);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) count;
  JArray< jchar > * value;
  jboolean allocated;
  static jint DEFAULT_CAPACITY;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_lang_CPStringBuilder__