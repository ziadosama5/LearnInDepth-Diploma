#include <stdio.h>

struct Complex {
    float real;
    float img;
};

struct Complex addComplex(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    return result;
};

int main(){
    struct Complex c1,c2,result;

    printf("For the first complex number\n");
    printf("Enter real and imaginary respectively\n");
    scanf("%f %f", &c1.real, &c1.img);

    printf("For the second complex number\n");
    printf("Enter real and imaginary respectively\n");
    scanf("%f %f", &c2.real, &c2.img);

    result = addComplex(c1, c2);
    printf("Sum = %.1f + %.1fi\n",result.real, result.img);

    system("pause");
    
}