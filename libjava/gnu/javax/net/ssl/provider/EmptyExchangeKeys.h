
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_EmptyExchangeKeys__
#define __gnu_javax_net_ssl_provider_EmptyExchangeKeys__

#pragma interface

#include <gnu/javax/net/ssl/provider/ExchangeKeys.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class EmptyExchangeKeys;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::EmptyExchangeKeys : public ::gnu::javax::net::ssl::provider::ExchangeKeys
{

public:
  EmptyExchangeKeys();
  virtual jint length();
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * toString(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_EmptyExchangeKeys__