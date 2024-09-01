#include <stdio.h>

int main() {
    float maths_marks, english_marks, science_marks;
    float average;

    printf("Enter maths marks: ");
    scanf("%f", &maths_marks);
    
    printf("Enter english marks: ");
    scanf("%f", &english_marks);
    
    printf("Enter science marks: ");
    scanf("%f", &science_marks);

    average = (maths_marks + english_marks + science_marks) / 3;

    printf("Average mark: %.2f\n", average);

}