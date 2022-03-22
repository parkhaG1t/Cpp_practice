#include <stdio.h>

static char daytab[2][13] = {
    { 0, 31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31 }
};

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for ( i = 0; i < month; ++i){
        day += daytab[leap][i];

    }

    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for (i = 1; yearday > daytab[leap][i]; ++i) {
        yearday -= daytab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;

    return;
}

char *month_name(int n)
{
    static char *name[] = {
        "Illegal month",
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };

    return (n<1||n>12) ? name[0] : name[n];
}

int main(void){
    int day_year, year, month, day;

    year = 2021;
    month = 4;
    day = 30;
    day_year = day_of_year(year, month, day);
    printf("Day of year form %s & %d is %d.\n", 
            month_name(month), day, day_year);

    day_year = 200;
    
    month_day(year, day_year, &month, &day);
    printf("Month, day from day of year (%d) are %s and %d. \n",
            day_year, month_name(month), day);

    return 0;
}