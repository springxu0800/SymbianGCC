
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Ref__
#define __java_sql_Ref__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace sql
    {
        class Ref;
    }
  }
}

class java::sql::Ref : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getBaseTypeName() = 0;
  virtual ::java::lang::Object * getObject(::java::util::Map *) = 0;
  virtual ::java::lang::Object * getObject() = 0;
  virtual void setObject(::java::lang::Object *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_sql_Ref__
