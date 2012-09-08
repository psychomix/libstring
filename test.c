#include <stdio.h>

#include "string.h"

int main () {
  string_t *S, *Scopy;

  if (!string_copystr (&S, "ThIS is a SaMPlE LiNE...")) {
    printf ("S->ptr: '%s'\n", S->ptr);
    printf ("S->length: %d\n", S->length);
    printf ("string_toupper: %d\n", string_toupper (S));
    printf ("S->ptr: '%s'\n", S->ptr);
    printf ("string_tolower: %d\n", string_tolower (S));
    printf ("S->ptr: '%s'\n", S->ptr);
    if (!string_copy (&Scopy, S)) {
      printf ("Scopy->ptr: '%s'\n", Scopy->ptr);
      printf ("Scopy->length: %d\n", Scopy->length);
      printf ("string_delete(&Scopy): %d\n", string_delete (&Scopy));
    }
    printf ("S->ptr: '%s'\n", S->ptr);
    printf ("S->length: %d\n", S->length);
    printf ("string_delete(&S): %d\n", string_delete (&S));
  }

  return 0;
}
