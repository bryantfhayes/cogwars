#ifndef ARENA_H_04112018
#define ARENA_H_04112018

#include <defs/status.h>

#include "curses.h"

using namespace std;

class Arena
{
    public:

        /**
         * @brief Constructor
         */
        Arena();

        /**
         * @brief Destructor
         */
        ~Arena();

        /**
         * @brief Initialize VM
         */
        csys_status init();

    private:
        bool mInitialized;
        WINDOW* mWindow;

        /**
         * @brief
         */
        csys_status init_curses();

        /**
         * @brief Copy constructor not used
         */
        Arena(const Arena&);
        
        /**
         * @brief Assignment operator not used
         */
        void operator=(const Arena&);
};

#endif // ARENA_H_04112018