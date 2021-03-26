#include <stdio.h>
#include <stdlib.h>

#include "capability_c.h"
#include "env_c.h"
#include "shared_c.h"

int
main(void)
{
  struct l4_re_env env;
  env.is_initialized = 0;

  struct l4_cap_calc server_cap;
  server_cap.is_initialized = 0;

  struct calc server;
  server.is_initialized = 0;

  l4_re_env_env(&env);

  l4_re_env_get_cap_calc_2(&env, "calc_server", &server_cap);

  if (!l4_cap_calc_is_valid(&server_cap))
    {
      printf("Could not get server capability!\n");
      goto error;
    }

  l4_cap_calc_access(&server_cap, &server);

  l4_int32_t val1 = 8;
  l4_int32_t val2 = 5;

  printf("Asking for %u - %d\n", val1, val2);
  if (calc_sub(&server, val1, val2, &val1))
    {
      printf("Error talking to server\n");
      goto error;
    }
  printf("Result of substract call: %d\n", val1);

  printf("Asking for -%d\n", val1);
  if (calc_neg(&server, val1, &val1))
    {
      printf("Error talking to server\n");
      return 1;
    }
  printf("Result of negate call: %d\n", val1);

  l4_re_env_delete(&env);
  l4_cap_calc_delete(&server_cap);
  calc_delete(&server);

  return EXIT_SUCCESS;

error:
  l4_re_env_delete(&env);
  l4_cap_calc_delete(&server_cap);
  calc_delete(&server);

  return EXIT_FAILURE;
}
