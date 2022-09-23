#include<stdio.h>
    int main(){
        int n;
        printf("Enter the even numbers you want : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("%d\n",i*2);
        }
        return 0;
    }
