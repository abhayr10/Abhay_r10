#include<stdio.h>
#include<stdlib.h>
int q[30],rear=-1,front=-1,val,max,opt; 
int main()
{
     char ch='y';
    printf("Enter the QUEUE size:");     //Asking the size of the queue from the user.
    scanf("%d",&max);
    printf("\n");
    for( ;ch=='y'; )                    //for loop to repeat the process of menu driven program multiple times.
    {
        printf("MENU\n");
        printf("1.ENQUEUE\n");
        printf("2.DISPLAY\n");
        printf("3.DEQUEUE\n");
        printf("4.EXIT\n");
        printf("Enter your choice:\n");
        scanf("%d",&opt);
        printf("\n");
        switch(opt)                //switch cases for enqueue, display, dequeue and exit options respectively.
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
void enqueue()//ENQUEUE OPERATION
{
    if((rear==-1)&&(front==-1))                   //First Case:  When the queue is empty
    {
        printf("QUEUE IS CURRENTLY EMPTY\n");
        printf("Enter the value into queue: ");
        scanf("%d",&val);
        rear=0;
        front=0;
        q[rear]=val;
    }
    else if((rear+1)%max==front)                  //Second case: When rear end is equal to front end after the concept of circular queue happens.
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        printf("Enter the value into queue: ");
        scanf("%d",&val);
        rear=(rear+1)%max;
        q[rear]=val;
    }
}
void dequeue()                //DEQUEUE OPERATION
{
    if((rear==-1)&&(front==-1))              //When there are no elements in the queue initially
    {
        printf("QUEUE IS EMPTY, NO ELEMENTS CAN BE DELETED\n");
    }
    else if(rear==front)
    {
        printf("The element deleted is %d\n",q[front]);
        rear=-1;
        front=-1;
    }
    else
    {
        printf("The element deleted is %d\n",q[front]);
        front=(front+1)%max;
    }
}
void display()                //DISPLAY OPERATION
{
    int i;
    if((rear==-1)&&(front==-1))
    {
        printf("QUEUE IS EMPTY, NO ELEMENTS CAN BE DISPLAYED\n");
    }
    else
    {
        printf("The elements are: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",q[i]);
        }
        printf("\n");
    }
}
