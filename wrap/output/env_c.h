#ifndef GUARD_ENV_C_H
#define GUARD_ENV_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

typedef unsigned long l4_cap_idx_t;

struct l4_cap_calc;
struct l4_cap_l4_task;
struct l4_re_env;

struct l4_re_env
{
  union {
    char mem[704];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

void l4_re_env_env(struct l4_re_env * __out);

void l4_re_env_task(const struct l4_re_env * __self, struct l4_cap_l4_task * __out);

unsigned long l4_re_env_first_free_cap_1(const struct l4_re_env * __self);

unsigned long l4_re_env_first_free_utcb_1(const struct l4_re_env * __self);

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, unsigned long c);

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, unsigned long u);

void l4_re_env_new(struct l4_re_env * __out);

void l4_re_env_delete(struct l4_re_env * __self);

void l4_re_env_get_cap_calc_1(const struct l4_re_env * __self, const char * name, unsigned int l, struct l4_cap_calc * __out);

void l4_re_env_get_cap_calc_2(const struct l4_re_env * __self, const char * name, struct l4_cap_calc * __out);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_ENV_C_H