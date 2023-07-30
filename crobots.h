#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

struct crobots;
typedef struct crobots crobots_t;

crobots_t *robots_create();
void robots_destroy(crobots_t *r);

// Do robots check for 'url' when there is only one user agent. 'url' must be
// %-encoded according to RFC3986.
bool robots_one_agent_allowed_by_robots(crobots_t *r, char *robots_body, char *user_agent, char *url);

#ifdef __cplusplus
}
#endif
