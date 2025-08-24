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

void difference(date d1, date d2, int *y, int *m, int *d) {
    // Ensure d1 is always the later date
    if (compare(d1, d2) == -1) {
        date temp = d1;
        d1 = d2;
        d2 = temp;
    }

    // Calculate the difference in days
    if (d1.dd < d2.dd) {
        d1.dd += 30; // agar d1 chota hai to d1 mai 30 din add honge aur month se 1 month kam hoga
        d1.mm--;
    }
    *d = d1.dd - d2.dd;

    // Calculate the difference in months
    if (d1.mm < d2.mm) {
        d1.mm += 12; // agar d1 ka month chota hai to d1 mai 12 month add honge aur year se 1 year kam hoga
        d1.yyyy--;
    }
    *m = d1.mm - d2.mm;

    // Calculate the difference in years
    *y = d1.yyyy - d2.yyyy;
}

int main() {
    int y, m, d;
    date d1 = {7, 11, 2006};
    date d2 = {23, 10, 2008};

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