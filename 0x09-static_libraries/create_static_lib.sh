#!/bin/bash

# A script to create a static library
# called liball.a from all .c files
# that in current directory

gcc -c *c
ar rc liball.a *o
