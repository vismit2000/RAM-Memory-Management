#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

doublyLL deleteElement(int key, doublyLL dl)
{
    int i, temp, hd, tmp;
    if(arr[dl.head] == key)
    {
        hd = dl.head;
        temp = arr[dl.head+1];
        arr[temp+2] = -1;
        dl.head = temp;
        
        arr[hd+1] = freeList.head;
        arr[hd+2] = 0;
        freeList.head = hd;
        dl.size--;
        freeList.size++;
        printf("\nSUCCESS\n");
        return dl;
    }
    
    for(i = dl.head; arr[i+1] != -1; i = arr[i+1])
    {
        if(compare(arr[i], key) == EQUAL)
        {
            hd = i;
            temp = arr[i+1];
            tmp = arr[i+2];
            
            arr[tmp+1] = temp;
            arr[temp+2] = tmp;
            
            arr[hd+1] = freeList.head;
            arr[hd+2] = 0;
            freeList.head = hd;
            dl.size--;
            freeList.size++;
            printf("\nSUCCESS\n");
            return dl;
        }
    }
    
    if(compare(arr[i], key) == EQUAL)
    {
        hd = i;
        tmp = arr[i+2];
        arr[tmp+1] = -1;
        arr[hd+1] = freeList.head;
        arr[hd+2] = 0;
        freeList.head = hd;
        dl.size--;
        freeList.size++;
        printf("\nSUCCESS\n");  
        return dl;
    }
    printf("\nSORRY! ELEMENT IS NOT IN THE LIST\n");
    return dl;
}