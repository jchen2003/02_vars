#include <stdio.h>

int main(){
    // Testing out printf and %p.
    // No idea what %p is after tests though.
    // 100 gives 0x64 but 3 gives 0x3 and 4 is 0x4. Like what??
    printf("I like to eat %ld %s. %p\n",23,"apples",100);

    // Test char. 
    char x = '3';
    printf("%c\n",x);
    printf("%c\n",x+8);

    // Test unsigned variables
    // That's weird. It should be 2^16-1 but -1 was printed.
    unsigned int y = -1;
    printf("%d\n",y);

    // Test limits of floats and shorts
    // Looks like it rounds up for floats.
    short z = 32768;
    float ran_out_of_cool_letters = 3.1415926; // one more digit than allowed

    //having to type \n so much is pretty annoying >:(

    printf("%hi\n",z);
    printf("%f\n",ran_out_of_cool_letters);
    
    return 0;

}
