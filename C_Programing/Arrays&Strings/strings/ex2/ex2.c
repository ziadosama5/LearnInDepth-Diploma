#include <stdio.h>

int main(){
    char a[100];
    int i=0;
    printf("Enter a string: ");
    scanf("%s", &a);
    while(a[i]!='\0'){
        i++;
    }
    printf("Length of string: %d\n", i);
    system("pause");
}