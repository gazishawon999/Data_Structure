//array
void Input_1DArray_S5(int aa[100],int nn)
{
      int j;
      for(j=1;j<=nn;j++)
            scanf("%d",&aa[j]);


}
void Display_1DArray_S5(int aa[100],int nn)
{

      int j;
      for(j=1;j<=nn;j++)
            printf("%d\t",aa[j]);



}

int Insertionlast_1DArray(int aa[100],int nn,int vv)
    {
        aa[nn+1]=vv;

        return nn+1;
    }

int Insertionspecific_1dArray(int aa[100],int nn,int vv,int pp)
    {
        int j;
        for(j=nn;j>=pp;j--)
            aa[j+1]=aa[j];

        aa[pp]=vv;
        return nn+1;
    }

int DeletionSpecific_1DArray(int aa[100],int nn,int pp)
    {
        int j,k;
        k=aa[pp];
        for(j=pp;j<nn;j++)
            aa[j]=aa[j+1];

        printf("\nDeleted Successfully  %d from position %d\n",k,pp);

        return nn-1;
    }


void LinearSearch_1DArray(int aa[100],int nn, int vv)
{
    int j,c=0;
    for(j=1;j<=nn;j++){
        if(vv==aa[j]){
            printf("\nFound at %d Position\n",j);
            c=c+1;
        }
    }
    if(c==0)
        printf("\nNot Found\n");
    else{
        printf("\n-------Total Found=--%d\n--",c);
    }
}


void  BubbleSort_1DArray(int aa[100],int nn)
{
    int j,k,t;
    for(j=1;j<=nn;j++)
    {
        for(k=1;k<=nn-1;k++)
        {
            if(aa[k]>aa[k+1])
            {
                t=aa[k];
                aa[k]=aa[k+1];
                aa[k+1]=t;
            }
        }
    }

}


void  BinarySearch_1DArray(int aa[100],int nn,int vv)
{

    int beg,End,mid;
    BubbleSort_1DArray(aa,nn);
    beg=1;
    End=nn;
    do{
        mid=(End+beg)/2;
            if(vv<aa[mid])
                End =mid-1;
            else if(vv>aa[mid])
                beg=mid+1;
    }
    while(vv!=aa[mid] && beg<=End);
        if(vv==aa[mid])
            printf("\nFound\n");
        else
            printf("\nNot Found\n");


}

//LINKLIST

struct node
{
    int value;
    struct node *add;
};

void InsertionLast_LinkedList(struct node *head,int vv)
{
    struct node *temp;

        temp =(struct node *)malloc(1*sizeof(struct node ));
        temp->value=vv;
        temp->add=NULL;

        while(head->add!=NULL)
        {
            head=head->add;

        }

        head->add=temp;

}

void Display_LinkedList(struct node *head)
{


        while(head->add!=NULL)
        {
            printf("%d\t",head->add->value);
            head=head->add;

        }

}

int CountingNodes_LinkedList(struct node *head)
{
    int t=0;

    while(head->add!=NULL)
        {
            t=t+1;
            head=head->add;

        }
        return t;

}

void  InsertionSpecific_LinkedList(struct node *head,int vv,int pp)
{
    int i=0 ;
    struct node *temp;

    while(head->add!=NULL)
    {
        if(i==pp-1)
            break;
        head=head->add;
        i++;
    }

     temp =(struct node *)malloc(1*sizeof(struct node ));
     temp->value=vv;
     temp->add=head->add;
     head->add=temp;

}

void  DeletionSpecific_LinkedList(struct node *head,int pp)
{
    int i=0 ;
    struct node *temp;

    while(head->add!=NULL)
    {
        if(i==pp-1)
            break;
        head=head->add;
        i++;
    }

    temp=head->add;
    head->add=temp->add;

    printf("\nDeleted Successfully %d from position %d\n",temp->value,pp);
    free(temp);
}



void  LinearSearch_LinkedList(struct node *head,int vv)
{
    int i=0,c=0 ;

    while(head->add!=NULL)
    {
        if(vv==head->add->value)
        {
            c=1;
            i++;
            printf("\nFound at position = %d\n",i);
            break;
        }
        else
        {
            i++;
            head=head->add;
        }
    }
    if(c=0)
        printf("\nNot Found\n");
}
