//#include <stdio.h>
//
//int main(void) {
//    int arr[3];
//    int sorted[3];
//    scanf("%i %i %i",&arr[0], &arr[1], &arr[2]);
//    for (int i = 0; i < 3; ++i) {
//        sorted[i] = arr[i];
//    }
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            if (sorted[j] > sorted[j+1]) {
//                int temp = sorted[j];
//                sorted[j] = sorted[j+1];
//                sorted[j+1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < 3; ++i) {
//        printf("%i\n", sorted[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < 3; ++i) {
//        printf("%i\n", arr[i]);
//    }
//    return 0;
//}