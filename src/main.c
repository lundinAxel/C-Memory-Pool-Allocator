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

void initMemoryPool(MemoryPool *pool){
    pool->freelist = (Block *)pool->pool;
    Block *current = pool->freelist;

    for (int i = 0; i < (POOL_SIZE / sizeof(Block)) -1; i++){
        current->next = (Block *)((unsigned char *)current + sizeof(Block));
        current = current->next;
    }

    current->next = NULL;
}


int main(){
    

}