/*************************************************************************
	> File Name: E0003.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 3 11:05:52 2019
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#define MAX_N 600851475143

int main() {
    int64_t num = MAX_N;
    int64_t max_prime;
    for (int64_t i = 2; i * i <= MAX_N; i++) {
        while (num % i == 0){
            num /= i;
            max_prime = i;
        }
    }
    if (num != 1) max_prime = num;
    printf("%"PRId64"\n", max_prime);
    return 0;
}
