#include <stdio.h>

int main(){
    int a[100];
    int number,search,location=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &number);
    //printf("\nEnter the valuse of the array:");
    for(int i=0;i<number;i++){
        //scanf("%d", &a[i]);
        printf("%d \t", a[i]=(i+1)*11);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &search);

   int i=0;
    while(i<number && search!=a[i]){
        i++;
        location++;
    }
    if (number>i){
        printf("\n%d is present at location %d \n", search, location+1);
    }
    else{
        printf("\n%d is not present in the array", search);
    }
    
    system("pause");
}