/* strtok example */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
  char str[] ="- This, a sample string.";
char *ptr_one;

		ptr_one = (char *)malloc(sizeof(int));  
//char str_copy[] = (char * )= 
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
strcpy(ptr_one,str);
  pch = strtok (ptr_one," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}