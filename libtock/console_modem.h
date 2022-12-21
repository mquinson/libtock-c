#pragma once

#include "tock.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DRIVER_NUM_CONSOLE_MODEM 0xA

int modem_putstr(const char* str);
int modem_putnstr(const char* str, size_t len);
int modem_putnstr_async(const char* str, size_t len, subscribe_upcall cb, void* userdata);

int modem_getnstr(char *str, size_t len);
int modem_getnstr_async(char *str, size_t len, subscribe_upcall cb, void* userdata);

/* Returns TOCK_FAIL on failure, or else the character received */
int modem_getch(void);

// Abort an ongoing receive call.
int modem_getnstr_abort(void);

#ifdef __cplusplus
}
#endif
