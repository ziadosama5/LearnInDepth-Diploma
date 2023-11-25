#include <stdio.h>

int power(int n1,int n2);

int main(){
    int base,pow;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &pow);
    printf("%d^%d = %d\n", base, pow, power(base,pow));
    system("pause");
}
int power(int n1,int n2){
    if(n2!=0){
        return n1*power(n1,n2-1);
    }
    else{
        return 1;
    }
    
}