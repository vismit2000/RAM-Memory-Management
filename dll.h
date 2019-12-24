#include<stdlib.h>

typedef struct
{
    int size;
    int head;
} doublyLL;

//int *arr = (int*) malloc(1000*sizeof(int));
int arr[1000];

doublyLL freeList;
doublyLL dll[50];

extern void display_options();
extern void initialize();                    		    //initializes size of all linked lists to 0
extern doublyLL createList(int key);                    //creates a new doubly linked list set
extern doublyLL insert(int key, doublyLL dl);           //inserts an element into doubly linked list in sorted order
extern void populate();        ;                        //populates free list
extern doublyLL deleteElement(int key, doublyLL dl);    //deletes element key from doubly linked list dl
extern int sizeTotal();                                 //returns total elements excluding free list
extern void printList(doublyLL dl, int j);              //prints all elements of doubly linked list dl
extern void displayFreeList();                          //displays all nodes of a free list
extern void defrag();                                   //performs defragmentation