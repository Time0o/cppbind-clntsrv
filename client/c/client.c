#include <stdio.h>
#include <stdlib.h>

#include "capability_c.h"
#include "env_c.h"
#include "shared_c.h"

int
main(void)
{
  void *env = NULL;
  void *server_cap = NULL;
  void *server = NULL;

  env = l4_re_env_env();

  server_cap = l4_re_env_get_cap_calc_2(env, "calc_server");

  if (!l4_cap_calc_is_valid(server_cap))
    {
      printf("Could not get server capability!\n");
      goto error;
    }

  server = l4_cap_calc_access(server_cap);

  int val1 = 8;
  int val2 = 5;

  printf("Asking for %u - %d\n", val1, val2);
  if (calc_sub(server, val1, val2, &val1))
    {
      printf("Error talking to server\n");
      goto error;
    }
  printf("Result of substract call: %d\n", val1);

  printf("Asking for -%d\n", val1);
  if (calc_neg(server, val1, &val1))
    {
      printf("Error talking to server\n");
      return 1;
    }
  printf("Result of negate call: %d\n", val1);

  bind_delete(env);
  bind_delete(server_cap);
  bind_delete(server);

  return 0;

error:
  bind_delete(env);
  bind_delete(server_cap);
  bind_delete(server);

  return 1;
}
