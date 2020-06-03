#include<stdio.h>
void SelectionSort(int array[],int length);


void main()
{
    int length;
    printf("Enter the max length of array:");
    scanf("%d",&length);                                        /* input : maximum length of the array */

   int array[length];

    printf("Enter the elements of the array:");
    for(int i=0;i<length;i++)                                 /* Input : the elements of the array */
        scanf("%d",&array[i]);
    

    printf("\n\nUNSORTED ARRAY.\n");
    for(int i=0;i<length;i++)                                    /* loop to print unsorted loop */
        printf("%d ",array[i]);

    SelectionSort(array,length);

    printf("\n\nWork of Selection Sort (Sorted array).\n");      
    for(int i=0;i<length;i++)                                    /* loop to print sorted loop */
        printf("%d ",array[i]);

}

void SelectionSort(int array[],int length)                      /* A sort algorithm that repeatedly searches remaining items to 
                                                                    find the least one and moves it to it's location. */
{

   
    for(int i=0;i<(length-1);i++)                                 
    {
         int minimum_index = i;
        for(int j=(i+1);j<length;j++)
        {
            if(array[j]<array[minimum_index])
                minimum_index = j;
            
                 
        }

       int temp = array[i];
        array[i] = array[minimum_index];
        array[minimum_index] = temp;

    }
}


/* 

Example Output 
  
  Enter the max length of array: 4
  Enter the elements of the array:3 4 1 2

  UNSORTED ARRAY.
  3 4 1 2

  Work of Selection Sort (Sorted array).
  1 2 3 4
*/

