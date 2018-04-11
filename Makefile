CC      = g++
CFLAGS  = -Wall -Wextra -Werror -I.

# Subdir locations
VM_PATH = ./vm

all:
	@make -C $(VM_PATH)

clean:
	@make -C $(VM_PATH) clean

.PHONY: clean
