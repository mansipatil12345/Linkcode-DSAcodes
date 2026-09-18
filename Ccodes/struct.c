#include<stdio.h>
struct watch{
    char name[10];
    float price;
    char color[10];
};
int main(){
    int n;
    printf("\nEnter the no of Student:  ");
    scanf("%d",&n);
    struct watch w1[n];

    for(int i=0;i<n;i++){
        printf("\nEnter the watch details: %d\n",(i+1));
        printf("\nEnter the name of watch:  ");
        scanf("%s",w1[i].name);
        printf("\nEnter the color of watch:  ");
        scanf("%s",w1[i].color);
        printf("\nEnter the price of watch:  ");
        scanf("%f",&w1[i].price);
    }

    printf("\n------------------------------WATCH DETAILS----------------------------");
    for(int i=0;i<n;i++){
        printf("\nThe name of the watch is: %s\n",w1[i].name);
        printf("\nThe color of the watch is: %s\n",w1[i].color);
        printf("\nThe price of the watch is: %f\n",w1[i].price);
        printf("\n-------------------------------------------------------------------");
    }
    printf("\n=========================================================================");
    
}