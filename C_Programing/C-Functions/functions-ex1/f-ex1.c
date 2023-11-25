#include <stdio.h>
#include <string.h>

int checkPrime(int n){
    int i;
    for(i=2;i<=n/2;++i){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2,i,flag;
    printf("Enter two numbers (interval): ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1+1;i<n2;++i){
        flag=checkPrime(i);
        if(flag==1){
            printf("%d, ", i);
        }
    }
    system("pause");
}