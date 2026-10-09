#include <stdio.h>
#define N 10
#define EMPTY 0

void display(int a[])
{
    int i;
    printf("\nIndex : ");

    for(i=0;i<N;i++)
        printf("%4d",i);
    printf("\nValue : ");

    for(i=0;i<N;i++)
        if(a[i]==EMPTY)
            printf("%4s","NULL");
        else
            printf("%4d",a[i]);
    printf("\n");
}

void insert(int a[],int pos,int id) 
{
    int i,empty=-1;
    if(pos<0 || pos>=N || id<=0)
    {
        printf("Invalid index or Item ID.\n");
        return;
    }

    for(i=0;i<N;i++)
    {
        if(a[i]==EMPTY)
        { 
            empty=i; break; 
        }
    }

    if(empty==-1)
    {
        printf("Warehouse is full.\n");
        return;
    }

    if(a[pos]==EMPTY)
    {
        a[pos]=id;
    }
    else
    {
        for(i=empty;i>pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=id;
    }
    printf("Item inserted at index %d.\n",pos);
}

void deleteItem(int a[],int pos) 
{
    int i;
    if (pos < 0 || pos >= N || a[pos] == EMPTY)
    {
        printf("Invalid or empty slot.\n");
        return;
    }

    for (i = pos; i < N - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[N - 1] = EMPTY;
    printf("Item deleted.\n");
}

int search(int a[], int id)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (a[i] == id)
        {
            return i;
        }
    }
    return -1;
}

void compact(int a[])
{
    int i, p = 0;
    for (i = 0; i < N; i++)
    {
        if (a[i] != EMPTY)
        {
            a[p++] = a[i];
        }
    }
    while(p<N) 
    {
        a[p++]=EMPTY;
    }
    printf("Warehouse compacted.\n");
}

int main() 
{
    int a[N] = {0}, ch, pos, id, result;
    
    do
    {
        printf("\n1.Insert\n");
        printf("\n2.Delete\n");
        printf("\n3.Search\n");
        printf("\n4.Compact\n");
        printf("\n5.Display\n");
        printf("\n6.Exit\n");
        
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter index and Item ID: ");
            scanf("%d%d", &pos, &id);
            insert(a, pos, id);
            break;

        case 2:
            printf("Enter index: ");
            scanf("%d", &pos);
            deleteItem(a, pos);
            break;

        case 3:
            printf("Enter Item ID: ");
            scanf("%d", &id);
            result = search(a, id);
            if (result == -1)
            {
                printf("Item is out of stock.\n");
            }
            else
            {
                printf("Item found at index %d.\n", result);
            }
            break;

        case 4:
            compact(a);
            break;

        case 5:
            display(a);
            break;

        case 6:
            printf("Exiting...\n");
            break;
            
        default:
            printf("Invalid choice.\n");
        }
    } while (ch != 6);
    return 0;
}