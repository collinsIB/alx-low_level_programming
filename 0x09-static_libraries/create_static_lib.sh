#!/bin/bash
gcc -Wall _pedantic -Werror _Wextra -c *.c
ar -rc liball.a *.0
ranlib liball.a
