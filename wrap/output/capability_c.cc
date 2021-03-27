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

struct l4_cap_l4_task l4_cap_l4_task_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  struct l4_cap_l4_task __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_task l4_cap_l4_task_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  struct l4_cap_l4_task __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_task l4_cap_l4_task_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  struct l4_cap_l4_task __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__ret, _idx);

  return __ret;
}

struct l4_cap_l4_task l4_cap_l4_task_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  struct l4_cap_l4_task __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__ret, __1);

  return __ret;
}

struct l4_cap_l4_task l4_cap_l4_task_move(const struct l4_cap_l4_task * __self, const struct l4_cap_l4_task * src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(src);

  struct l4_cap_l4_task __out;

  auto __ret = ___self->move(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__out, __ret);
  return __out;
}

struct l4_cap_l4_task l4_cap_l4_task_copy(const struct l4_cap_l4_task * __self, const struct l4_cap_l4_task * src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(src);

  struct l4_cap_l4_task __out;

  auto __ret = ___self->copy(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Task>>(&__out, __ret);
  return __out;
}

unsigned long l4_cap_l4_task_cap(const struct l4_cap_l4_task * __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_task_is_valid(const struct l4_cap_l4_task * __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_task_snd_base(const struct l4_cap_l4_task * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_task_invalidate(struct l4_cap_l4_task * __self)
{
  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap<L4::Task>>(__self);

  ___self->invalidate();
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  struct l4_cap_l4_kobject __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  struct l4_cap_l4_kobject __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  struct l4_cap_l4_kobject __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__ret, _idx);

  return __ret;
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  struct l4_cap_l4_kobject __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__ret, __1);

  return __ret;
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_move(const struct l4_cap_l4_kobject * __self, const struct l4_cap_l4_kobject * src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(src);

  struct l4_cap_l4_kobject __out;

  auto __ret = ___self->move(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__out, __ret);
  return __out;
}

struct l4_cap_l4_kobject l4_cap_l4_kobject_copy(const struct l4_cap_l4_kobject * __self, const struct l4_cap_l4_kobject * src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(src);

  struct l4_cap_l4_kobject __out;

  auto __ret = ___self->copy(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Kobject>>(&__out, __ret);
  return __out;
}

unsigned long l4_cap_l4_kobject_cap(const struct l4_cap_l4_kobject * __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_kobject_is_valid(const struct l4_cap_l4_kobject * __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_kobject_snd_base(const struct l4_cap_l4_kobject * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_kobject_invalidate(struct l4_cap_l4_kobject * __self)
{
  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap<L4::Kobject>>(__self);

  ___self->invalidate();
}

struct l4_cap_l4_meta l4_cap_l4_meta_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  struct l4_cap_l4_meta __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_meta l4_cap_l4_meta_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  struct l4_cap_l4_meta __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_l4_meta l4_cap_l4_meta_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  struct l4_cap_l4_meta __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__ret, _idx);

  return __ret;
}

struct l4_cap_l4_meta l4_cap_l4_meta_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  struct l4_cap_l4_meta __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__ret, __1);

  return __ret;
}

struct l4_cap_l4_meta l4_cap_l4_meta_move(const struct l4_cap_l4_meta * __self, const struct l4_cap_l4_meta * src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(src);

  struct l4_cap_l4_meta __out;

  auto __ret = ___self->move(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__out, __ret);
  return __out;
}

struct l4_cap_l4_meta l4_cap_l4_meta_copy(const struct l4_cap_l4_meta * __self, const struct l4_cap_l4_meta * src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(src);

  struct l4_cap_l4_meta __out;

  auto __ret = ___self->copy(*_src);

  cppbind::c::init_owning_struct<L4::Cap<L4::Meta>>(&__out, __ret);
  return __out;
}

unsigned long l4_cap_l4_meta_cap(const struct l4_cap_l4_meta * __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_l4_meta_is_valid(const struct l4_cap_l4_meta * __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_l4_meta_snd_base(const struct l4_cap_l4_meta * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

void l4_cap_l4_meta_invalidate(struct l4_cap_l4_meta * __self)
{
  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap<L4::Meta>>(__self);

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

  struct l4_cap_base __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap_base>(&__ret, *__1);

  return __ret;
}

struct l4_cap_base l4_cap_base_move(struct l4_cap_base * _1)
{
  using namespace L4;

  L4::Cap_base * __1;

  assert(_1->is_initialized);
  assert(!_1->is_const);
  __1 = cppbind::c::struct_cast<L4::Cap_base>(_1);

  struct l4_cap_base __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap_base>(&__ret, std::move(*__1));

  return __ret;
}

void l4_cap_base_delete(struct l4_cap_base * __self)
{
  using namespace L4;

  L4::Cap_base * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4::Cap_base>(__self);

  ___self->~Cap_base();
}

struct l4_cap_void l4_cap_void_new_1(const void * p)
{
  using namespace L4;

  const void * _p;

  _p = p;

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, _p);

  return __ret;
}

struct l4_cap_void l4_cap_void_new_2(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_void l4_cap_void_new_3(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_void l4_cap_void_new_4(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, _idx);

  return __ret;
}

struct l4_cap_void l4_cap_void_new_5(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, __1);

  return __ret;
}

struct l4_cap_void l4_cap_void_move_1(const struct l4_cap_void * __self, const struct l4_cap_void * src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<void>>(src);

  struct l4_cap_void __out;

  auto __ret = ___self->move(*_src);

  cppbind::c::init_owning_struct<L4::Cap<void>>(&__out, __ret);
  return __out;
}

struct l4_cap_void l4_cap_void_copy_1(const struct l4_cap_void * __self, const struct l4_cap_void * src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<void>>(src);

  struct l4_cap_void __out;

  auto __ret = ___self->copy(*_src);

  cppbind::c::init_owning_struct<L4::Cap<void>>(&__out, __ret);
  return __out;
}

struct l4_cap_void l4_cap_void_copy_2(const struct l4_cap_void * _1)
{
  using namespace L4;

  const L4::Cap<void> * __1;

  assert(_1->is_initialized);
  __1 = cppbind::c::struct_cast<const L4::Cap<void>>(_1);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, *__1);

  return __ret;
}

struct l4_cap_void l4_cap_void_move_2(struct l4_cap_void * _1)
{
  using namespace L4;

  L4::Cap<void> * __1;

  assert(_1->is_initialized);
  assert(!_1->is_const);
  __1 = cppbind::c::struct_cast<L4::Cap<void>>(_1);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, std::move(*__1));

  return __ret;
}

void l4_cap_void_delete(struct l4_cap_void * __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4::Cap<void>>(__self);

  ___self->~Cap<void>();
}

struct l4_cap_void l4_cap_void_new_void(const struct l4_cap_void * o)
{
  using namespace L4;

  const L4::Cap<void> * _o;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap<void>>(o);

  struct l4_cap_void __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<void>>(&__ret, *_o);

  return __ret;
}

unsigned long l4_cap_void_cap(const struct l4_cap_void * __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_void_is_valid(const struct l4_cap_void * __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_void_snd_base(const struct l4_cap_void * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

int l4_cap_void_op_equalequal(const struct l4_cap_void * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator==(*_o);

  return __ret;
}

int l4_cap_void_op_exclaimequal(const struct l4_cap_void * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator!=(*_o);

  return __ret;
}

void l4_cap_void_invalidate(struct l4_cap_void * __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap<void>>(__self);

  ___self->invalidate();
}

struct l4_cap_calc l4_cap_calc_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_calc l4_cap_calc_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, _cap);

  return __ret;
}

struct l4_cap_calc l4_cap_calc_new_3(unsigned long idx)
{
  using namespace L4;

  unsigned long _idx = L4_INVALID_CAP;

  do {
    _idx = idx;
  } while(false);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, _idx);

  return __ret;
}

struct l4_cap_calc l4_cap_calc_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, __1);

  return __ret;
}

struct l4_cap_calc l4_cap_calc_move_1(const struct l4_cap_calc * __self, const struct l4_cap_calc * src)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<Calc>>(src);

  struct l4_cap_calc __out;

  auto __ret = ___self->move(*_src);

  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__out, __ret);
  return __out;
}

struct l4_cap_calc l4_cap_calc_copy_1(const struct l4_cap_calc * __self, const struct l4_cap_calc * src)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  assert(src->is_initialized);
  _src = cppbind::c::struct_cast<const L4::Cap<Calc>>(src);

  struct l4_cap_calc __out;

  auto __ret = ___self->copy(*_src);

  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__out, __ret);
  return __out;
}

struct calc l4_cap_calc_access(const struct l4_cap_calc * __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  struct calc __out;

  auto __ret = ___self->operator->();

  cppbind::c::init_non_owning_struct(&__out, __ret);
  return __out;
}

struct l4_cap_calc l4_cap_calc_copy_2(const struct l4_cap_calc * _1)
{
  using namespace L4;

  const L4::Cap<Calc> * __1;

  assert(_1->is_initialized);
  __1 = cppbind::c::struct_cast<const L4::Cap<Calc>>(_1);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, *__1);

  return __ret;
}

struct l4_cap_calc l4_cap_calc_move_2(struct l4_cap_calc * _1)
{
  using namespace L4;

  L4::Cap<Calc> * __1;

  assert(_1->is_initialized);
  assert(!_1->is_const);
  __1 = cppbind::c::struct_cast<L4::Cap<Calc>>(_1);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, std::move(*__1));

  return __ret;
}

void l4_cap_calc_delete(struct l4_cap_calc * __self)
{
  using namespace L4;

  L4::Cap<Calc> * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4::Cap<Calc>>(__self);

  ___self->~Cap<Calc>();
}

struct l4_cap_calc l4_cap_calc_new_calc(const struct l4_cap_calc * o)
{
  using namespace L4;

  const L4::Cap<Calc> * _o;

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap<Calc>>(o);

  struct l4_cap_calc __out;

  auto __ret = __out;
  cppbind::c::init_owning_struct<L4::Cap<Calc>>(&__ret, *_o);

  return __ret;
}

unsigned long l4_cap_calc_cap(const struct l4_cap_calc * __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  auto __ret = ___self->cap();

  return __ret;
}

int l4_cap_calc_is_valid(const struct l4_cap_calc * __self)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  auto __ret = ___self->is_valid();

  return __ret;
}

unsigned long l4_cap_calc_snd_base(const struct l4_cap_calc * __self, unsigned int grant, unsigned long base)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  unsigned int _grant = 0;
  unsigned long _base = L4_INVALID_CAP;

  do {
    assert(__self->is_initialized);
    ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

    _grant = grant;

    _base = base;
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  return __ret;
}

int l4_cap_calc_op_equalequal(const struct l4_cap_calc * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator==(*_o);

  return __ret;
}

int l4_cap_calc_op_exclaimequal(const struct l4_cap_calc * __self, const struct l4_cap_base * o)
{
  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap_base * _o;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4::Cap<Calc>>(__self);

  assert(o->is_initialized);
  _o = cppbind::c::struct_cast<const L4::Cap_base>(o);

  auto __ret = ___self->operator!=(*_o);

  return __ret;
}

void l4_cap_calc_invalidate(struct l4_cap_calc * __self)
{
  using namespace L4;

  L4::Cap<Calc> * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4::Cap<Calc>>(__self);

  ___self->invalidate();
}

} // extern "C"