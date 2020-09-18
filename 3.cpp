#include <stdio.h>
int main(){
    int n,i,j;
    printf("How many numbers ? :");
    scanf("%d",&n);
    int num[n];
    printf("Enter numbers  : ");
    for(i = 0 ; i < n ; i++){
        scanf("%d",&num[i]);
    }
    for(i = 0 ; i <= 9 ; i++){
        printf("%d ",i);
        for(j = 0; j <= n ; j++){
            if(num[j] == i){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}