#include <stdio.h>
int main() {
    float Sum= 0;
    float N[10]={0};//Initializing zll numbers of the array to 0 so they can be filled later by the scanf
    for(int i= 0; i<10; i++){
        printf("Put up to ten number values: ");//doing this cuz the scanf function ALONE can ask the user for an input prompt, unlike input function in python. So you have to write a printf first
        scanf("%f", &N[i]);
        Sum= Sum + N[i];
    }
    float Ave= Sum/ 10; //Declaring the Ave variable here and at the same time, givinh it its value

printf("Average of the numbers: %.2f\n", Ave);
return 0;
}
