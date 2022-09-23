#include<stdio.h>
    int main(){
        int n;
        printf("Enter the numbers upto you want to print square of : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("%d\n",i*i);
        }
        return 0;
    }
