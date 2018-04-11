#ifndef PLAYER_H_04112018
#define PLAYER_H_04112018

#include <defs/status.h>

using namespace std;

class Player
{
    public:

        /**
         * @brief Constructor
         */
        Player();

        /**
         * @brief Destructor
         */
        ~Player();

        /**
         * @brief Initialize VM
         */
        csys_status init();

    private:
        bool mInitialized;
        
        /**
         * @brief Copy constructor not used
         */
        Player(const Player&);
        
        /**
         * @brief Assignment operator not used
         */
        void operator=(const Player&);
};

#endif // PLAYER_H_04112018