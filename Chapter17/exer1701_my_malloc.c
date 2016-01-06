/*----------------------------------------------------------------*\
  Ricky A. Kendall
  CS/CE 425 Spring 2004
  $Id: mymalloc.c,v 1.1 2005/03/07 20:36:55 rickyk Exp $
\*--------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/*--------------------------------------------------------------------------------*\
   malloc wrapper routine that checks the return value and prints an error
   message if necessary.
\*--------------------------------------------------------------------------------*/
void *mymalloc(
	       size_t size,   /* size in bytes of region to malloc */
	       char *string   /* string to identify which malloc failed */
	      )
{
  void *ptr;
  ptr = malloc(size);
  if (ptr == (void *)NULL) {
    (void)fflush(stdout); /* flush stdout for grins */
    (void)fflush(stdout); /* flush stdout before exiting with error*/
    (void)fprintf(stderr," mymalloc: malloc failed <%s>\n",string);
    (void) exit((int)911);
  }
  return ptr;
}
