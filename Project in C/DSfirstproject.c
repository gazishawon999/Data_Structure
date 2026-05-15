#include<stdio.h>
#include<stdlib.h>
#include"DS_S5.h"

int main(){

    int n,a[100],v,p,c;

    printf("\nNo.of Values(1to100)?\n");
    scanf("%d",&n);
    printf("\nInput values ! \n");
    Input_1DArray_S5(a,n);

    while(1)
    {
        printf("\nPress 0 for Exit");
        printf("\nPress 1 for Display Array");
        printf("\nPress 2 for insertion at last position");
        printf("\nPress 3 for insertion at specific position");
        printf("\nPress 4 for Deletion at specific position");
        printf("\nPress 5 for Linear Search at  position");
        printf("\nPress 6 for BubbleSort at  position");
        printf("\nPress 7 for Binary Search at  position");
        printf("\nEnter Your Choice\n");
        scanf("%d",&c);
        switch(c)
        {
        case 0:
            printf("\nHave a nice Day\n");
            exit(0);
        case 1:
            printf("\nDisplay\n");
                if(n>0)
                    Display_1DArray_S5(a,n);
                else
                   printf("\nArray is Empty\n");
                break;
        case 2:
            printf("\nInsertion at last position");
            scanf("%d",&v);
            n=Insertionlast_1DArray(a,n,v);
            printf("\nInserted Successfully\n");
            break;

        case 3:
            printf("\nInsertion at last position");
                if(n==0)
                    printf("\n Not Possible");
                else{
                    printf("\nEnter position between %d to %d\n",1,n);
                    scanf("%d",&p);
                    if(p>=1 && p<=n)
                    {
                        printf("\n Enter new value for insertion");
                        scanf("%d",&v);
                        n=Insertionspecific_1dArray(a,n,v,p);
                        printf("\nInserted Successfully %d at position %d\n",v,p);
                    }else
                        printf("\n Invalid position \n");
                }
                    break;
        case 4:
            printf("\n Deletion from Specific Position \n");
            if(n==0)
                printf("\n Array is Empty \n");
            else{
                printf("\nEnter the Position Between %d to %d\n",1,n);
                scanf("%d",&p);
                if(p>=1 && p<=n)
                    n=DeletionSpecific_1DArray(a,n,p);
                else
                    printf("\nInvalid Position\n");
                }
                break;
        case 5:
            printf("\nLinear Search\n");
            if(n==0)
                printf("\nArray is Empty\n");
            else{
                printf("\nEnter Value for Searching\n");
                scanf("%d",&v);
                LinearSearch_1DArray(a,n,v);
            }

            break;

        case 6:
            printf("\nBubble Sort\n");
            if(n==0)
                printf("\nArray is Empty\n");
            else
            {
                BubbleSort_1DArray(a,n);
                printf("\nSorted Successfully\n");
            }
            break;

        case 7:
            printf("\nBinary Search\n");
                if(n==0)
                    printf("\nArray is Empty\n");
                else{
                    scanf("%d",&v);
                    BinarySearch_1DArray(a,n,v);
                }
                break;


        default :
            printf("\nWrong Choice\n");

        }
    }

        return 0;
}
