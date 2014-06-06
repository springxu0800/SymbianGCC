#define _FP_W_TYPE_SIZE		32
#define _FP_W_TYPE		unsigned long
#define _FP_WS_TYPE		signed long
#define _FP_I_TYPE		long

#define _FP_MUL_MEAT_S(R,X,Y)				\
  _FP_MUL_MEAT_1_wide(_FP_WFRACBITS_S,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_D(R,X,Y)				\
  _FP_MUL_MEAT_2_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_Q(R,X,Y)				\
  _FP_MUL_MEAT_4_wide(_FP_WFRACBITS_Q,R,X,Y,umul_ppmm)

#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_udiv_norm(S,R,X,Y)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_2_udiv(D,R,X,Y)
#define _FP_DIV_MEAT_Q(R,X,Y)	_FP_DIV_MEAT_4_udiv(Q,R,X,Y)

#define _FP_NANFRAC_S		((_FP_QNANBIT_S << 1) - 1)
#define _FP_NANFRAC_D		((_FP_QNANBIT_D << 1) - 1), -1
#define _FP_NANFRAC_Q		((_FP_QNANBIT_Q << 1) - 1), -1, -1, -1
#define _FP_NANSIGN_S		0
#define _FP_NANSIGN_D		0
#define _FP_NANSIGN_Q		0

#define _FP_KEEPNANFRACP 1
/* From my experiments it seems X is chosen unless one of the
   NaNs is sNaN,  in which case the result is NANSIGN/NANFRAC.  */
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)			\
  do {								\
    if ((_FP_FRAC_HIGH_RAW_##fs(X) |				\
	 _FP_FRAC_HIGH_RAW_##fs(Y)) & _FP_QNANBIT_##fs)		\
      {								\
	R##_s = _FP_NANSIGN_##fs;				\
        _FP_FRAC_SET_##wc(R,_FP_NANFRAC_##fs);			\
      }								\
    else							\
      {								\
	R##_s = X##_s;						\
        _FP_FRAC_COPY_##wc(R,X);				\
      }								\
    R##_c = FP_CLS_NAN;						\
  } while (0)

#define FP_EX_INVALID           (1 << 4)
#define FP_EX_DIVZERO           (1 << 3)
#define FP_EX_OVERFLOW          (1 << 2)
#define FP_EX_UNDERFLOW         (1 << 1)
#define FP_EX_INEXACT           (1 << 0)

#define       __LITTLE_ENDIAN 1234
#define       __BIG_ENDIAN    4321

#if defined  MIPS_EB || defined __MIPSEB__ || defined MIPSEB || defined _MIPSEB
# if defined  MIPS_EL || defined __MIPSEL__ || defined MIPSEL || defined _MIPSEL
#  error "Both BIG_ENDIAN and LITTLE_ENDIAN defined!"
# endif
# define __BYTE_ORDER __BIG_ENDIAN
#else
# if defined  MIPS_EL || defined __MIPSEL__ || defined MIPSEL || defined _MIPSEL
#  define __BYTE_ORDER __LITTLE_ENDIAN
# else
#  error "Cannot determine current byte order"
# endif
#endif


/* Define ALIASNAME as a strong alias for NAME.  */
# define strong_alias(name, aliasname) _strong_alias(name, aliasname)
# define _strong_alias(name, aliasname) \
  extern __typeof (name) aliasname __attribute__ ((alias (#name)));

