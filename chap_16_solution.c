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



// QUESTION D

// #include<stdio.h>
// #include<string.h>


// void swap_char(char *a, char * b){
//     char c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }

// void reverse(char arr[]){
//     int length = strlen(arr);
//     for (int i = 0, j = length-1; i <= j; i++, j--)
//     {
//         swap_char(&arr[i], &arr[j]);
//     }
    
// }

// int main(){

//     char *str[] = {

//         "Ramesh",
//         "Abhishek",
//         "Arun",
//         "Zisan",
//         "Suresh"
//     };
    

//     for (int i = 0; i < 5; i++)
//     {
//         reverse(str[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\n", str[i]);
        
//     }


//     return 0;
// }




// QUESTION E

// #include<stdio.h>

// int isVowel(char c){
//     if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u'){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main(){

//     char str[80], str1[80];
//     char *s, *p;

//     s = str;
//     p = str1;

//     printf("Enter Sentence : \n");
//     gets(str);

//     while (*s){
//         if (isVowel(*s)){
//             s++;
//         }
//         else{
//             *p++ = *s++;
//         }
//     }
//     *p = '\0';
//     printf("After Removing Vowels : \n");
//     puts(str1);

//     return 0;
// }