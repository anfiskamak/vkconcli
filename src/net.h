#ifndef __NET_H__
#define __NET_H__
#include <jansson.h>
json_t *vk_auth (const char *user, const char *password);
json_t *vk_msgs_get (int out, int offset, int limit);
json_t *vk_msg_send (int id, const char *msg);
json_t *vk_profile_get (int uid);
int vk_net_init (void);
#endif
