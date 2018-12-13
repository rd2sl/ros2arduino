#include "../../../../../include/uxr/client/profile/transport/tcp/tcp_transport_arduino.h"
#include "tcp_transport_internal.h"
// #include <unistd.h>
// #include <sys/types.h>
// #include <string.h>

bool uxr_init_tcp_platform(struct uxrTCPPlatform* platform, const char* ip,
    uint16_t port)
{
  bool rv = false;

  (void)(platform);
  (void)(ip);
  (void)(port);

  return rv;
}

bool uxr_close_tcp_platform(struct uxrTCPPlatform* platform)
{
  bool rv = false;

  (void)(platform);

  return rv;
}

size_t uxr_write_tcp_data_platform(struct uxrTCPPlatform* platform,
    const uint8_t* buf, size_t len, uint8_t* errcode)
{
  size_t rv = 0;

  (void)(platform);
  (void)(buf);
  (void)(len);
  (void)(errcode);

  return rv;
}

size_t uxr_read_tcp_data_platform(struct uxrTCPPlatform* platform, uint8_t* buf,
    size_t len, int timeout, uint8_t* errcode)
{
  size_t rv = 0;

  (void)(platform);
  (void)(buf);
  (void)(len);
  (void)(timeout);
  (void)(errcode);

  return rv;
}

void uxr_disconnect_tcp_platform(struct uxrTCPPlatform* platform)
{
  (void)(platform);
}

