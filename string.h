#ifndef _PM_STRING_H
#define _PM_STRING_H

#include "types.h"

typedef struct {
  uchar *ptr;
  ushort length;
} string_t;

#define string_copy(x,y) string_copystr(x,y->ptr)

extern int string_copystr(string_t ** S, char *str);
extern int string_delete(string_t ** S);
extern int string_toupper(string_t * S);
extern int string_tolower(string_t * S);

#endif
