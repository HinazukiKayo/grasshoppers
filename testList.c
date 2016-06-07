#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char *argv[]){
   list l = createList();
   l = appendNode(l, 1);
   l = appendNode(l, 2);
   l = appendNode(l, 3);
   l = appendNode(l, 4);
   l = appendNode(l, 5);
       
       
   printf("Original List\n");
   printList(l);
   printf("List after deleteAlternate\n");
   printList(deleteAlternate(l));
   return 0;
}