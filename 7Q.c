#include<stdio.h>
    int main(){
        int n;
        printf("Enter even natural numbers you want in reverse order : ");
        scanf("%d",&n);
        for(int i=n;i>0;i--){
            printf("%d\n",i*2);
        } 
        return 0;
    }
