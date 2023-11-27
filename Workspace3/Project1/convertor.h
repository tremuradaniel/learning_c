#include <stdio.h>

void convertMinutes(int minutes) {
    double years, days;
    
    const int DAY_IN_MINUTES = 1440;
    const int YEAR_IN_MINUTES = DAY_IN_MINUTES * 365;
    
    days = minutes / DAY_IN_MINUTES;
    years = days / YEAR_IN_MINUTES;
    
    printf("Years: %lf \n", years);
    printf("Days: %lf", days);
}
