//#include <stdio.h>
//
//int main(void) {
//    long long n, m, k;
//    scanf("%lli %lli %lli", &n, &m, &k);
//    // check if no mouths
//    if (m == 0) {
//        // check for the lowest rec cuz it's our limitation not to crate more
//        if (n / 2 <= k) {
//            printf("%lli", n / 2);
//        } else printf("%lli", k);
//        return 0;
//    } else if (n == 0 || k == 0) {
//        printf("0");
//        return 0;
//    }
//    long long max = 0;
//    while ((n / 2 > 0 && k > 0) || (k > 0 && m > 0 && n > 0)) {
//
//        if (n <= k && n <= m) {
//            max += n;
//            k -= n;
//            m -= n;
//            n = 0;
//        } else if (m <= k && m <= n) {
//            max += m;
//            n -= m;
//            k -= m;
//            m -= m;
//        } else {
//            max += k;
//            m -= k;
//            n -= k;
//            k -= k;
//        }
//        // check for the lowest rec cuz it's our limitation not to crate more
//        if (m == 0){
//            if (n / 2 <= k) {
//                max += n / 2;
//                k -= n / 2;
//                n = 0;
//            } else {
//                max += k;
//                n -= k * 2;
//                k = 0;
//            }
//        }
//    }
//    printf("%lli", max);
//}