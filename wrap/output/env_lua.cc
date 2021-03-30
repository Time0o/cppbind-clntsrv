#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/env"
#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4Re::Env> _ZTSN4L4Re3EnvE;
  type_instance<char> _ZTSc;
}

#include "cppbind/lua/lua_util.h"

namespace
{

namespace __L4ReEnv
{

int l4_re_env_env(lua_State *L);
int l4_re_env_task(lua_State *L);
int l4_re_env_first_free_cap_1(lua_State *L);
int l4_re_env_first_free_utcb_1(lua_State *L);
int l4_re_env_first_free_cap_2(lua_State *L);
int l4_re_env_first_free_utcb_2(lua_State *L);
int l4_re_env_new(lua_State *L);
int l4_re_env_get_cap_calc_1(lua_State *L);
int l4_re_env_get_cap_calc_2(lua_State *L);

} // namespace __L4ReEnv

namespace __L4ReEnv
{

int l4_re_env_env(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __ret = L4Re::Env::env();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re3EnvE");;
  return 1;
}

int l4_re_env_task(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->task();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;
  return 1;
}

int l4_re_env_first_free_cap_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->first_free_cap();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_re_env_first_free_utcb_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __ret = ___self->first_free_utcb();

  cppbind::lua::pushintegral(L, __ret);
  return 1;
}

int l4_re_env_first_free_cap_2(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  L4Re::Env * ___self;
  l4_cap_idx_t _c;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _c = cppbind::lua::tointegral<l4_cap_idx_t>(L, 2);

  ___self->first_free_cap(_c);

  return 0;
}

int l4_re_env_first_free_utcb_2(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  L4Re::Env * ___self;
  l4_addr_t _u;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _u = cppbind::lua::tointegral<l4_addr_t>(L, 2);

  ___self->first_free_utcb(_u);

  return 0;
}

int l4_re_env_new(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __ret = new L4Re::Env();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__ret, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re3EnvE");;
  return 1;
}

int l4_re_env_get_cap_calc_1(lua_State *L)
{
  if (lua_gettop(L) != 3)
    return luaL_error(L, "function expects 3 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;
  unsigned int _l;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TSTRING);
  _name = lua_tostring(L, 2);

  luaL_checktype(L, 3, LUA_TNUMBER);
  _l = cppbind::lua::tointegral<unsigned int>(L, 3);

  auto __ret = ___self->get_cap<Calc>(_name, _l);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<Calc>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

int l4_re_env_get_cap_calc_2(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TSTRING);
  _name = lua_tostring(L, 2);

  auto __ret = ___self->get_cap<Calc>(_name);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<Calc>(__ret), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI4CalcEE");;
  return 1;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 2);

  // no constants

  static luaL_Reg const __functions[] = {
    {"env", l4_re_env_env},
    {"new", l4_re_env_new},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, __functions, 0);

  // no records
}

} // namespace __L4ReEnv

void __register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  // no constants

  // no functions

  __L4ReEnv::__register(L);
  lua_setfield(L, -2, "L4ReEnv");
}

void __createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re3EnvE",
    {
      {"env", __L4ReEnv::l4_re_env_env},
      {"task", __L4ReEnv::l4_re_env_task},
      {"first_free_cap_1", __L4ReEnv::l4_re_env_first_free_cap_1},
      {"first_free_utcb_1", __L4ReEnv::l4_re_env_first_free_utcb_1},
      {"first_free_cap_2", __L4ReEnv::l4_re_env_first_free_cap_2},
      {"first_free_utcb_2", __L4ReEnv::l4_re_env_first_free_utcb_2},
      {"get_cap_calc_1", __L4ReEnv::l4_re_env_get_cap_calc_1},
      {"get_cap_calc_2", __L4ReEnv::l4_re_env_get_cap_calc_2},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_env(lua_State *L)
{
  __register(L);
  __createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace