#ifndef mapa_h
#define mapa_h

#include <curses.h>

void ExibirMapa(){

    initscr();
    int altura, largura;
    getmaxyx(stdscr, altura, largura);

    char borda_SupInf = '-';
    char paredes = '|';

    for(int i = 0; i <(largura-1); i++){
    mvwprintw(stdscr, 0, i, "%c", borda_SupInf);
    mvwprintw(stdscr, (altura-1), i, "%c", borda_SupInf);
    }

    for(int j = 0; j < (altura-1); j++){
    mvwprintw(stdscr, j, 0, "%c", paredes);
    mvwprintw(stdscr, j, (largura-1), "%c", paredes);
}
