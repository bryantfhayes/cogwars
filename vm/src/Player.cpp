#include <defs/Player.h>

Player::Player()
{}

Player::~Player()
{
    // Already initialized, cleanup.
    if (mInitialized)
    {

    }
}

csys_status Player::init()
{
    csys_status status = csys_status_success;

    mInitialized = true;

    cm_status_return(status);
}