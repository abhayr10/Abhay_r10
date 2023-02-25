#include<stdio.h>
#include<stdlib.h>
int q[30],r=-1,f=-1,val,max,opt;
int main()
{
     char ch='y';
    printf("Enter the QUEUE size:");
    scanf("%d",&max);
    printf("\n");
    for( ;ch=='y'; )
    {
        printf("MENU\n");
        printf("1.ENQUEUE\n");
        printf("2.DISPLAY\n");
        printf("3.DEQUEUE\n");
        printf("4.EXIT\n");
        printf("Enter your choice:\n");
        scanf("%d",&opt);
        printf("\n");
        switch(opt)
        {
        case 1:
            enqueue();
            break;
        case 2:
            display();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid option entered!!\n");
            break;
        }
        printf("Would you like to continue?(y/n): ");
        scanf("%s",&ch);
        printf("\n");
    }
}
void enqueue()
{
    if((r==-1)&&(f==-1))
    {
        printf("QUEUE IS CURRENTLY EMPTY\n");
        printf("Enter the value into queue: ");
        scanf("%d",&val);
        r=0;
        f=0;
        q[r]=val;
    }
    else if((r+1)%max==f)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        printf("Enter the value into queue: ");
        scanf("%d",&val);
        r=(r+1)%max;
        q[r]=val;
    }
}
void dequeue()
{
    if((r==-1)&&(f==-1))
    {
        printf("QUEUE IS EMPTY, NO ELEMENTS CAN BE DELETED\n");
    }
    else if(r==f)
    {
        printf("The element deleted is %d\n",q[f]);
        r=-1;
        f=-1;
    }
    else
    {
        printf("The element deleted is %d\n",q[f]);
        f=(f+1)%max;
    }
}
void display()
{
    int i;
    if((r==-1)&&(f==-1))
    {
        printf("QUEUE IS EMPTY, NO ELEMENTS CAN BE DISPLAYED\n");
    }
    else
    {
        printf("The elements are: \n");
        for(i=f;i<=r;i++)
        {
            printf("%d\t",q[i]);
        }
        printf("\n");
    }
}
