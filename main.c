#include <curses.h>

int main(int argc, char const *argv[]) {
	initscr();
	printw("Press any key to continue...");
	refresh();
	getch();
	endwin();
	return 0;
}
