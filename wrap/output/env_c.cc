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
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_l4_task
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_re_env l4_re_env_env(void)
{
  using namespace L4Re;

  struct l4_re_env __out;

  auto __ret = L4Re::Env::env();

  cppbind::c::init_non_owning_struct(&__out, __ret);
  return __out;
}

struct l4_cap_l4_task l4_re_env_task(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  struct l4_cap_l4_task __out;

  auto __ret = ___self->task();

  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__out, __ret);
  return __out;
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

  struct l4_re_env __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4Re::Env>(&__ret);

  return __ret;
}

void l4_re_env_delete(struct l4_re_env * __self)
{
  using namespace L4Re;

  L4Re::Env * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  ___self->~Env();
}

struct l4_cap_calc l4_re_env_get_cap_calc_1(const struct l4_re_env * __self, const char * name, unsigned int l)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;
  unsigned int _l;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  _l = l;

  struct l4_cap_calc __out;

  auto __ret = ___self->get_cap<Calc>(_name, _l);

  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__out, __ret);
  return __out;
}

struct l4_cap_calc l4_re_env_get_cap_calc_2(const struct l4_re_env * __self, const char * name)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  struct l4_cap_calc __out;

  auto __ret = ___self->get_cap<Calc>(_name);

  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__out, __ret);
  return __out;
}

} // extern "C"