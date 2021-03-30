#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/cxx/capability.h"
#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4::Cap<L4::Task>> _ZTSN2L43CapINS_4TaskEEE;
  type_instance<L4::Cap<L4::Kobject>> _ZTSN2L43CapINS_7KobjectEEE;
  type_instance<L4::Cap<L4::Meta>> _ZTSN2L43CapINS_4MetaEEE;
  type_instance<L4::Cap<void>> _ZTSN2L43CapIvEE;
  type_instance<L4::Cap<Calc>> _ZTSN2L43CapI4CalcEE;
}

#include "cppbind/lua/lua_util.h"

namespace
{

namespace __L4CapL4Task
{

int l4_cap_l4_task_new_1(lua_State *L);
int l4_cap_l4_task_new_2(lua_State *L);
int l4_cap_l4_task_new_3(lua_State *L);
int l4_cap_l4_task_new_4(lua_State *L);
int l4_cap_l4_task_move(lua_State *L);
int l4_cap_l4_task_copy(lua_State *L);
int l4_cap_l4_task_cap(lua_State *L);
int l4_cap_l4_task_is_valid(lua_State *L);
int l4_cap_l4_task_snd_base(lua_State *L);
int l4_cap_l4_task_invalidate(lua_State *L);

} // namespace __L4CapL4Task

namespace __L4CapL4Kobject
{

int l4_cap_l4_kobject_new_1(lua_State *L);
int l4_cap_l4_kobject_new_2(lua_State *L);
int l4_cap_l4_kobject_new_3(lua_State *L);
int l4_cap_l4_kobject_new_4(lua_State *L);
int l4_cap_l4_kobject_move(lua_State *L);
int l4_cap_l4_kobject_copy(lua_State *L);
int l4_cap_l4_kobject_cap(lua_State *L);
int l4_cap_l4_kobject_is_valid(lua_State *L);
int l4_cap_l4_kobject_snd_base(lua_State *L);
int l4_cap_l4_kobject_invalidate(lua_State *L);

} // namespace __L4CapL4Kobject

namespace __L4CapL4Meta
{

int l4_cap_l4_meta_new_1(lua_State *L);
int l4_cap_l4_meta_new_2(lua_State *L);
int l4_cap_l4_meta_new_3(lua_State *L);
int l4_cap_l4_meta_new_4(lua_State *L);
int l4_cap_l4_meta_move(lua_State *L);
int l4_cap_l4_meta_copy(lua_State *L);
int l4_cap_l4_meta_cap(lua_State *L);
int l4_cap_l4_meta_is_valid(lua_State *L);
int l4_cap_l4_meta_snd_base(lua_State *L);
int l4_cap_l4_meta_invalidate(lua_State *L);

} // namespace __L4CapL4Meta

namespace __L4CapVoid
{

int l4_cap_void_new_1(lua_State *L);
int l4_cap_void_new_2(lua_State *L);
int l4_cap_void_new_3(lua_State *L);
int l4_cap_void_new_4(lua_State *L);
int l4_cap_void_new_5(lua_State *L);
int l4_cap_void_move_1(lua_State *L);
int l4_cap_void_copy_1(lua_State *L);
int l4_cap_void_copy_2(lua_State *L);
int l4_cap_void_move_2(lua_State *L);
int l4_cap_void_new_void(lua_State *L);
int l4_cap_void_cap(lua_State *L);
int l4_cap_void_is_valid(lua_State *L);
int l4_cap_void_snd_base(lua_State *L);
int l4_cap_void_invalidate(lua_State *L);

} // namespace __L4CapVoid

namespace __L4CapCalc
{

int l4_cap_calc_new_1(lua_State *L);
int l4_cap_calc_new_2(lua_State *L);
int l4_cap_calc_new_3(lua_State *L);
int l4_cap_calc_new_4(lua_State *L);
int l4_cap_calc_move_1(lua_State *L);
int l4_cap_calc_copy_1(lua_State *L);
int l4_cap_calc_access(lua_State *L);
int l4_cap_calc_copy_2(lua_State *L);
int l4_cap_calc_move_2(lua_State *L);
int l4_cap_calc_new_calc(lua_State *L);
int l4_cap_calc_cap(lua_State *L);
int l4_cap_calc_is_valid(lua_State *L);
int l4_cap_calc_snd_base(lua_State *L);
int l4_cap_calc_invalidate(lua_State *L);

} // namespace __L4CapCalc

namespace __L4CapL4Task
{

int l4_cap_l4_task_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __ret = new L4::Cap<L4::Task>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Task>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  do {
    if (lua_gettop(L) < 1) break;
    luaL_checktype(L, 1, LUA_TNUMBER);
    _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);
  } while(false);

  auto __ret = new L4::Cap<L4::Task>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Task>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_cap_l4_task_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_task_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->is_valid();

  lua_pushboolean(L, __ret);
  return 1;
}

int l4_cap_l4_task_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  do {
    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

    if (lua_gettop(L) < 2) break;
    luaL_checktype(L, 2, LUA_TNUMBER);
    _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

    if (lua_gettop(L) < 3) break;
    luaL_checktype(L, 3, LUA_TNUMBER);
    _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_task_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 4);

  // no constants

  static luaL_Reg const __functions[] = {
    {"new_1", l4_cap_l4_task_new_1},
    {"new_2", l4_cap_l4_task_new_2},
    {"new_3", l4_cap_l4_task_new_3},
    {"new_4", l4_cap_l4_task_new_4},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4CapL4Task

namespace __L4CapL4Kobject
{

int l4_cap_l4_kobject_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __ret = new L4::Cap<L4::Kobject>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Kobject>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  do {
    if (lua_gettop(L) < 1) break;
    luaL_checktype(L, 1, LUA_TNUMBER);
    _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);
  } while(false);

  auto __ret = new L4::Cap<L4::Kobject>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Kobject>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;
  return 1;
}

int l4_cap_l4_kobject_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_kobject_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->is_valid();

  lua_pushboolean(L, __ret);
  return 1;
}

int l4_cap_l4_kobject_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  do {
    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

    if (lua_gettop(L) < 2) break;
    luaL_checktype(L, 2, LUA_TNUMBER);
    _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

    if (lua_gettop(L) < 3) break;
    luaL_checktype(L, 3, LUA_TNUMBER);
    _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_kobject_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 4);

  // no constants

  static luaL_Reg const __functions[] = {
    {"new_1", l4_cap_l4_kobject_new_1},
    {"new_2", l4_cap_l4_kobject_new_2},
    {"new_3", l4_cap_l4_kobject_new_3},
    {"new_4", l4_cap_l4_kobject_new_4},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4CapL4Kobject

namespace __L4CapL4Meta
{

int l4_cap_l4_meta_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __ret = new L4::Cap<L4::Meta>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Meta>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  do {
    if (lua_gettop(L) < 1) break;
    luaL_checktype(L, 1, LUA_TNUMBER);
    _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);
  } while(false);

  auto __ret = new L4::Cap<L4::Meta>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<L4::Meta>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;
  return 1;
}

int l4_cap_l4_meta_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_meta_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->is_valid();

  lua_pushboolean(L, __ret);
  return 1;
}

int l4_cap_l4_meta_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  do {
    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

    if (lua_gettop(L) < 2) break;
    luaL_checktype(L, 2, LUA_TNUMBER);
    _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

    if (lua_gettop(L) < 3) break;
    luaL_checktype(L, 3, LUA_TNUMBER);
    _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_l4_meta_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 4);

  // no constants

  static luaL_Reg const __functions[] = {
    {"new_1", l4_cap_l4_meta_new_1},
    {"new_2", l4_cap_l4_meta_new_2},
    {"new_3", l4_cap_l4_meta_new_3},
    {"new_4", l4_cap_l4_meta_new_4},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4CapL4Meta

namespace __L4CapVoid
{

int l4_cap_void_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const void * _p;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _p = cppbind::type_info::typed_pointer_cast<const void>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<void>(_p);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __ret = new L4::Cap<void>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_new_3(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<void>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_new_4(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  do {
    if (lua_gettop(L) < 1) break;
    luaL_checktype(L, 1, LUA_TNUMBER);
    _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);
  } while(false);

  auto __ret = new L4::Cap<void>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_new_5(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<void>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<void>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<void>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<void>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<void> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<void>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_new_void(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<void>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;
  return 1;
}

int l4_cap_void_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_void_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->is_valid();

  lua_pushboolean(L, __ret);
  return 1;
}

int l4_cap_void_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  do {
    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

    if (lua_gettop(L) < 2) break;
    luaL_checktype(L, 2, LUA_TNUMBER);
    _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

    if (lua_gettop(L) < 3) break;
    luaL_checktype(L, 3, LUA_TNUMBER);
    _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_void_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 8);

  // no constants

  static luaL_Reg const __functions[] = {
    {"new_1", l4_cap_void_new_1},
    {"new_2", l4_cap_void_new_2},
    {"new_3", l4_cap_void_new_3},
    {"new_4", l4_cap_void_new_4},
    {"new_5", l4_cap_void_new_5},
    {"copy_2", l4_cap_void_copy_2},
    {"move_2", l4_cap_void_move_2},
    {"new_void", l4_cap_void_new_void},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4CapVoid

namespace __L4CapCalc
{

int l4_cap_calc_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __ret = new L4::Cap<Calc>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<Calc>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  do {
    if (lua_gettop(L) < 1) break;
    luaL_checktype(L, 1, LUA_TNUMBER);
    _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);
  } while(false);

  auto __ret = new L4::Cap<Calc>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __ret = new L4::Cap<Calc>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<Calc>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;
  const L4::Cap<Calc> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __ret = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<Calc>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->operator->();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTS4Calc");;
  return 1;
}

int l4_cap_calc_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Calc> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<Calc>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<Calc> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<Calc>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_new_calc(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Calc> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = new L4::Cap<Calc>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_cap_calc_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_calc_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->is_valid();

  lua_pushboolean(L, __ret);
  return 1;
}

int l4_cap_calc_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<Calc> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  do {
    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

    if (lua_gettop(L) < 2) break;
    luaL_checktype(L, 2, LUA_TNUMBER);
    _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

    if (lua_gettop(L) < 3) break;
    luaL_checktype(L, 3, LUA_TNUMBER);
    _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);
  } while(false);

  auto __ret = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_cap_calc_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<Calc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<Calc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 7);

  // no constants

  static luaL_Reg const __functions[] = {
    {"new_1", l4_cap_calc_new_1},
    {"new_2", l4_cap_calc_new_2},
    {"new_3", l4_cap_calc_new_3},
    {"new_4", l4_cap_calc_new_4},
    {"copy_2", l4_cap_calc_copy_2},
    {"move_2", l4_cap_calc_move_2},
    {"new_calc", l4_cap_calc_new_calc},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4CapCalc

void __register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  lua_pushstring(L, "L4_CAP_BASE_NO_INIT");
  cppbind_lua_pushintegral_constexpr(L, static_cast<unsigned int>(L4::Cap_base::No_init));
  lua_settable(L, -3);

  lua_pushstring(L, "L4_CAP_BASE_INVALID");
  cppbind_lua_pushintegral_constexpr(L, static_cast<unsigned long>(L4::Cap_base::Invalid));
  lua_settable(L, -3);

  // no functions

  __L4CapL4Task::__register(L);
  lua_setfield(L, -2, "L4CapL4Task");

  __L4CapL4Kobject::__register(L);
  lua_setfield(L, -2, "L4CapL4Kobject");

  __L4CapL4Meta::__register(L);
  lua_setfield(L, -2, "L4CapL4Meta");

  __L4CapVoid::__register(L);
  lua_setfield(L, -2, "L4CapVoid");

  __L4CapCalc::__register(L);
  lua_setfield(L, -2, "L4CapCalc");
}

void __createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE",
    {
      {"move", __L4CapL4Task::l4_cap_l4_task_move},
      {"copy", __L4CapL4Task::l4_cap_l4_task_copy},
      {"cap", __L4CapL4Task::l4_cap_l4_task_cap},
      {"is_valid", __L4CapL4Task::l4_cap_l4_task_is_valid},
      {"snd_base", __L4CapL4Task::l4_cap_l4_task_snd_base},
      {"invalidate", __L4CapL4Task::l4_cap_l4_task_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE",
    {
      {"move", __L4CapL4Kobject::l4_cap_l4_kobject_move},
      {"copy", __L4CapL4Kobject::l4_cap_l4_kobject_copy},
      {"cap", __L4CapL4Kobject::l4_cap_l4_kobject_cap},
      {"is_valid", __L4CapL4Kobject::l4_cap_l4_kobject_is_valid},
      {"snd_base", __L4CapL4Kobject::l4_cap_l4_kobject_snd_base},
      {"invalidate", __L4CapL4Kobject::l4_cap_l4_kobject_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE",
    {
      {"move", __L4CapL4Meta::l4_cap_l4_meta_move},
      {"copy", __L4CapL4Meta::l4_cap_l4_meta_copy},
      {"cap", __L4CapL4Meta::l4_cap_l4_meta_cap},
      {"is_valid", __L4CapL4Meta::l4_cap_l4_meta_is_valid},
      {"snd_base", __L4CapL4Meta::l4_cap_l4_meta_snd_base},
      {"invalidate", __L4CapL4Meta::l4_cap_l4_meta_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIvEE",
    {
      {"move_1", __L4CapVoid::l4_cap_void_move_1},
      {"copy_1", __L4CapVoid::l4_cap_void_copy_1},
      {"cap", __L4CapVoid::l4_cap_void_cap},
      {"is_valid", __L4CapVoid::l4_cap_void_is_valid},
      {"snd_base", __L4CapVoid::l4_cap_void_snd_base},
      {"invalidate", __L4CapVoid::l4_cap_void_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE",
    {
      {"move_1", __L4CapCalc::l4_cap_calc_move_1},
      {"copy_1", __L4CapCalc::l4_cap_calc_copy_1},
      {"access", __L4CapCalc::l4_cap_calc_access},
      {"cap", __L4CapCalc::l4_cap_calc_cap},
      {"is_valid", __L4CapCalc::l4_cap_calc_is_valid},
      {"snd_base", __L4CapCalc::l4_cap_calc_snd_base},
      {"invalidate", __L4CapCalc::l4_cap_calc_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_capability(lua_State *L)
{
  __register(L);
  __createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace