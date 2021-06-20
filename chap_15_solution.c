// QUESTION C

// #include<stdio.h>

// int main(){

//     char s[20] = "This is a string";
//     int n;
//     printf("Enter Starting Point to Slice : ");
//     scanf("%d", &n);
//     printf("Sliced String is \n");
//     printf(n + s);
//     return 0;
// }


// QUESTION D

// #include<stdio.h>

// int str_to_int(char s[20]){
//     int i = 0;
//     int num = 0;
//     while (s[i] != '\0')       
//     {
//         if (s[i] >= 48 && s[i] <= 57){
//             num = num * 10 + (s[i] - 48);
//         }
//         else{
//             printf("Not a valid String...");
//             return 1;
//         }
//         i++;
//     }
//     return num;
// }

// int main(){
//     char s[20] = "123";
//     printf("converted Number is %d\n", str_to_int(s));   
//     return 0;
// }



// QUESTION E

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char s[100];
//     char f1[50] = "A";
//     char f2[50] = "B";

//     for (int i = 0; i < 10; i++)
//     {
//         strcpy(s, f2);
//         strcat(s, f1);
//         printf("%s\n", s);
//         strcpy(f2, f1);
//         strcpy(f1, s);
//     }
    
//     return 0;
// }






// QUESTION G

// #include<stdio.h>

// int check_valid(int card_no[16]){
//     int sum_right = 0;
//     int sum_left = 0;
//     int arr[8];
//     for (int i = 14, j = 0, k = 15; i >= 0, j < 8, k >= 0; i = i - 2, j++, k = k - 2)
//     {
//         arr[j] = card_no[i] * 2;
//         sum_left = sum_left + card_no[k];
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] >= 10){
//             arr[i] = arr[i] - 9;
//         }
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         sum_right = sum_right + arr[i];
//     }

//     if ((sum_left + sum_right) % 10 == 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
    
    
    

// }

// int main(){

    
//     int card_no[16] = {4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 9};

//     if (check_valid(card_no)){
//         printf("Credit card Valid...\n");
//     }
//     else{
//         printf("Credit card Not Valid...\n");

//     }
//     return 0;
// }

