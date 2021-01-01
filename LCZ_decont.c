#incude "stdlib.h"
void LCZ_decount(){
#ifdef __linux
	system("play /LCZ.mp3")
#endif
#ifdef WINVER
	//WINDOWS 
#endif
	system("/LCZ.mp3")
}

//CC-BY-SA 3.0
