#include <stdio.h>

int main(){
    float data[100], sum=0.0, average;
    int i, n;
    printf("Enter the number of Data elements: ");
    scanf("%d", &n);
    while(n>100 || n<=0){
        printf("Error!, Invalid number of data elements\n");
        printf("Enter a valid number of Data elements: ");
        scanf("%d", &n);

    }
    for(i=0;i<n;i++){
        printf("element-%d: ", i+1);
        scanf("%f",&data[i]);
        sum += data[i];
    }
average = sum/n;
printf("Average = %.2f\n", average);
system("pause");    


}