#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/l4re/l4/pkg/clntsrv/shared/shared.h"

#include "cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<Calc> _ZTS4Calc;
  type_instance<int> _ZTSi;
}

#include "cppbind/lua/lua_util.h"

namespace
{

namespace __Calc
{

int calc_sub(lua_State *L);
int calc_neg(lua_State *L);

} // namespace __Calc

namespace __Calc
{

int calc_sub(lua_State *L)
{
  if (lua_gettop(L) != 4)
    return luaL_error(L, "function expects 4 arguments");

  using namespace L4::Ipc::Msg;
  using namespace L4::Ipc;
  using namespace L4;

  const Calc * ___self;
  int _a_1;
  int _a_2;
  int * _a_3;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const Calc>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _a_1 = cppbind::lua::tointegral<int>(L, 2);

  luaL_checktype(L, 3, LUA_TNUMBER);
  _a_2 = cppbind::lua::tointegral<int>(L, 3);

  int __a_3;
  if (lua_isuserdata(L, 4)) {
    _a_3 = cppbind::type_info::typed_pointer_cast<int>(*static_cast<void **>(lua_touserdata(L, 4)));
  } else {
    luaL_checktype(L, 4, LUA_TNUMBER);
    __a_3 = cppbind::lua::tointegral<int>(L, 4);
    _a_3 = &__a_3;
  }

  auto __ret = ___self->sub(_a_1, _a_2, _a_3);

  cppbind::lua::pushintegral(L, __ret);
  cppbind::lua::pushintegral(L, *_a_3);
  return 2;
}

int calc_neg(lua_State *L)
{
  if (lua_gettop(L) != 3)
    return luaL_error(L, "function expects 3 arguments");

  using namespace L4::Ipc::Msg;
  using namespace L4::Ipc;
  using namespace L4;

  const Calc * ___self;
  int _a_1;
  int * _a_2;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const Calc>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _a_1 = cppbind::lua::tointegral<int>(L, 2);

  int __a_2;
  if (lua_isuserdata(L, 3)) {
    _a_2 = cppbind::type_info::typed_pointer_cast<int>(*static_cast<void **>(lua_touserdata(L, 3)));
  } else {
    luaL_checktype(L, 3, LUA_TNUMBER);
    __a_2 = cppbind::lua::tointegral<int>(L, 3);
    _a_2 = &__a_2;
  }

  auto __ret = ___self->neg(_a_1, _a_2);

  cppbind::lua::pushintegral(L, __ret);
  cppbind::lua::pushintegral(L, *_a_2);
  return 2;
}

void __register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  // no constants

  // no functions

  // no records
}

} // namespace __Calc

void __register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  // no constants

  // no functions

  __Calc::__register(L);
  lua_setfield(L, -2, "Calc");
}

void __createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTS4Calc",
    {
      {"sub", __Calc::calc_sub},
      {"neg", __Calc::calc_neg}
    });
}

extern "C"
{

LUALIB_API int luaopen_shared(lua_State *L)
{
  __register(L);
  __createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace