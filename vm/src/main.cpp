#include <stdlib.h>
#include <stdio.h>

#include <defs/CWVirtualMachine.h>
#include <defs/Arena.h>

void usage()
{
    printf("./cogwars [args]\n");
}

int main(int argc, char** argv)
{
    csys_status status = csys_status_success;

    if (argc == 1)
    {
        usage();
        return -1;
    }

    // Create Arena GUI
    Arena arena;
    arena.init();

    CWVirtualMachine *vm = new CWVirtualMachine();
    if (vm == NULL)
    {
        printf("Failed to create virtual machine!\n");
        return -1;
    }

    status = vm->init();
    cm_status_returnIfFailed(status);

    status = vm->parse_flags(argc, argv);
    cm_status_returnIfFailed(status);

    status = vm->files_to_string();
    cm_status_returnIfFailed(status);

    status = vm->parsing();
    cm_status_returnIfFailed(status);

    status = vm->build_arena();
    cm_status_returnIfFailed(status);

    status = vm->init_cursor();
    cm_status_returnIfFailed(status);

    status = vm->move_cursors();
    cm_status_returnIfFailed(status);

    status = vm->declare_winner();
    cm_status_returnIfFailed(status);

    status = vm->exit();
    cm_status_returnIfFailed(status);

    delete vm;

	return 0;
}
