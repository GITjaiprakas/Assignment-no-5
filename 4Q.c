#include<stdio.h>
    int main(){
        int n;
        printf("Enter the odd numbers you want : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("%d\n",2*i-1);
        }
        return 0;
    }
