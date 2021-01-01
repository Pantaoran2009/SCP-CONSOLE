#incude "stdlib.h"
void warhead_start(){
#ifdef __linux
	system("play /Warhead.mp3")
#endif
#ifdef WINVER
	//WINDOWS 
#endif
	system("/Warhead.mp3")
}

//CC-BY-SA 3.0
