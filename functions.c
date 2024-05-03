#include <stdio.h>
int add(int a, int b); //defining the function
int main(){
    int result= add(1234,2);
    printf("Result: %d", result);
    return 0;
}
    int add(int a, int b){
    return a+b;
}
//from this i can see that basically, when dealing with C functions, the first thing to do is to deine the function with its arguments before int main
//next, we go outside int main and write the code of the function no need to put 'return' there, just write exactly what you want the function to do, don't assign it to any variable yet
//finally, you assign the result of the function in a variable in the int main() and printf that variable

 