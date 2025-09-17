#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define POOL_SIZE 1024

typedef struct Block{
    struct Block *next;
} Block;

typedef struct {
    Block *freelist;
    unsigned char pool[POOL_SIZE];
}MemoryPool;

int main(){


}