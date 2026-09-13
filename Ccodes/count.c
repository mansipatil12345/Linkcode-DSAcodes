//comparison type 
//bubble selection insertion quick sort
//non comparison type
//counting sort - digits
//radix sort  - numbers

// 1.find max
// 2.make an array of length max and initialize every el with 0
// 3.and mark the count of every el
#include<stdio.h>
int getMax(int arr[],int len){
    //2,3,4,5,1,2,3
    int max = arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void countingSort(int arr[],int len){
    //2,3,4,5,1,2,3
    //1.find max element
    int max = getMax(arr,len);
    //2.create count array
    int count[max+1];
    //3.initialize zero
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }
    //4.store count of original digits
    for(int i=0;i<len;i++){
        count[arr[i]]++;
    }
    //5.update the original array
    int index=0; //iterate orginal array
    int i=0; //to traverse count arr
    for(i=0;i<max+1;i++){
        while(count[i]>0){
            arr[index]=i;
            count[i]--;
            index++;
        }
    }
}
void display(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={2,9,4,5,1,7,2};
    int len = 7;
    printf("Before Sorting:     ");
    display(arr,len);
    countingSort(arr,len);
    printf("\nAfter Sorting:    ");
    display(arr,len);
}

