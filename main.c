#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "cores.h"
#include "mapa.h"

int main() {

    //WINDOW* stdscr = initscr(); //criando janela
    initscr();

    CriarCores();
    keypad(stdscr, TRUE);
    curs_set(0);

    char personagem = 'J';

    int altura, largura;
    getmaxyx(stdscr, altura, largura);

    int Y_personagem = altura / 2;
    int X_personagem = largura / 2;

    attron(COLOR_PAIR(2)); // teste da cor

    mvwprintw(stdscr, Y_personagem, X_personagem, "Hello, PDCurses!");

    refresh();

    attroff(COLOR_PAIR(2));
    //ExibirMapa();
    getch();

    int OpcaoEscolhida;
    do {
        clear();

        mvprintw(Y_personagem, X_personagem,"%c", personagem); // printa personagem em seu lugar
        ExibirMapa();
        refresh();

        OpcaoEscolhida = getch();

        switch (OpcaoEscolhida) {
            case KEY_UP:
                Y_personagem--;
                break;
            case KEY_DOWN:
                Y_personagem++;
                break;
            case KEY_LEFT:
                X_personagem--;
                break;
            case KEY_RIGHT:
                X_personagem++;
                break;
        }

    } while (OpcaoEscolhida != 'q'); // q == quitar/sair




    endwin();

    return 0;
}
