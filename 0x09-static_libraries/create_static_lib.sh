#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -c *.c
ar -rcsv liball.a *.o
