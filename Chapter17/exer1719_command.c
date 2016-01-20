#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Dummy command functions for test
void new_cmd()      { printf("new\n") ; }
void open_cmd()     { printf("open\n") ; }
void close_cmd()    { printf("close\n") ; }
void close_all_cmd(){ printf("close all\n") ; }
void save_cmd()     { printf("save\n") ; }
void save_as_cmd()  { printf("save as\n") ; }
void save_all_cmd() { printf("save all\n") ; }
void print_cmd()    { printf("print\n") ; }
void exit_cmd()     { printf("exit\n") ; exit(EXIT_SUCCESS); }

// Write a function that, when given a string as its argument, searches the following array of 
// structures for a matching command name, then calls the function associated with that name. 
struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] = 
 {{"new",       new_cmd},
  {"open",      open_cmd},
  {"close",     close_cmd},
  {"close all", close_all_cmd},
  {"save",      save_cmd},
  {"save as",   save_as_cmd},
  {"save all",  save_all_cmd},
  {"print",     print_cmd},
  {"exit",      exit_cmd}
};

// Get the compiler to determine the number of commands - for maintainability
#define NUMBER_OF_COMMANDS (sizeof(file_cmd)/sizeof(*file_cmd))
#define CMD_LENG 10

//Proto-type
int read_line(char str[], int n);
void exec_cmd(char cmd[]);

//Test main function   
int main(void)
{
    char cmd[CMD_LENG + 1];
     
    for (;;){
	    printf("Enter a command: ");
	    read_line(cmd, CMD_LENG + 1);
	    exec_cmd(cmd);
  	}
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
    	file_cmd[i].cmd_pointer();                       // function-pointer call
    	break ;                                          // Break from loop on matching command
    }
  }
 
  if (i >= NUMBER_OF_COMMANDS) {
  	fprintf(stderr, "\nCouldn't find command\n");
  	exit(EXIT_FAILURE);
	}
	return ;
}
