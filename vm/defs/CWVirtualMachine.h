#ifndef CWVIRTUALMACHINE_H_20180302
#define CWVIRTUALMACHINE_H_20180302
   
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

#include <defs/Arena.h>
#include <defs/Player.h>
#include <defs/status.h>

#define MAX_PLAYERS 4

using namespace std;

class CWVirtualMachine
{
    public:

        typedef struct Environment
        {
            int cursors;
            int dump;
            int dump_value;
            int cycle;
            int tot_cycle;
            int lives;
            int check;
            int bonus;
            int winner;
            int last_alive;
            int cycles_to_die;
            int player_amount;
            char** files;
        } Environment;

        /**
         * @brief Constructor
         */
        CWVirtualMachine();

        /**
         * @brief Destructor
         */
        ~CWVirtualMachine();

        /**
         * @brief Initialize VM
         */
        csys_status init();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status parse_flags(int argc, char **argv);

        /**
         * @brief 
         *
         * @return status
         */
        csys_status files_to_string();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status init_players();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status parsing();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status build_arena();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status init_cursor();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status move_cursors();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status declare_winner();

        /**
         * @brief 
         *
         * @return status
         */
        csys_status exit();

    private:
        bool mInitialized;
        Environment mEnv;
        Player mPlayers[MAX_PLAYERS];
        Arena *mArena;
        
        /**
         * @brief Copy constructor not used
         */
        CWVirtualMachine(const CWVirtualMachine&);
        
        /**
         * @brief Assignment operator not used
         */
        void operator=(const CWVirtualMachine&);
};

#endif  // CWVIRTUALMACHINE_H_20180302
