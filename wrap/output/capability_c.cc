#include <cassert>
#include <cerrno>
#include <exception>
#include <utility>

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/cxx/capability.h"
#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/c/c_util_cc.h"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/clntsrv/wrap/output/capability_c.h"

struct calc
{
  union {
    char mem[16];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

l4_cap_idx_t l4_cap_l4_task_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Task>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_task_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Task>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_task_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Task>(_idx);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_task_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Task>(__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_task_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Task>(src);
  _src = &__src;

  auto __ret = ___self->move(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_l4_task_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Task>(src);
  _src = &__src;

  auto __ret = ___self->copy(*_src);

  return __ret.cap();
}

unsigned long l4_cap_l4_task_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_task_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_task_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    auto ____self = L4::Cap<L4::Task>(__self);
    ___self = &____self;

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_task_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_l4_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Kobject>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Kobject>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_kobject_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Kobject>(_idx);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Kobject>(__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_kobject_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Kobject>(src);
  _src = &__src;

  auto __ret = ___self->move(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_l4_kobject_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Kobject>(src);
  _src = &__src;

  auto __ret = ___self->copy(*_src);

  return __ret.cap();
}

unsigned long l4_cap_l4_kobject_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_kobject_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    auto ____self = L4::Cap<L4::Kobject>(__self);
    ___self = &____self;

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_kobject_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_l4_meta_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Meta>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_meta_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Meta>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_meta_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Meta>(_idx);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_meta_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<L4::Meta>(__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_l4_meta_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Meta>(src);
  _src = &__src;

  auto __ret = ___self->move(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_l4_meta_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Meta>(src);
  _src = &__src;

  auto __ret = ___self->copy(*_src);

  return __ret.cap();
}

unsigned long l4_cap_l4_meta_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_meta_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_meta_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    auto ____self = L4::Cap<L4::Meta>(__self);
    ___self = &____self;

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_meta_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  ___self->invalidate();
}

unsigned long l4_cap_base_cap(const struct l4_cap_base * __self)
{
  using namespace L4;

  const L4::Cap_base * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap_base>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_base_is_valid(const struct l4_cap_base * __self)
{
  using namespace L4;

  const L4::Cap_base * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap_base>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_base_snd_base(const struct l4_cap_base * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap_base * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap_base>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

int l4_cap_base_op_equalequal(const struct l4_cap_base * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap_base * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap_base>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator==(*_o);

  return __ret;
}

int l4_cap_base_op_exclaimequal(const struct l4_cap_base * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap_base * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap_base>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator!=(*_o);

  return __ret;
}

void l4_cap_base_invalidate(struct l4_cap_base * __self)
{
  using namespace L4;

  L4::Cap_base * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap_base>(__self);

  ___self->invalidate();
}

struct l4_cap_base l4_cap_base_copy(const struct l4_cap_base * _1)
{
  using namespace L4;

  const L4::Cap_base * __1;

  assert(_1->is_initialized);
  __1 = cppbind::c::struct_cast<const L4::Cap_base>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap_base(*__1);

  static_cast<void>(__ret);

  struct l4_cap_base __out;
  cppbind::c::make_owning_struct_mem<L4::Cap_base>(&__out, __tmp);
  return __out;
}

struct l4_cap_base l4_cap_base_move(struct l4_cap_base * _1)
{
  using namespace L4;

  L4::Cap_base * __1;

  assert(_1->is_initialized);
  assert(!_1->is_const);
  __1 = cppbind::c::struct_cast<L4::Cap_base>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap_base(std::move(*__1));

  static_cast<void>(__ret);

  struct l4_cap_base __out;
  cppbind::c::make_owning_struct_mem<L4::Cap_base>(&__out, __tmp);
  return __out;
}

void l4_cap_base_delete(struct l4_cap_base * __self)
{
  using namespace L4;

  L4::Cap_base * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4::Cap_base>(__self);

  ___self->~Cap_base();
}

l4_cap_idx_t l4_cap_void_new_1(const void * p)
{
  using namespace L4;

  const void * _p;

  _p = p;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(_p);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_new_2(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_new_3(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_new_4(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(_idx);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_new_5(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __src = L4::Cap<void>(src);
  _src = &__src;

  auto __ret = ___self->move(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_void_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __src = L4::Cap<void>(src);
  _src = &__src;

  auto __ret = ___self->copy(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_void_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<void> * __1;

  auto ___1 = L4::Cap<void>(_1);
  __1 = &___1;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(*__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_void_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<void> * __1;

  auto ___1 = L4::Cap<void>(_1);
  __1 = &___1;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(std::move(*__1));

  return __ret->cap();
}

void l4_cap_void_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  ___self->~Cap<void>();
}

l4_cap_idx_t l4_cap_void_new_void(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<void> * _o;

  auto __o = L4::Cap<void>(o);
  _o = &__o;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<void>(*_o);

  return __ret->cap();
}

unsigned long l4_cap_void_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_void_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_void_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    auto ____self = L4::Cap<void>(__self);
    ___self = &____self;

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

int l4_cap_void_op_equalequal(l4_cap_idx_t __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator==(*_o);

  return __ret;
}

int l4_cap_void_op_exclaimequal(l4_cap_idx_t __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator!=(*_o);

  return __ret;
}

void l4_cap_void_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_calc_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_calc_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(_cap);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_calc_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(_idx);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_calc_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_calc_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  auto __src = L4::Cap<Calc>(src);
  _src = &__src;

  auto __ret = ___self->move(*_src);

  return __ret.cap();
}

l4_cap_idx_t l4_cap_calc_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  auto __src = L4::Cap<Calc>(src);
  _src = &__src;

  auto __ret = ___self->copy(*_src);

  return __ret.cap();
}

struct calc l4_cap_calc_access(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  auto __ret = ___self->operator->();

  struct calc __out;
  cppbind::c::make_non_owning_struct(&__out, __ret);
  return __out;
}

l4_cap_idx_t l4_cap_calc_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<Calc> * __1;

  auto ___1 = L4::Cap<Calc>(_1);
  __1 = &___1;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(*__1);

  return __ret->cap();
}

l4_cap_idx_t l4_cap_calc_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<Calc> * __1;

  auto ___1 = L4::Cap<Calc>(_1);
  __1 = &___1;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(std::move(*__1));

  return __ret->cap();
}

void l4_cap_calc_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<Calc> * ___self;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  ___self->~Cap<Calc>();
}

l4_cap_idx_t l4_cap_calc_new_calc(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<Calc> * _o;

  auto __o = L4::Cap<Calc>(o);
  _o = &__o;

  char __tmp[64];

  auto __ret = new (__tmp) L4::Cap<Calc>(*_o);

  return __ret->cap();
}

unsigned long l4_cap_calc_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_calc_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_calc_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    auto ____self = L4::Cap<Calc>(__self);
    ___self = &____self;

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

int l4_cap_calc_op_equalequal(l4_cap_idx_t __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap_base * _o;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator==(*_o);

  return __ret;
}

int l4_cap_calc_op_exclaimequal(l4_cap_idx_t __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap_base * _o;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator!=(*_o);

  return __ret;
}

void l4_cap_calc_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<Calc> * ___self;

  auto ____self = L4::Cap<Calc>(__self);
  ___self = &____self;

  ___self->invalidate();
}

} // extern "C"