#include <gmp.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    int fizz = 3;
    int buzz = 5;
    int fizzBuzz = fizz * buzz;
    if(argc > 1) {
        mpz_t inputNum;
        mpz_init(inputNum);
        mpz_set_str(inputNum, argv[1], 10);
        if(!mpz_cmp_si(inputNum, 0)) {
            printf("Not a integer!\n");
            return 0;
        } if(mpz_divisible_ui_p(inputNum, fizzBuzz)) {
            printf("FizzBuzz");
        } else if(mpz_divisible_ui_p(inputNum, buzz)) {
            printf("Buzz");
        } else if(mpz_divisible_ui_p(inputNum, fizz)) {
            printf("Fizz");
        } else {
            mpz_out_str(stdout, 10, inputNum);
        }
        printf("\n");
    }
}
