#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char *argv[]){
    
    list l = createList();
    l = appendNode(l, 1);
    l = appendNode(l, 2);
    l = appendNode(l, 3);
    l = appendNode(l, 4);

    printf("Original List\n");
    printList(l);
    
    printf("Back node to front\n");
    printList(backToFront(l));

    return 0;
}