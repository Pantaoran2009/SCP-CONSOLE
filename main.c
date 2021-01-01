#include <stdio.h>
#include <stdlib.h>
#include "moudle_include.h"
#include <string.h>

int main(int argc, char *argv[]) {
	char Command[16]; 
	while (strcmp(Command,"SHUTDOWN") != 0){
		scanf("%s",Command);
		if (strcmp(Command,"WARHEAD") == 0){
			warhead_start();
		}
		else if (strcmp(Command,"LOGO") == 0){
			logo();
		}
		else if (strcmp(Command,"LCZDECOUNT") == 0){
			LCZ_decount();
		}
		
	}
	
	return 0;
}
//CC-BY-SA 3.0
