#include<stdio.h>
#include<string.h>
struct watch{
    char name[10];
    float price;
    char color[10];
};

void insertnewwatch(int n,struct watch w[]){
    for(int i=0;i<n;i++){
        printf("\nEnter the watch details: %d\n",(i+1));
        printf("\nEnter the name of watch:  ");
        scanf("%s",w[i].name);
        printf("\nEnter the color of watch:  ");
        scanf("%s",w[i].color);
        printf("\nEnter the price of watch:  ");
        scanf("%f",&w[i].price);
    }
}

void displayallwatch(int n,struct watch w[]){
    printf("\n------------------------------WATCH DETAILS----------------------------");
    for(int i=0;i<n;i++){
        printf("\nThe name of the watch is: %s\n",w[i].name);
        printf("\nThe color of the watch is: %s\n",w[i].color);
        printf("\nThe price of the watch is: %f\n",w[i].price);
        printf("\n-------------------------------------------------------------------");
    }
    printf("\n=========================================================================");
}

void updatewatchdetail(int n,struct watch w[]){
    char newname[10];
    printf("\nEnter the name of the watch for which you want to edit the details: ");
    scanf("%s",newname);
    int flag = 0;
    for(int i=0;i<n;i++){
        if(strcmp(w[i].name,newname)==0){
            printf("\nEnter the new name: ");
            scanf("%s",w[i].name);
            printf("\nEnter the updated price:  ");
            scanf("%f",&w[i].price);
            printf("\nEnter the updated color:  ");
            scanf("%s",&w[i].color);
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nUpdated the details successfully!");
    }else{
        printf("\nNo records found!");
    }
}

int deletewatchdetail(int n,struct watch w[]){
    char newname[10];
    printf("\nEnter the name of the watch for which you want to edit the details: ");
    scanf("%s",newname);
    int flag = 0;
    for(int i=0;i<n;i++){
        if(strcmp(w[i].name,newname)==0){
            for(int j=i;j<n-1;j++){
                w[j]=w[j+1];
            }
            flag = 1;
            n--;
            break;
        }
    }
    if(flag==1){
        printf("\nDeleted successfully!");
    }else{
        printf("\nRecord Not Found!");
    }
    return n;
}

int main(){
    int n;
    printf("\nEnter the no of Watch:  ");
    scanf("%d",&n);
    struct watch w[n];
    int choice;
    do{
    printf("\n1.Insert\n2.Display\n3.Update\n4.Delelte\n5.Exit");
    printf("\nEnter your choice:    ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        insertnewwatch(n,w);
        break;

        case 2:
        displayallwatch(n,w);
        break;

        case 3:
        updatewatchdetail(n,w);
        break;

        case 4:
        n=deletewatchdetail(n,w);
        break;

        case 5:
        printf("\nExiting the program....");
        break;
        
        default:
        printf("\nInvalid choice!");
        
    }
    }while(choice!=5);
    
    return 0;
}