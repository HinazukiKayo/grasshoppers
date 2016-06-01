#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

link createNode (int value){
   link node = malloc(sizeof(link));
   assert(node != NULL);
   node -> data = value;
   node -> next = NULL;
   return node; 
}

list createList (void){
   list l = malloc(sizeof(list));
   assert(l != NULL);
   l -> head = NULL;
   l -> size = 0;
   return l;
}

list appendNode (list l, int value){
   link curr = l -> head;
   link node = createNode(value);
   if (curr == NULL){
      l -> head = node;
      return l;
   }
   while (curr -> next != NULL){
      curr = curr -> next;
   }
   curr -> next = node; 
   return l;
}

list backToFront (list l){
   link curr = l -> head;
   link first = curr;
   link prev = NULL;
   if (curr == NULL || curr -> next == NULL){
      return l;
   }
   while (curr -> next != NULL){
      prev = curr;
      curr = curr -> next;
   }
   l -> head = curr;
   curr -> next = first;
   prev -> next = NULL;
   return l;
}


void printList (list l){
   link curr = l -> head;
   while (curr != NULL){
      printf("%d -> ", curr -> data);
      curr = curr -> next;
   }
   printf("X\n");
}