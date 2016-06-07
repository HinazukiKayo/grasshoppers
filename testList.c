#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char *argv[]){
    list l = createList();
    int i = 0;
    while (i < 4){
       l = appendNode(l, i);
       i++;
    }
    printf("Original List\n");
    printList(l);
    printf("Front to back node\n");
    printList(frontToBack(l));
    return 0;
}