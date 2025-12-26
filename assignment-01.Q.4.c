#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    int total_marks;
    float percentage;

    printf("Enter marks for five subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);


      total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = ((float)total_marks / 500) * 100;

    printf("\nAggregate Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);





    }


