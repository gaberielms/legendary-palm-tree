#ifndef UTILS_H
#define UTILS_H

#include "types.h"

char *find_command(char *command); // Find a command in PATH

char *parse_string(char *args, arg *current); // Parse string return heap allocated string

int get_fd_in(char *args); // Get input file descriptor

int get_fd_out(char *args); // Get output file descriptor append or truncate

#endif