// QUESTION C

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int i, n, fact = 1, n_copy;

//     while (1)
//     {
//         int choice;
//         printf("\n***** Choose an Option *****\n\t 1. Factorial of a Number. \n\t 2. Prime or Not \n\t 3. Odd or Even \n\t 4. Exit\n");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
            
//             printf("Enter Number : \n");
//             scanf("%d", &n);
//             n_copy = n;
//             while (n >= 1)
//             {
//                 fact = fact * n;
//                 n--;
//             }
//             printf("Factorial of %d is %d.\n", n_copy, fact);
//             break;

//         case 2:
//             printf("Enter Number : \n");
//             scanf("%d", &n);
//             for (i = 2; i <= n; i++)
//             {
//                 if (n % i == 0){
//                     printf("\nNot a Prime Number\n");
//                     break;
//                 }

//             }
//             if (i == n){
//                 printf("\nPrime Number\n");
//             }
//             break;
        
//         case 3:
//             printf("Enter Number : \n");
//             scanf("%d", &n);
//             if (n % 2 == 0)
//             {
//                 printf("\nEven Number\n");
//             }
//             else{
//                 printf("\nOdd Number\n");
//             }
//             break;
            
//         case 4:
//             printf("\nThank u for Using this Program\n");
//             exit(0);           
            
//         default:
//             printf("\nYou Have Entered Wrong Choice\n");
//             break;
//         }
//     }
    
//     return 0;
// }


// QUESTION D

// #include<stdio.h>

// int main(){

//     int cl, sub_fail;
//     printf("Enter Class ans No. of Failed Subjects : \n");
//     scanf("%d %d", &cl, &sub_fail);

//     switch (cl)
//     {
//     case 1:
//         if (sub_fail > 3){
//             printf("You will not get any Grace Marks. \n");
//         }
//         else{
//             printf("Your Grace Marks is %d\n", 5 * sub_fail);
//         }
//         break;

//     case 2:
//         if (sub_fail > 2){
//             printf("You will not get any Grace Marks. \n");
//         }
//         else{
//             printf("Your Grace Marks is %d\n", 4 * sub_fail);
//         }
//         break;

//     case 3:
//         if (sub_fail > 1){
//             printf("You will not get any Grace Marks. \n");
//         }
//         else{
//             printf("Your Grace Marks is %d\n", 5 * sub_fail);
//         }
//         break;
    
//     default:
//         printf("Invalid Choice\n");
//         break;
//     }
//     return 0;
// }