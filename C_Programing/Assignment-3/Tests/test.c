#include <stdio.h>
#include <string.h>

int main(){
    long double a ;
    signed char b;
    int arr[sizeof(!a+b)];
    printf("%d",sizeof(arr));
    system("pause");

}