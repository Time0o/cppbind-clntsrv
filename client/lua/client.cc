#include <cstdio>

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

extern "C"
{
  int luaopen_shared(lua_State *L);
  int luaopen_capability(lua_State *L);
  int luaopen_env(lua_State *L);
}

int
main(int argc, char **argv)
{
  if (argc != 2) {
    std::fprintf(stderr, "usage: %s LUA_SCRIPT\n", argv[0]);
    return 1;
  }

  lua_State *L = luaL_newstate();

  luaL_openlibs(L);

  luaopen_shared(L);
  lua_setglobal(L, "shared");

  luaopen_capability(L);
  lua_setglobal(L, "capability");

  luaopen_env(L);
  lua_setglobal(L, "env");

  if (luaL_loadfile(L, argv[1]) != LUA_OK) {
    std::fprintf(stderr, "failed to load Lua script '%s'\n", argv[1]);
    return 1;
  }

  std::printf("loaded client\n");

  if (lua_pcall(L, 0, 0, 0) != LUA_OK) {
    std::fprintf(stderr, "failed to run Lua script '%s': %s\n", argv[1], lua_tostring(L, -1));
    return 1;
  }

  std::printf("ran client\n");

  return 0;
}
