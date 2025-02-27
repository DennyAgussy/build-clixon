#ifndef _MSYS_CLIXON_HTTP_CUSTOMDEVICE_H_
#define _MSYS_CLIXON_HTTP_CUSTOMDEVICE_H_
/* clixon */
#include <clixon/clixon.h>
/*
 * Prototypes
 */
int api_path_is_customdevice(clixon_handle h);
int api_http_customdevice(clixon_handle h, void *req, cvec *qvec);

#endif /* _MSYS_CLIXON_HTTP_DATA_H_ */