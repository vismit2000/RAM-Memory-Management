#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

void printList(doublyLL dl, int j)
{
    if(dl.size != 0)
    {
        printf("\n\nElement of list-%d are : ", j);
        int i;
        printf("\nkey\tnext\tprev");
        for(i = dl.head; arr[i+1] != -1; i = arr[i+1])
        {
            if(arr[i+2] == -1)
                printf("\n%d\t%d\tNIL", arr[i], arr[i+1]);
            else
                printf("\n%d\t%d\t%d", arr[i], arr[i+1], arr[i+2]);            
        }
        if(arr[i+2] != -1)
            printf("\n%d\tNIL\t%d", arr[i], arr[i+2]);
        else
            printf("\n%d\tNIL\tNIL", arr[i]);    
    }
}