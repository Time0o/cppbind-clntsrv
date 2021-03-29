#ifndef GUARD_SHARED_C_H
#define GUARD_SHARED_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

typedef int result_type;

struct calc;

struct calc
{
  union {
    char mem[2];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

void calc_delete(struct calc * __self);

int calc_sub(const struct calc * __self, int a_1, int a_2, int * a_3);

int calc_neg(const struct calc * __self, int a_1, int * a_2);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_SHARED_C_H