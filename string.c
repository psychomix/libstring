/* simple wrapper for string operations */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "types.h"
#include "string.h"

/*
 return values :
   -1 : unable to allocate memory for *S
   -2 : unable to allocate memory for (*S)->ptr
 */
int string_copystr (string_t **S, char *str) {
  int r;

  (*S) = (string_t *)malloc (sizeof(string_t));
  if (*S) {
    for ((*S)->length = 0; str[(*S)->length]; (*S)->length ++) ;
    (*S)->ptr = (uchar *)malloc ((*S)->length+1);
    if ((*S)->ptr) {
      memcpy ((*S)->ptr, str, (*S)->length);
      (*S)->ptr[(*S)->length] = 0;
    } else r = -2;
  } else r = -1;

  return (r);
}

/*
 return values :
   -1 : *S not allocated
 */
int string_delete (string_t **S) {
  int r = 0;

  if (*S) {
    free ((*S)->ptr);
    free (*S);
  } else r = -1;

  return (r);
}

/*
 return values :
   -1 : S not allocated
 */
int string_toupper (string_t *S) {
  int r = 0, i;

  if (S) {
    for (i = 0; i<S->length; i++) {
      S->ptr[i] = toupper(S->ptr[i]);
    }
  } else r = -1;

  return (r);
}

/*
 return values :
   -1 : S not allocated
 */
int string_tolower (string_t *S) {
  int r = 0, i;

  if (S) {
    for (i = 0; i<S->length; i++) {
      S->ptr[i] = tolower(S->ptr[i]);
    }
  } else r = -1;

  return (r);
}
