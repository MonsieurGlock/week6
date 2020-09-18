#include <stdio.h>
int main(){
    int i,j,n;
    printf("How many numbers? : ");
    scanf("%d",&n);
    float l[n],remember,a;
    printf("Enter all numbers : ");
    for(i=0 ; i < n ; i++){
        scanf("%f",&l[i]);
    }
    for(i=0 ; i < n ; i++){
        printf("%.2f ",l[i]);
    }
    printf("\n");
    for(i=0 ; i < n ; i++){
        for(j = 0  ; j < n-i-1 ; j++ ){
            if(l[j] > l[j+1]){
                a = l[j];
                l[j] = l[j+1];
                l[j+1] = a;
            }
        }
    }
    for(i=0 ; i < n ; i++){
        printf("%.2f ",l[i]);
    }
    if(n%2 == 0){
        a = l[n/2] + l[(n/2)-1];
        a = a/2;
        printf("Median is : %.2f",a);
    }
    if(n%2 != 0){
        a = l[(n/2)];
        printf("Median is : %.2f",a);
    }
    return 0;
}