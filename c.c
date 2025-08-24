#include <stdio.h>

typedef struct Date {
    int dd, mm, yyyy;
} date;


int compare(date d1, date d2) {
    if (d1.yyyy > d2.yyyy)
        return 1;
    else if (d1.yyyy < d2.yyyy)
        return -1;
    else {
        if (d1.mm > d2.mm)
            return 1;
        else if (d1.mm < d2.mm)
            return -1;
        else {
            if (d1.dd > d2.dd)
                return 1;
            else if (d1.dd < d2.dd)
                return -1;
            else
                return 0;
        }
    }
}


int isLeapYear(int year) {

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}

void difference(date d1, date d2, int *y, int *m, int *d) {
    // Ensure d1 is always the later date
    if (compare(d1, d2) == -1) {
        date temp = d1;
        d1 = d2;
        d2 = temp;
    }

    // Days in each month (non-leap year)
    
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year in d1 and d2
    if (isLeapYear(d1.yyyy)) {
        monthDays[1] = 29; 
    }
    if (isLeapYear(d2.yyyy)) {
        monthDays[1] = 29; 
    }


    if (d1.dd < d2.dd) {
        d1.dd += monthDays[d2.mm - 1]; // Borrow days from the previous month
        d1.mm--;
    }
    *d = d1.dd - d2.dd;

    if (d1.mm < d2.mm) {
        d1.mm += 12; // Borrow months from the previous year
        d1.yyyy--;
    }
    *m = d1.mm - d2.mm;

    *y = d1.yyyy - d2.yyyy;
}

int main() {
    int y, m, d;
    date d1, d2;


    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.dd, &d1.mm, &d1.yyyy);


    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.dd, &d2.mm, &d2.yyyy);

    if (compare(d1, d2) == 1)
        printf("Date 1 is later than Date 2\n");
    else if (compare(d1, d2) == -1)
        printf("Date 1 is earlier than Date 2\n");
    else
        printf("Both dates are the same\n");

    difference(d1, d2, &y, &m, &d);
    printf("Difference between two dates is %d years, %d months, and %d days\n", y, m, d);

    return 0;
}