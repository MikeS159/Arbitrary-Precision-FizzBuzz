#include <gmp.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    if(argc > 0) {
        mpz_t inputNum;
        mpz_init(inputNum);
        mpz_set_str(inputNum, argv[1], 10);
        if(!mpz_cmp_si(inputNum, 0)) {
            printf("Not a integer!\n");
            return 0;
        } if(mpz_divisible_ui_p(inputNum, 15)) {
            printf("FizzBuzz");
        } else if(mpz_divisible_ui_p(inputNum, 5)) {
            printf("Buzz");
        } else if(mpz_divisible_ui_p(inputNum, 3)) {
            printf("Fizz");
        } else {
            mpz_out_str(stdout, 10, inputNum);
        }  
        printf("\n");
    }
}