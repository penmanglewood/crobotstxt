#include "crobots.h"

#include <robots.h>

#include <string>

struct crobots {
  void *obj;
};

crobots_t *robots_create() {
  crobots_t *r;
  googlebot::RobotsMatcher *obj;

  r = (typeof(r))malloc(sizeof(*r));
  r->obj = new googlebot::RobotsMatcher;

  return r;
}

void robots_destroy(crobots_t *r) {
  if (r == NULL) {
    return;
  }

  delete static_cast<googlebot::RobotsMatcher *>(r->obj);
  free(r);
}

bool robots_one_agent_allowed_by_robots(crobots *r, char *robots_body, char *user_agent, char *url) {
  std::string body(robots_body);
  std::string ua(user_agent);
  std::string url_s(url);
  googlebot::RobotsMatcher *matcher;

  if (r == NULL) {
    return false;
  }

  matcher = static_cast<googlebot::RobotsMatcher *>(r->obj);
  return matcher->OneAgentAllowedByRobots(body, user_agent, url_s);
}
