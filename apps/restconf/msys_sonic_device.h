#ifndef _MSYS_SONIC_DEVICE_H_
#define _MSYS_SONIC_DEVICE_H_
/* clixon */
#include <clixon/clixon.h>
/*
 * Prototypes
 */
// int api_path_is_customdevice(clixon_handle h);
// int api_http_customdevice(clixon_handle h, void *req, cvec *qvec);

int sonic_process_api(clixon_handle h, void *req, cvec *qvec, const char *device_url, const char *ip_address, const char *request_method);

#endif /*_MSYS_SONIC_DEVICE_H_ */