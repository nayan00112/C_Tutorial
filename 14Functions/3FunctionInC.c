// Function with argument and without return value.

#include <stdio.h>
void Instructions(int);
void main()
{
    int c;
    printf("Hello all...\n");
    printf("code 1: Coronavirus disease (COVID-19).\n");
    printf("code 2: Clinical Guidance for COVID-19 Vaccination.\n");
    printf("code 3: COVID-19: Immunity boosters you can make at home.\n");

    printf("Enter your choice code (1 or 2 or 3): ");
    scanf("%d", &c);
    
    printf("\n");
    Instructions(c);
}

void Instructions(int a)
{
    switch (a)
    {
    case 1:
        printf("Coronavirus disease (COVID-19) is an infectious disease caused by the SARS-CoV-2 virus. \nMost people infected with the virus will experience mild to moderate respiratory illness and recover without requiring special treatment. \nHowever, some will become seriously ill and require medical attention.\n");
        break;
    case 2:
        printf("COVID-19 vaccination is recommended for everyone ages 5 years and older in the United States for the prevention of COVID-19. \nThe age groups approved under BLA or authorized under EUA to receive vaccination vary by vaccine produc.\n");
        break;
    case 3:
        printf("Sadhguru shares a few ways to naturally boost immunity over time. \nDonate to Beat The Virus Table of Content 1. Neem 2. Turmeric 3. Mahavilva Leaves 4.\n");
        break;
    default:
        printf("invalid choise.");
        break;
    }
}


/*
Output:

Hello all...
code 1: Coronavirus disease (COVID-19).
code 2: Clinical Guidance for COVID-19 Vaccination.
code 3: COVID-19: Immunity boosters you can make at home.
Enter your choice code (1 or 2 or 3): 3

Sadhguru shares a few ways to naturally boost immunity over time.
Donate to Beat The Virus Table of Content 1. Neem 2. Turmeric 3. Mahavilva Leaves 4.
*/