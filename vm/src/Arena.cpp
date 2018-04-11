#include <defs/Arena.h>

Arena::Arena() :
mWindow(NULL)
{}

Arena::~Arena()
{
    // Already initialized, cleanup.
    if (mInitialized)
    {
        delwin(mWindow);
        endwin();
        refresh();
    }
}

csys_status Arena::init()
{
    csys_status status = csys_status_success;

    status = init_curses();
    cm_status_returnIfFailed(status);

    printw("Hello World!\n");

    mInitialized = true;

    cm_status_return(status);
}

csys_status Arena::init_curses()
{
    csys_status status = csys_status_success;

    printf("Initializing NCURSES.\n");

    mWindow = initscr();
    noecho();
    start_color();
    init_color(COLOR_WHITE, 220, 220, 220);
    init_pair(0, COLOR_YELLOW, COLOR_BLACK);
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    init_pair(4, COLOR_RED, COLOR_BLACK);
    init_pair(5, COLOR_GREEN, COLOR_BLACK);
    init_pair(6, COLOR_YELLOW, COLOR_BLACK);
    init_pair(7, COLOR_BLACK, COLOR_BLUE);
    init_pair(8, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(9, COLOR_BLACK, COLOR_CYAN);
    init_pair(10, COLOR_BLACK, COLOR_RED);
    init_pair(11, COLOR_BLACK, COLOR_GREEN);
    init_pair(12, COLOR_WHITE, COLOR_BLACK);
    init_pair(13, COLOR_BLACK, COLOR_GREEN);
    init_pair(14, COLOR_GREEN, COLOR_BLACK);
    curs_set(FALSE);

    cm_status_return(status);
}