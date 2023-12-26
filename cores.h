#ifndef cores_h
#define cores_h

#include <curses.h>

void CriarCores(){

 start_color();

 init_pair(1, COLOR_WHITE, COLOR_BLACK);
 init_pair(2, COLOR_GREEN, COLOR_BLACK);
 init_pair(3, COLOR_RED, COLOR_BLACK);
 init_pair(4,COLOR_GREEN,COLOR_BLACK);
 init_pair(5,COLOR_BLUE,COLOR_BLACK);
 init_pair(6, COLOR_BLACK, COLOR_YELLOW);

}

#endif
