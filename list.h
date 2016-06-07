#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
typedef struct listRep *list;

typedef struct node {
   int data;
   link next;
} node;

typedef struct listRep {
   link head;
   int size;
} listRep;


link createNode (int value);
list createList (void);
list appendNode (list l, int value);
list backToFront (list l);
list frontToBack (list l);
list removeDuplicates (list l);

void printList (list l);