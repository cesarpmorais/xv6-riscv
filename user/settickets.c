#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

void main(int argc, char **argv)
{
    if (argc < 1) {
        printf("Not enough arguments\n");
        exit(1);
    }

    int number = atoi(argv[1]);
    int result = settickets(number);

    if (result == -1) {
        printf("Invalid Number\n");
        exit(1);
    }

    exit(0);
}