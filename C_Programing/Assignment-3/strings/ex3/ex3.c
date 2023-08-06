#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], temp;
    int i=0, j=0;
    printf("Enter a string: ");
    gets(a);
    //scanf("%s", &a);

    j=strlen(a)-1;
    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("Reverse of string: %s\n", a);
    system("pause");
}
//     for(int j=0;j<i;j++){
//         b[j]=a[i-j-1];
//     }
//     printf("Reverse of string: %s\n", b);
//     system("pause");

// }
