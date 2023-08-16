//#include <stdio.h>
//
//int main(void) {
//    long long a, b, c, d;
//
//    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//
//    // it wont work to multiply large numbers cuz of memory limitations so we multiply the first 2 digits which provides same first 2 digits
//    long long product = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
//
//    printf("%02lld", product);
//
//    return 0;
//}
//
