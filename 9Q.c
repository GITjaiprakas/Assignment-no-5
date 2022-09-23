#include<stdio.h>
    int main(){
        int n;
        printf("Enter the number of cubes you want : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("%d\n",i*i*i);
        }
        return 0;
    }
