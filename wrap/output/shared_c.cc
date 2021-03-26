#include <cassert>
#include <cerrno>
#include <exception>
#include <utility>

#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/c/c_util_cc.h"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/clntsrv/wrap/output/shared_c.h"

void calc_delete(struct calc * __self)
{
  Calc * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<Calc>(__self);

  ___self->~Calc();
}

int calc_sub(const struct calc * __self, int a_1, int a_2, int * a_3)
{
  using namespace L4::Ipc::Msg;
  using namespace L4::Ipc;
  using namespace L4;

  const Calc * ___self;
  int _a_1;
  int _a_2;
  int * _a_3;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const Calc>(__self);

  _a_1 = a_1;

  _a_2 = a_2;

  _a_3 = a_3;

  auto __ret = ___self->sub(_a_1, _a_2, _a_3);

  return __ret;
}

int calc_neg(const struct calc * __self, int a_1, int * a_2)
{
  using namespace L4::Ipc::Msg;
  using namespace L4::Ipc;
  using namespace L4;

  const Calc * ___self;
  int _a_1;
  int * _a_2;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const Calc>(__self);

  _a_1 = a_1;

  _a_2 = a_2;

  auto __ret = ___self->neg(_a_1, _a_2);

  return __ret;
}

} // extern "C"