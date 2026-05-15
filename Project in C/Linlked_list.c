#include<stdio.h>
#include<stdlib.h>
#include"DS_S5.h"

int main(){

    int n,v,p,c;

    struct node *list;
    list=(struct node *)malloc(1*sizeof(struct node ));
    list->value=0;
    list->add=NULL;


    while(1)
    {
        printf("\n----------------Menu------------------------\n");
        printf("\nPress 0 for Exit");
        printf("\nPress 1 for Display Linked_list");
        printf("\nPress 2 for insertion at last position");
        printf("\nPress 3 for insertion at specific position");
        printf("\nPress 4 for Deletion from specific position");
        printf("\nPress 5 for Linear Search at  position");
        printf("\nPress 6 for Counting Nodes\n");
        printf("\n============================================\n");
        printf("\nEnter Your Choice\n");
        scanf("%d",&c);
        switch(c)
        {
        case 0:
            printf("\nHave a nice Day\n");
            exit(0);
        case 1:
            printf("\nDisplay\n");
                if(list->add!=NULL)
                    Display_LinkedList(list);
                else
                    printf("\nList is Empty\n");
                break;
        case 2:
            printf("\nInsertion at last position");
                printf("\nEnter new value : \n");
                scanf("%d",&v);
                InsertionLast_LinkedList(list,v);

            break;

        case 3:
            printf("\nInsertion at Specific position");
                if(list->add!=NULL)
                    {
                        n=CountingNodes_LinkedList(list);
                        printf("\n Enter Position between %d to %d for insertion : \n",1,n);
                        scanf("%d",&p);
                        if(p>=1 && p<=n)
                        {
                            printf("\nEnter new Value for insertion : \n");
                            scanf("%d",&v);
                            InsertionSpecific_LinkedList(list,v,p);
                        }
                        else
                        {
                            printf("\nWrong Position\n");
                        }
                    }
                else
                    printf("\nList is Empty\n");
            break;
        case 4:
            printf("\n Deletion from Specific Position \n");
                if(list->add!=NULL)
                    {
                        n=CountingNodes_LinkedList(list);
                        printf("\n Enter Position between %d to %d for Deletion : \n",1,n);
                        scanf("%d",&p);
                        if(p>=1 && p<=n)
                        {

                            DeletionSpecific_LinkedList(list,p);
                        }
                        else
                        {
                            printf("\nWrong Position\n");
                        }
                    }
                else
                    printf("\nList is Empty\n");
                break;
        case 5:
            printf("\nLinear Search\n");
            if(list->add!=NULL)
                    {
                        printf("\nEnter Value for Searching : \n");
                        scanf("%d",&v);
                        LinearSearch_LinkedList(list,v);
                    }
                else
                    printf("\nList is Empty\n");
            break;

        case 6:
            printf("\nCounting Nodes\n");
               n=CountingNodes_LinkedList(list);
               printf("\nTotal Nodes = %d\n",n);
            break;





        default :
            printf("\nWrong Choice\n");

        }
    }

        return 0;
}
