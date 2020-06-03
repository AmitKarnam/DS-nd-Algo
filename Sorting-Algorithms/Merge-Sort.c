#include<stdio.h>
#include<stdlib.h>

void Merge(int *array,int *left,int *right,int leftcount,int rightcount)
{
    int i=0,j=0,k=0;

    while(i<leftcount && j<rightcount)
    {
        if(left[i]<right[j])
            array[k++] = left[i++];
        
        else
            array[k++] = right[j++];       
    }

    while(i<leftcount)
        array[k++] = left[i++];
    while(j<rightcount)
        array[k++] = right[j++];
}

void MergeSort(int *array,int length)
{
    int mid,i,*left,*right;
    if(length < 2)
        return;
    
    mid = length/2;

    left = (int *)malloc(mid*sizeof(int));
    right = (int *)malloc((length-mid)*sizeof(int));

    for(i=0;i<mid;i++)
        left[i] = array[i];

    for(i=mid;i<length;i++)
        right[i-mid] = array[i];

    MergeSort(left,mid);
    MergeSort(right,(length-mid));
    Merge(array,left,right,mid,length-mid);
    free(left);
    free(right);

}


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

    MergeSort(array,length);

    printf("\n\nWork of Megrge Sort (Sorted array).\n");      
    for(int i=0;i<length;i++)                               /* loop to print sorted loop */
        printf("%d ",array[i]);

}