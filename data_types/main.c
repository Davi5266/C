#include <stdio.h>
#include <stdlib.h>

int main(){
    // types data and modifications basic types
    // five data types: char, double, float, int, void
    // modificators types: signed, unsigned, long, short
    // char type
    char text01; // -127 a 127
    unsigned char text02; // 0 a 255
    signed char text03; // -127 a 127
    
    // int type
    int int_number01; // -32.767 a 32.767
    unsigned int int_number02; // 0 a 65.535
    signed int int_number03; // -32.767 a 32.767
    short int int_number04; // -32.767 a 32.767
    unsigned short int_number05; // 0 a 65.535
    signed short int int_number06; // -32.767 a 32.767
    long int int_number07; // -2.147.483.647 a 2.147.483.647
    signed long int int_number08; // -2.147.483.647 a 2.147.483.647
    unsigned long int int_number09; // 0 a 4.294.967.295
    
    //float type
    float float_number01; // six digits
    
    // double type
    double double_number01; // ten digits
    long double double_number02; // ten digits

    // void type
    // using in functions that not return values
    // void teste(void){
    //      int i = 90;
    //      printf("teste %d\n",i);
    //
    //}
    return 0;
}