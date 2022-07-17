#include<stdio.h>
void BubbleSort(int a[],int);

void main()
{
     int length;
     printf("Enter the max length of array:");
     scanf("%d",&length);                                     /* input :  maximum length of the array */

   int array[length]; 

     printf("Enter the elements of the array:");                
     for(int i=0;i<length;i++)                               /* input : the lemets of the array */
          scanf("%d",&array[i]);
    

    printf("\n\nUNSORTED ARRAY.\n");
    for(int i=0;i<length;i++)                                /* loop print unsorted loop */
        printf("%d ",array[i]);

    BubbleSort(array,length);

    printf("\n\nWork of Bubble Sort (Sorted array).\n");      
    for(int i=0;i<length;i++)                               /* loop to print sorted loop */
        printf("%d ",array[i]);

}

void BubbleSort(int array[],int length)                    /*  Bubble sort, sometimes referred to as sinking sort, 
                                                            is a simple sorting algorithm that repeatedly parses through the list, 
                                                            compares adjacent elements and swaps them if they are in the wrong order.  */
{
    for(int i=0;i<=(length-1);i++)
    {
        int flag = 0;                                      /* flag variable is used to improve the time complexity of the program */
        for(int j=0;j<=(length-i-1);j++)                   /* As the inner loop runs the highest element's start settling at the end of the array */
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j]=temp;
                flag+=1;
                
            }
        }

        if(flag == 0)
            break;
    }
}

/* 

Example Output 
  
  Enter the max length of array: 4
  Enter the elements of the array:5 4 7 2

  UNSORTED ARRAY.
  5 4 7 2

  Work of Bubble Sort (Sorted array).
  2 4 5 7
*/

/* How Bubble sort works

Unsorted array : 5 4 7 2

i=1;
j=0 -> array = 4 5 7 2
j=1 -> array = 4 5 7 2
j=2 -> array = 4 5 2 7

i=2;
j=0 -> array = 4 5 2 7
j=1 -> array = 4 2 5 7

i=3;
j=0 -> array = 2 4 5 7

*/
