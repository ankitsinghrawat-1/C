#include <stdio.h>

typedef struct Date
{

    int dd, mm, yyyy;
} date;

int compare(date d1, date d2);

int compare(date d1, date d2)
{
    if (d1.yyyy > d2.yyyy)
        return 1;
    else if (d1.yyyy < d2.yyyy)
        return -1;
    else
    {
        if (d1.mm > d2.mm)
            return 1;
        else if (d1.mm < d2.mm)
            return -1;
        else
        {
            if (d1.dd > d2.dd)
                return 1;
            else if (d1.dd < d2.dd)
                return -1;
            else
                return 0;
        }
    }
}

int main()
{
    date d1 = {0};
    date d2 = {0};
    compare(d1, d2);
    if (compare(d1, d2) == 1)
        printf("Date 1 is later than Date 2\n");
    else if (compare(d1, d2) == -1)
        printf("Date 1 is earlier than Date 2\n");
    else
        printf("Both dates are the same\n");
    return 0;
}