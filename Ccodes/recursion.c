#include<stdio.h>
void count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    printf("\n%d ",n);
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    count(n);
}