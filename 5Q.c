#include<stdio.h>
    int main(){
        int n;
        printf("Enter the odd numbers you want in reverse order : ");
        scanf("%d",&n);
        for(int i=n;i>0;i--){
            printf("%d\n",i*2-1);
        } 
        return 0;
    }
