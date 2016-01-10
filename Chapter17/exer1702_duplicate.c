// Write a function named dupicate that uses dynamic storage allocation to create a copy
// of a string. For example, the call
// p = duplicate(str);
// would allocate space for a string of the same legnth as str, copy the contents of str into
// the new string, and return a pointer to it. Have duplicate return a null pointer if the
// memory allocation fails. 

char *duplicate(const char *s)
{
	char *temp = malloc(strlen(s) + 1);
	
	if (temp == NULL)
		return NULL;
	
	strcpy(temp, s);
	return temp;
}

