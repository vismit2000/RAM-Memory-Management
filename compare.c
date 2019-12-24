#include "compare.h"

ORDER compare (int a, int b)
{
 if (a < b)           
         return LESSER;
 else if (a > b)      
         return GREATER;
 else if (a == b)     
         return EQUAL;
}