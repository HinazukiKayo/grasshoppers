#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char *argv[]){
   list l = createList();
   l = appendNode(l, 1);
   l = appendNode(l, 2);
   l = appendNode(l, 2);
   l = appendNode(l, 3);
       
   printf("Original List\n");
   printList(l);
   printf("List after duplicate removal\n");
   printList(removeDuplicates(l));
   return 0;
}