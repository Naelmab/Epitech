
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct list {
    int value;
    struct list *next;
}list, *List;
