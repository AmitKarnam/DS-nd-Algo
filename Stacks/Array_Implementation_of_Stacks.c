#include<stdio.h>
#define Max_size 101
int array[Max_size];
int top = -1;
int returntop();

void push(int x)
{
    if(top == Max_size-1){
        printf("Stack Overflow!\n");
        return;
    }
    
    array[++top] = x;
}

void pop()
{
    if(top == -1){
        printf("Error! Can't pop as stack empty.");
        return;
    }

    top--;
}

int returntop()
{
    return(top);
}


void print()
{
    printf("STACK:\n");
    for(int i=(top);i>  =0;i--)
        printf("Stack data:%d\n",array[i]);
}
int main()
{
    push(2);
    push(4);
    pop();
    push(10);
    
    print();
}