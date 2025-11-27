#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Declare variables
    char name[10]; // Array to store name (max 9 characters + '\0')
    char mobile_nbr[10] // Array to store phone number (max 9 chars + '\0')
    int day,month,year;// Integers for date of birth
    // --- Read Name ---
    printf("=== Enter your name ===\n\n ");
    // Use %9s to prevent buffer overflow (array is 10)
    // Do NOT use &name because name is already an array (pointer to first element)
    scanf(" %9s",name);
    // --- Read Date of Birth ---
    printf("\n=== Enter your DOB(DD/MM/YYYY) ===\n\n "); /*DOB=date of birth*/
    // Use %d/%d/%d so the user can type date like 12/05/2006
    // Add space before first %d if you notice skipping issues after previous scanf
    scanf(" %d/%d/%d",&day, &month, &year);
    // --- Read Phone Number ---
    printf("\n=== Enter your phone number ===\n\n");
    // Use %9s for max 9 characters + null terminator
    // Do NOT use &mobile_nbr
    scanf(" %9s",mobile_nbr);

    printf("\n\n");
    system("pause");// Pause the program just on Windows!! to see the output
    // --- Print entered information ---
    printf("\n==== Name ====\n\n \t%s \n",name);// %s prints strings
    printf("\n==== DOB ====\n\n \t%d/%d/%d \n",day,month,year);// %d prints integers
    printf("\n=== Phone number ====\n\n \t%s \n",mobile_nbr);//same %s

    printf("\n\nPress any key to exit...");
    getchar();// Wait for a final key press
    return 0;

    /*C program to print your name, date of birth, and mobile number.*/

}

