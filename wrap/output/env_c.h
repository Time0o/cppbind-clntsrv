#ifndef GUARD_ENV_C_H
#define GUARD_ENV_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

typedef unsigned long l4_addr_t;
typedef unsigned long l4_cap_idx_t;

struct l4_re_env;

struct l4_re_env
{
  union {
    char mem[88];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

struct l4_re_env l4_re_env_env(void);

l4_cap_idx_t l4_re_env_task(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_first_free_cap_1(const struct l4_re_env * __self);

l4_addr_t l4_re_env_first_free_utcb_1(const struct l4_re_env * __self);

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, l4_addr_t u);

struct l4_re_env l4_re_env_new(void);

void l4_re_env_delete(struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_get_cap_calc_1(const struct l4_re_env * __self, const char * name, unsigned int l);

l4_cap_idx_t l4_re_env_get_cap_calc_2(const struct l4_re_env * __self, const char * name);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_ENV_C_H