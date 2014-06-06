
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__
#define __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
          class OID;
      }
    }
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
              class DHKeyPairX509Codec;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
        class PrivateKey;
        class PublicKey;
    }
  }
}

class gnu::javax::crypto::key::dh::DHKeyPairX509Codec : public ::java::lang::Object
{

public:
  DHKeyPairX509Codec();
  virtual jint getFormatID();
  virtual JArray< jbyte > * encodePublicKey(::java::security::PublicKey *);
  virtual JArray< jbyte > * encodePrivateKey(::java::security::PrivateKey *);
  virtual ::java::security::PublicKey * decodePublicKey(JArray< jbyte > *);
  virtual ::java::security::PrivateKey * decodePrivateKey(JArray< jbyte > *);
private:
  static ::gnu::java::security::OID * DH_ALG_OID;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_key_dh_DHKeyPairX509Codec__
