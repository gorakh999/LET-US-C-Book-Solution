// QUESTION B

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char * str[] = {

//         "We will teach you how to...",
//         "Move a mountain",
//         "Level a building",
//         "Erase the past",
//         "Make a million",
//         "...all through C!"

//     };
//     char str1[20];
//     char * p;

//     printf("Enter String : ");
//     scanf("%s", str1);

//     for (int i = 0; i < 6; i++)
//     {
//         p = strstr(str[i], str1);
//         if (p){
//             printf("Found...\n");
//             break;
//         }
//     }
    
//     return 0;
// }



// QUESTION C

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char *str[] = {

//         "Ramesh",
//         "Abhishek",
//         "Arun",
//         "Zisan",
//         "Suresh"
//     };

//     char * t;

//     printf("Before Sorting...\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\n", str[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//             if (strcmp(str[i], str[j]) > 0){
//                 t = str[j];
//                 str[j] = str[i];
//                 str[i] = t;
//             }
//         }
//     }
//     printf("\nAfter Sorting...\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\n", str[i]);
//     }
    
    
//     return 0;
// }


