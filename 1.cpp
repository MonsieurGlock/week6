#include <stdio.h>
int main(){
    int num,i,answer[30],p;
    printf("Enter Decimal Number : ");
    scanf("%d",&num);
    for(i=0 ; 1 ; i++){
        answer[i] = num%2;
        num = num/2;
        if(num == 0){
            p = i;
            break;}
    }
    for( ; p >= 0 ; p--){
        printf("%d ",answer[p]);}
    return 0;
}