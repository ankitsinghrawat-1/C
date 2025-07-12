#include <stdio.h>

int main() 
{
    int phy, chem, maths, mark, marks;
    printf("Enter your physics marks: ");
    scanf("%d", &phy);
    printf("Enter your chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter your maths marks: ");
    scanf("%d", &maths);
    mark = phy + chem + maths;
    marks = mark/3;

    if (phy < 33 || chem < 33 || maths < 33) {
        printf("You have failed in one or more subjects.\n");
        if (marks < 40) {
            printf("You have failed overall as well.\n");
        } else {
            printf("You have passed overall but failed in one or more subjects.\n");
        }
    } else {
    }
        printf("You have passed all subjects.\n");
    
    return 0;
}