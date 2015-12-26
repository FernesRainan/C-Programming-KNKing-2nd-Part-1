// Our function will measure the lengths of the two strings to be concatenated, 
// then call malloc to allocate just the right amount of space for the result. The
// function next copies the first string into the new space and then calls strcat to
// concatenate the second string. 

char *concat (const char *s1, const char *s2)
{
	char *result;
	
	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (result == NULL) {
		printf("Error: malloc failed in concat.\n");
		exit (EXIT_FAILURE);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return result;
}

