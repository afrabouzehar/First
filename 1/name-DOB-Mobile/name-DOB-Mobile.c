#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[10], mobile_nbr[10];
    int day, month, year;

    printf("=== Enter your name ===\n");
    scanf("%9s", name);

    printf("=== Enter your DOB (DD/MM/YYYY) ===\n");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("=== Enter your phone number ===\n");
    scanf("%9s", mobile_nbr);

    // Print results
    printf("\n=== Name ===\n%s\n", name);
    printf("=== DOB ===\n%d/%d/%d\n", day, month, year);
    printf("=== Phone number ===\n%s\n", mobile_nbr);

    // Only ONE pause
    printf("\nPress ENTER to exit...");
    getchar();     // clears leftover newline
    getchar();     // waits for final ENTER

    return 0;
}
