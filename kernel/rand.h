#ifndef _RAND_H_
#define _RAND_H_

// Code from https://stackoverflow.com/questions/4768180/rand-implementation
// With A Little Help From My Friend Lorenzo

static unsigned long int next = 1;

int rand(void) // RAND_MAX assumed to be 32767
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

#endif // _RAND_H_