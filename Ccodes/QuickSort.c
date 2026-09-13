#include<stdio.h>
int pivot(int arr[],int start,int end){
    int pindex = arr[end];
    int j =start-1;
    for(int i=start;i<end;i++){
        if(arr[i]<pindex){
            j++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }   
    }
    j++;

    int temp = arr[j];
    arr[j]=arr[end];
    arr[end]=temp;

    return j;
}
void partition(int arr[],int start,int end){
    if(start<end){
        int pindex = pivot(arr,start,end);
        //left
        partition(arr,start,pindex-1);
        //right
        partition(arr,pindex+1,end);
    }
}
void display(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={2,4,5,1,3};
    int len = 5;
    printf("\nBefore Sorting: ");
    display(arr,len);
    partition(arr,0,len-1);
    printf("\nAfter Sorting: ");
    display(arr,len);

}
