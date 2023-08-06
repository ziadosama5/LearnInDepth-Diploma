#include <stdio.h>

int main(){
    int a[100];
    int x, element,location;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        printf("%d ", a[i]=i+1);
    }
    printf("\n Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("\n Enter the location where you wish to insert an element: ");
    scanf("%d", &location);
    for(int i=0; i<x;i++){
        if(i==location-1){
            a[i]=element;
        }
    }
    for(int i=0;i<x;i++){
        printf("%d ", a[i]);
    }

    system("pause");
    

}