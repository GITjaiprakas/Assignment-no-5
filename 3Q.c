#include<stdio.h>
    int main(){
        int i,n;
        printf("Enter the natural numbers you want to print in reverse order : ");
        scanf("%d",&n);
        for(i=n;i>0;i--){
            printf("%d\n",i);
        }
        return 0;
    }
