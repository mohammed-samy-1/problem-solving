//#include <stdio.h>
//const int days_per_year = 365;
//const int days_per_month = 30;
//int count_years(int days);
//int count_months(int days);
//int main(void) {
//    int days;
//    scanf("%i", &days);
//    int years = count_years(days);
//    days -= years * days_per_year;
//    int months = count_months(days);
//    days -= months * days_per_month;
//    printf("%i years\n%i months\n%i days",years,months,days);
//    return 0;
//}
//
//int count_years(int days){
//    if (days < days_per_year)
//        return 0;
//    return days / days_per_year;
//}
//int count_months(int days){
//    if (days < days_per_month)
//        return 0;
//    return days / days_per_month;
//}