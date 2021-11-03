#include <stdio.h>
#include"../include/hello.h" 
int main()
{
  const char *str="my name is xyz"; 
  int c='x';
  char *ptr;
  ptr = sgs_clib_strrchr(str,c);
  printf( "The last occurrence of %c in '%s' is '%s'\n", c, str, ptr );
  return 0;
}