#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

void defrag()
{
    int headptr = 1;
    int tailptr = 994;
    int i, j, temp, flag;
    
    while(headptr<tailptr)
    {
    	flag = 0;
    	for(i = headptr; i < 990; i += 3)
    	{
    	    if(arr[i+2] == 0)
    	       	break;
    	    
    	}
    	for(j = tailptr; j >= 0; j -= 3)
    	{
    	    if(arr[j+2] != 0)
    	     	break;
    	}
    	
    	headptr = i;
    	tailptr = j;
    	
    	if(headptr >= tailptr)
    	    break;
    	
    	temp = arr[i];
    	arr[i] = arr[j];
    	arr[j] = temp;
    	
    	temp = arr[i+1];
    	arr[i+1] = arr[j+1];
    	arr[j+1] = temp;
    	
    	temp = arr[i+2];
    	arr[i+2] = arr[j+2];
    	arr[j+2] = temp;
    	
    	if(arr[headptr+2] != -1)
    	{
    	    arr[arr[headptr+2] +1] = headptr;
    	}
    	if(arr[headptr+1] != -1)
    	{
    	    arr[arr[headptr+1]+2] = headptr;
    	}
    	//In case head of any list gets shifted
    	if(arr[headptr+2] == -1)
    	{
    	    for(int q = 0; q < 50; q++)
    	    {
    	    	if(dll[q].head == tailptr)
    	    	    dll[q].head = headptr;
    	    }
    	}
    	
    	if(freeList.head == headptr)
    	{
    	    flag = 1;
    	    freeList.head = arr[tailptr+1];
    	}
    	
    	if(flag == 0)
    	{
	    	for(int p = freeList.head; arr[p+1] != -1; p = arr[p+1])
	    	{
	    	    if(arr[p+1] == headptr)
	    	    {
	    	    	arr[p+1] = arr[tailptr+1];
	    	    	break;
	    	    }
	    	}
    	}
    	arr[tailptr+2] = 0;
    	arr[tailptr+1] = freeList.head;
    	freeList.head = tailptr;    	
    }
    freeList.head = sizeTotal()*3+1;
    int vis = freeList.head;
    for(int sp = vis; sp <= 994; sp += 3)
    {
    	arr[sp+1] = sp+3;
    }
    arr[998] = -1;
}