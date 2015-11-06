// The Q&A section at the end of this chapter shows how the strcmp function
// might be written using array subscripting. 
// Modify the function to use pointer arithmetic intead. 
//
//int strcmp (char *s, char *t)
//{
//	int i;
//	
//	for (i = 0; s[i] == t[i]; i++)
//		if (s[i] == '\0')
//			return 0;
//	
//	return s[i] - t[i];
//}


#include <stdio.h>

int strcmp (char *s, char *t)
{
	for (; *s++ == *t++; )
		if (*s == '\0')
			return 0;
	
	return *s - *t;
}

int main (void)
{
	char s[] = "player";
	char t[] = "play";
	
	printf("Test1 result %d\n", strcmp(s, t));
	
  char v[] = "play";
  char w[] = "player";
  
  printf("Test2 result %d\n", strcmp(v, w));
  
	char a[] = "science";
	char b[] = "science";
	
	printf("Test1 result %d\n", strcmp(a, b));
		
	return 0;
}

