// Error shows:


// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     char name[50];
//     int rolNum;
//     struct SubMarks
//     {
//         int physics;
//         int maths;
//         int gujarati;
//     } sm;
// };

// void main()
// {
//     int n; // Total Number of student.
//     printf("Enter Number of Students: ");
//     scanf("%d", &n);

//     struct Student s[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nStudent %d\n", i + 1);

//         printf("Enter Student name: ");
//         gets(s[i].name);

//         printf("Enter Student rolNum: ");
//         scanf("%d", &s[i].rolNum);

//         printf("Enter Marks Physics: ");
//         scanf("%d", &s[i].sm.physics);

//         printf("Enter Marks Maths: ");
//         scanf("%d", &s[i].sm.maths);

//         printf("Enter Marks Gujarati: ");
//         scanf("%d", &s[i].sm.gujarati);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nStudent %d\n", i + 1);
//         printf("\nEnter Student name: ");
//         puts(s[i].name);
//         printf("\nEnter Student rolNum: %d", s[i].rolNum);
//         printf("\nEnter Marks Physics: %d", s[i].sm.physics);
//         printf("\nEnter Marks Maths: %d", s[i].sm.maths);
//         printf("\nEnter Marks Gujarati: %d", s[i].sm.gujarati);
//     }
// }
