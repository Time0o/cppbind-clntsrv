#include <stdio.h>
#include <stdlib.h>

#include "capability_c.h"
#include "env_c.h"
#include "shared_c.h"

int
main(void)
{
  struct l4_re_env env = l4_re_env_env();

  l4_cap_idx_t server_cap = l4_re_env_get_cap_calc_2(&env, "calc_server");

  if (!l4_cap_calc_is_valid(server_cap))
    {
      printf("Could not get server capability!\n");
      goto error1;
    }

  struct calc server = l4_cap_calc_access(server_cap);

  l4_int32_t val1 = 8;
  l4_int32_t val2 = 5;

  printf("Asking for %u - %d\n", val1, val2);
  if (calc_sub(&server, val1, val2, &val1))
    {
      printf("Error talking to server\n");
      goto error2;
    }
  printf("Result of substract call: %d\n", val1);

  printf("Asking for -%d\n", val1);
  if (calc_neg(&server, val1, &val1))
    {
      printf("Error talking to server\n");
      goto error2;
    }
  printf("Result of negate call: %d\n", val1);

  l4_re_env_delete(&env);
  l4_cap_calc_delete(server_cap);
  calc_delete(&server);

  return EXIT_SUCCESS;

error2:
  calc_delete(&server);
error1:
  l4_cap_calc_delete(server_cap);
  l4_re_env_delete(&env);

  return EXIT_FAILURE;
}
