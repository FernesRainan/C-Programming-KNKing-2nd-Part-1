// Write a function that, when given a string as its argument, searches the following array of 
// structures for a matching command name, then calls the function associated with that name. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Get the compiler to determine the number of commands - for maintainability
#define NUMBER_OF_COMMANDS (sizeof(file_cmd)/sizeof(*file_cmd))
#define CMD_LENG 10
 
// Dummy command functions for test
void new_cmd(){ printf("new") ; }
void open_cmd(){ printf("open") ; }
void close_cmd(){ printf("close") ; }
void close_all_cmd(){ printf("close all") ; }
void save_cmd(){ printf("save") ; }
void save_as_cmd(){ printf("save as") ; }
void save_all_cmd(){ printf("save all") ; }
void print_cmd(){ printf("print") ; }
void exit_cmd(){ printf("exit") ; }
 
int read_line (char str[], int n);
void exec_cmd(char cmd[]);
 
struct 
{
    char *cmd_name;
    void (*cmd_pointer)(void);
 
} file_cmd[] = 
{
    {"new", new_cmd},
    {"open", open_cmd},
    {"close", close_cmd},
    {"close all", close_all_cmd},
    {"save", save_cmd},
    {"save as", save_as_cmd},
    {"save all", save_all_cmd},
    {"print", print_cmd},
    {"exit", exit_cmd }
};
  
int main(void)
{
    char cmd[CMD_LENG + 1];
     
    printf("Enter a command: ");
    read_line(cmd, CMD_LENG + 1);
    exec_cmd(cmd);
    
    return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while (isspace(ch = getchar()))
	;
	while (ch != '\n' && ch != EOF){
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	return i;
}

//Answer for Exercise 17.19
void exec_cmd(char cmd[])
{
	int i;
	
	for (i = 0; i < NUMBER_OF_COMMANDS; i++){
  	if(strcmp(cmd, file_cmd[i].cmd_name) == 0){        // Matching cmd_name
    	file_cmd[i].cmd_pointer();                           // function-pointer call
    	break ;                                              // Break from loop on matching command
    }
  }
 
  if (i >= NUMBER_OF_COMMANDS) {
  	fprintf(stderr, "Couldn't find command");
  	exit(EXIT_FAILURE);
	}
  
	return ;
}
