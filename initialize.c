#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

void initialize()
{
    for(int i = 0; i < 50; i++)
    {
        dll[i].size = 0;
        //dll[i].head = -1001;
    }
    for(int i = 0; i < 1000; i++)
    	arr[i] = 0;
}