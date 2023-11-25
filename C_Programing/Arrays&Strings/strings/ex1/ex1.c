#include <stdio.h>

int main(){
    char a[100], ch;
    int count=0,i;
    printf("Enter a string: ");
    scanf("%s", &a);
    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);
    for(i=0;a[i]!='\0';i++){
        if(ch==a[i]){
            count++;
        }
    }
    printf("Frequency of %c = %d\n", ch, count);
    system("pause");
}