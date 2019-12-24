#include<stdio.h>
#include<stdlib.h>
#include "dll.h"
#include "compare.h"

int main()
{
    int flag;
    initialize();
    populate();
    
    while(1)
    {
        display_options();
        
        int choice, n, m;
        scanf("%d", &choice);
    
        switch(choice)
        {
            case 1 : printf("\nThe sequence number of the newly created list is : ");
                     scanf("%d", &n);
                     if(dll[n].size != 0)
                     {
                     	printf("\nLIST ALREADY EXISTS\n");
                     	break;
                     }
                     printf("\nEnter key value to be inserted in the newly created list-%d : ", n);
                     scanf("%d", &m);
                     dll[n] = createList(m);
                     break;
            
            case 2 : printf("\nList you want to insert in : ");
                     scanf("%d", &n);
                     if(dll[n].size == 0)
                     {
                     	printf("\nSORRY! LIST IS NOT CREATED YET\n");
                     	break;
                     }
                     printf("\nEnter the key value : ");
                     scanf("%d", &m);
                     dll[n] = insert(m, dll[n]);
                     break;
                    
            case 3 : printf("\nList you want to delete from : ");
                     scanf("%d", &n);
                     if(dll[n].size == 0)
                     {
                     	printf("\nSORRY! LIST IS EMPTY\n");
                     	break;
                     }
                     printf("\nEnter the key value : ");
                     scanf("%d", &m);
                     dll[n] = deleteElement(m, dll[n]);
                     break;
                    
            case 4 : if(sizeTotal() == 0)
            	     {
            	     	printf("\nSORRY! NO LIST IS CREATED YET\n");
            	     	break;
            	     }            	     
            	     printf("\nTotal number of nodes in all lists are : %d", sizeTotal());
                     break;
                    
            case 5 : printf("\nEnter the list number : ");
                     scanf("%d", &n);
                     if(dll[n].size == 0)
            	     {
            	     	printf("\nLIST IS EMPTY\n");
            	     	break;
            	     }            	     
                     printf("\n Total number of nodes in list %d are : %d", n, dll[n].size);
                     break;
                    
            case 6 : flag = 0;
            	     for(int i = 0; i < 50; i++)
            	     {
            	     	   if(dll[i].size != 0)    
            	     	   {     	     
                         	printList(dll[i], i);
                         	flag = 1;
                           }
                     }
                     if(flag == 0)
                     {
                     	printf("\nSORRY! ALL LISTS ARE EMPTY. THERE IS NO DATA TO PRINT\n");
                     }
                     break;
            
            case 7 : displayFreeList();
                     break;
                    
            case 8 : defrag();
            	     printf("\nSUCCESS\n");
                     break;
                    
            case 0 : exit(0);
            
            default : printf("\nNot a valid choice. Enter again : ");
        }
    }
}