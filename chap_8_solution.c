// QUESTION A

// #include<stdio.h>
// int fact(int num);

// int main(){

//     int result, num;
//     printf("Enter Number : \n");
//     scanf("%d", &num);
//     result = fact(num);
//     printf("Factorial of %d is %d\n", num, result);
//     return 0;
// }

// int fact(int num){
//     int fact = 1;

//     while (num >= 1)
//     {
//         fact = fact * num;
//         num -= 1;
//     }
//     return fact;
    
// }


// QUESTION B

// #include<stdio.h>
// int power(int a, int b);

// int main(){

//     int result, num1, num2;
//     printf("Enter Num1 and Num2 : \n");
//     scanf("%d %d", &num1, &num2);
//     result = power(num1, num2);
//     printf("%d to the Power of %d is %d\n", num1, num2, result);
//     return 0;
// }

// int power(int a, int b){
//     int result = 1;
//     while (b >= 1)
//     {
//         result = result * a;
//         b -= 1;
//     }
//     return result;
    
// }



// QUESTION D

// #include<stdio.h>
// int leap(int year);

// int main(){

//     int year;
//     printf("Enter Year : \n");
//     scanf("%d", &year);
//     leap(year);
//     return 0;
// }

// int leap(int year){
//     if ((year % 4 == 0 ) || (year % 100 != 0) && (year % 400 == 0)){
//         printf("%d is Leap Year", year);
//     }
//     else{
//         printf("%d is not a Leap Year\n", year);
//     }
// }


// QUESTION E

// #include<stdio.h>
// void primefactor(int num);

// int main(){

//     int num;
//     printf("Enter Number : ");
//     scanf("%d", &num);
//     primefactor(num);
//     return 0;
// }

// void primefactor(int num){
//     int i = 2;
//     printf("Prime Factor of %d are ", num);
//     while (num != 1)
//     {
//         if (num % i == 0){
//             printf("%d ", i);
//         }
//         else{
//             i++;
//             continue;
//         }
//         num /= i;
//     }
    
// }