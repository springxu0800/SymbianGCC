
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_w3c_dom_stylesheets_StyleSheetList__
#define __org_w3c_dom_stylesheets_StyleSheetList__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace stylesheets
        {
            class StyleSheet;
            class StyleSheetList;
        }
      }
    }
  }
}

class org::w3c::dom::stylesheets::StyleSheetList : public ::java::lang::Object
{

public:
  virtual jint getLength() = 0;
  virtual ::org::w3c::dom::stylesheets::StyleSheet * item(jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_w3c_dom_stylesheets_StyleSheetList__