// QUESTION A

// #include<stdio.h>

// int main(){

//     int emp = 1, hour, pay;
//     while (emp <= 10)
//     {
//         printf("Enter Worked Hour : \n");
//         scanf("%d", &hour);
//         if(hour > 40){
//             pay = (hour - 40 ) * 12;
//             printf("Your Overtime Pay is %d\n", pay);
//         }
//         else{
//             printf("You are Not Eligible for Overtime Pay\n");
//         }
//         emp++;
//     }
    
//     return 0;
// }


// QUESTION B

// #include<stdio.h>

// int main(){

//     int num, fact = 1, count;
//     printf("Enter Number to Find Factorial : \n");
//     scanf("%d", &num);
//     while (num >= 1)    
//     {
//         fact = fact * num;
//         num--;
//     }
//     printf("Factorial is %d \n", fact);
//     return 0;
// }


// QUESTION C

// #include<stdio.h>

// int main(){

//     int num1, num2, pow = 1;
//     printf("Enter Num1 and Num2 : \n");
//     scanf("%d %d", &num1, &num2);
//     while (num2 >= 1)
//     {
//         pow = pow * num1;
//         num2--;
//     }
//     printf("Result is %d\n", pow);
//     return 0;
// }


// QUESTION D

// #include<stdio.h>

// int main(){

//     int count = 0;
//     while (count < 255)
//     {
//         printf("Character is : %c \t ASCII Value is %d\n", count, count);
//         count++;
//     }
//     return 0;
// }


// QUESTION E

// #include<stdio.h>

// int main(){

//     int count = 1;
//     while (count <= 5000)
//     {
//         int rem, sum = 0, num;
//         num = count;
//         while (num != 0)
//         {
//             rem = num % 10;
//             sum = sum + (rem * rem * rem);
//             num /= 10;
//         }
//         if (sum == count)
//         {
//             printf("%d is a Armstrong Number\n", count);
//         }
//         count++;
//     }
    
//     return 0;
// }


// QUESTION F

// #include<stdio.h>

// int main(){

//     int m = 21, p, c;
//     while (1)
//     {
//         printf("No. of MatchSticks left is %d\n", m);
//         printf("Pich 1, 2, 3 or 4 MatchStickes : \n");
//         scanf("%d", &p);

//         if (p > 4 || p < 1){
//             continue;
//         }
//         m = m - p;
//         printf("No. of MatchSticks left is %d\n", m);

//         c = 5 - p;
//         printf("No. of MatchSticks Computer Picked is %d\n", c);

//         m = m - c;
//         if (m == 1)
//         {
//             printf("No. of MatchSticks left is %d\n", m);
//             printf("You Lost the Game\n");
//             break;
//         }
//     }
    
//     return 0;
// }


// QUESTION G

// #include<stdio.h>

// int main(){

//     int num, pos_c = 0, neg_c = 0, zero_c = 0;
//     while (1)
//     {
//         printf("Enter 1 to Exit\n");
//         printf("Enter Number : \n");
//         scanf("%d", &num);
//         if (num == 1){
//             break;
//         }
//         else{
//             if (num == 0){
//                 zero_c++;
//             }
//             else if (num > 0)
//             {
//                 pos_c++;
//             }
//             else
//             {
//                 neg_c++;
//             }                    
//         }
//     }
//     printf("You Entered : \n")
//     printf("Positive : %d \nNegative : %d \nZeroes : %d\n", pos_c, neg_c, zero_c);
//     return 0;
// }


// QUESTION H

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int num, oct = 0, rem, p = 0, duplicate;
//     printf("Enter Number : \n");
//     scanf("%d", &num); 
//     duplicate = num;
//     while (duplicate != 0)
//     {
//         rem = duplicate % 8;
//         duplicate /= 8;
//         oct = oct + rem * pow(10, p);
//         p++;
//     }
//     printf("Octal of %d is %d\n", num, oct);
//     return 0;
// }

