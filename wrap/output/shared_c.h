#ifndef GUARD_SHARED_C_H
#define GUARD_SHARED_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

struct calc;

struct calc
{
  union {
    char mem[2];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

void calc_delete(struct calc * __self);

int calc_sub(const struct calc * __self, int a_1, int a_2, int * a_3);

int calc_neg(const struct calc * __self, int a_1, int * a_2);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_SHARED_C_H