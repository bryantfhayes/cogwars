#include <defs/CWVirtualMachine.h>

CWVirtualMachine::CWVirtualMachine()
{}

CWVirtualMachine::~CWVirtualMachine()
{
    // Already initialized, cleanup.
    if (mInitialized)
    {

    }
}

csys_status CWVirtualMachine::init()
{
    csys_status status = csys_status_success;

    mInitialized = true;

    cm_status_return(status);
}

csys_status CWVirtualMachine::parse_flags(int argc, char **argv)
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::files_to_string()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::init_players()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::parsing()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::build_arena()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::init_cursor()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::move_cursors()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::declare_winner()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}

csys_status CWVirtualMachine::exit()
{
    csys_status status = csys_status_success;

    cm_status_return(status);
}