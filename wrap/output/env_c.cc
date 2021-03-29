#include <cassert>
#include <cerrno>
#include <exception>
#include <utility>

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/env"
#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/c/c_util_cc.h"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/clntsrv/wrap/output/env_c.h"

struct l4_cap_calc
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_l4_task
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_re_env l4_re_env_env(void)
{
  using namespace L4Re;

  auto __ret = L4Re::Env::env();

  struct l4_re_env __out;
  cppbind::c::make_non_owning_struct(&__out, __ret);
  return __out;
}

l4_cap_idx_t l4_re_env_task(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __ret = ___self->task();

  return __ret.cap();
}

unsigned long l4_re_env_first_free_cap_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __ret = ___self->first_free_cap();

  return __ret;
}

unsigned long l4_re_env_first_free_utcb_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __ret = ___self->first_free_utcb();

  return __ret;
}

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, unsigned long c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  unsigned long _c;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = c;

  ___self->first_free_cap(_c);
}

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, unsigned long u)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  unsigned long _u;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _u = u;

  ___self->first_free_utcb(_u);
}

struct l4_re_env l4_re_env_new(void)
{
  using namespace L4Re;

  char __tmp[88];

  auto __ret = new (__tmp) L4Re::Env();

  static_cast<void>(__ret);

  struct l4_re_env __out;
  cppbind::c::make_owning_struct_mem<L4Re::Env>(&__out, __tmp);
  return __out;
}

void l4_re_env_delete(struct l4_re_env * __self)
{
  using namespace L4Re;

  L4Re::Env * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  ___self->~Env();
}

l4_cap_idx_t l4_re_env_get_cap_calc_1(const struct l4_re_env * __self, const char * name, unsigned int l)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;
  unsigned int _l;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  _l = l;

  auto __ret = ___self->get_cap<Calc>(_name, _l);

  return __ret.cap();
}

l4_cap_idx_t l4_re_env_get_cap_calc_2(const struct l4_re_env * __self, const char * name)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  auto __ret = ___self->get_cap<Calc>(_name);

  return __ret.cap();
}

} // extern "C"