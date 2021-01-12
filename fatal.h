#include<stdio.h>
#include<stdlib.h>

#define Eror(Str)		FatalEror(Str)
#define FatalEror(Str) fprintf(stderr, "%s\n",Str),exit(1)

