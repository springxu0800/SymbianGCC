/* Test the `vmlaQs8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vmlaQs8 (void)
{
  int8x16_t out_int8x16_t;
  int8x16_t arg0_int8x16_t;
  int8x16_t arg1_int8x16_t;
  int8x16_t arg2_int8x16_t;

  out_int8x16_t = vmlaq_s8 (arg0_int8x16_t, arg1_int8x16_t, arg2_int8x16_t);
}

/* { dg-final { scan-assembler "vmla\.i8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
