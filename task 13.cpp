#include <stdio.h>
#include <stdio.h>

int main()
{
    int array[7];
    int max,min,i;
    printf("Enter the elements in the array:\n");
    for(i=0;i<7;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(i=0;i<7;i++){
        if(array[i]>=max){
            max=array[i];

        }
        if(array[i]<=min){
            min=array[i];
        }
    }
    for(i=0;i<7;i++){
    printf("The array element%d is %d\n",i+1,array[i]);}
    printf("The maximum is %d,while the minimum is %d",max,min);
    return 0;
}
