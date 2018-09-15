#ifndef _SOCKETCLIENT_H
#define _SOCKETCLIENT_H

#ifdef __cplusplus
extern "C" {
#endif

// Socket Client initialize
int socketclient_init(void **handle);
// Socket Client send packet
int socketclient_send(void *handle, unsigned char *buf, int buflen);
// Socket Client receiver
int socketclient_recv(void *handle, unsigned char *buf, int *buflen);
// Destory Socket Client
int socketclient_destory(void *handle);

// Socket Client initialize
int socketclient_init2(void **handle);
// Socket Client send packet
int socketclient_send2(void *handle, unsigned char *buf, int buflen);
// Socket Client receiver
int socketclient_recv2(void *handle, unsigned char **buf, int *buflen);
// Destory Socket Client
int socketclient_destory2(void **handle);

#ifdef __cplusplus
}
#endif

#endif//_SOCKETCLIENT_H
