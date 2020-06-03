#include<stdio.h>
void InsertionSort(int a[],int);

void main()
{
     int length;
     printf("Enter the max length of array:");
     scanf("%d",&length);                                     /* input :  maximum length of the array */

   int array[length]; 

     printf("Enter the elements of the array:");                
     for(int i=0;i<length;i++)                               /* input : the elemets of the array */
          scanf("%d",&array[i]);
    

    printf("\n\nUNSORTED ARRAY.\n");
    for(int i=0;i<length;i++)                                /* loop print unsorted loop */
        printf("%d ",array[i]);

    InsertionSort(array,length);

    printf("\n\nWork of Insertion Sort (Sorted array).\n");      
    for(int i=0;i<length;i++)                               /* loop to print sorted loop */
        printf("%d ",array[i]);

}

void InsertionSort(int array[],int length)                    /*  Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. 
                                                                  It is much less efficient on large lists than more advanced algorithms such as 
                                                                  quicksort, heapsort, or merge sort.  */
{
    for(int i=1;i<length;i++)
    {
        int x = i;
        while (x != 0)
        {
            if(array[x]<array[x-1])
                {
                    int temp = array[x-1];
                    array[x-1] = array[x];
                    array[x] = temp;
                 }

                x--;
        }
        
    }
}

/* 

Example Output 
  
Enter the max length of array:5
Enter the elements of the array:2 10 5 17 1


UNSORTED ARRAY.
2 10 5 17 1

Work of Insertion Sort (Sorted array).
1 2 5 10 17

*/


/* How Insertion works

i=1 ; x=1
array = 2 10 5 17 1

i=2; 
x=2 -> array = 2 5 10 17 1
x=1 -> array = 2 5 10 17 1

i=3;
x=3 -> array = 2 5 10 17 1
x=2 -> array = 2 5 10 17 1
x=1 -> array = 2 5 10 17 1

i=4;
x=4 -> array = 2 5 10 1 17
x=3 -> array = 2 5 1 10 17
x=2 -> array = 2 1 5 10 17
x=1 -> array = 1 2 5 10 17

*/