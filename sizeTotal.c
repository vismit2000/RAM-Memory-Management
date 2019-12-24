#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

int sizeTotal()
{
    int ans = 0;
    for(int i = 0; i < 50; i++)
    {
        ans += dll[i].size;
    }
    return ans;
}
