#include <stdlib.h>

#include "../libinjection.h"
#include "../libinjection_xss.h"
#include "../libinjection_sqli.h"

int LLVMFuzzerTestOneInput(const u_int8_t *data, size_t size);

int LLVMFuzzerTestOneInput(const u_int8_t *data, size_t size) {
  char *query;
  char fingerprint[8];

  /* Libinjection wants null-terminated string */

  query = malloc(size + 1);
  memcpy(query, data, size);
  query[size] = '\0';

  libinjection_sqli(query, strlen(query), fingerprint);

  libinjection_xss(query, strlen(query));

  free(query);

  return 0;
}
