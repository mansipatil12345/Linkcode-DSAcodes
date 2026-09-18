#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int *a = (int *)malloc(size*sizeof(int));

    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}