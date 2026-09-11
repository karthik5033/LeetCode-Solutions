#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include<fcntl.h>

char buffer[8192];
int inp,oup;
ssize_t ret_in;
