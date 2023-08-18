//#include <stdio.h>
//
//int main(void) {
//    long long n, m, k;
//    scanf("%lli %lli %lli", &n, &m, &k);
//    double dNum =  ((double)n *(double) m) / (double) k;
//    long long iNum =  (n * m) /  k;
//    if (dNum - iNum > 0.000001) {
//        printf("double");
//    } else {
//        if (iNum > 2147483647 || iNum < -2147483648){
//            printf("long long");
//        } else{
//            printf("int");
//        }
//    }
//}