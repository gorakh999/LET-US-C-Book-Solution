// QUESTION A


// #include<stdio.h>

// int main(){

//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int t;
//     for (int i = 0; i <= 9; i = i + 2)
//     {
//         t = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = t;
//     }

//     for (int i = 0; i <= 9; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    

//     return 0;
// }


// QUESTION B

// #include<stdio.h>

// int main(){

//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int arr_copy[6];

//     for (int i = 5, j = 0; i <= 0, j<= 5; i--, j++)
//     {
//         arr_copy[j] = arr[i];
//     }

//     for (int i = 0; i <= 5; i++)
//     {
//         printf("%d ", arr_copy[i]);
//     }
    
    
//     return 0;
// }


// QUESTION C
// #include<stdio.h>

// int main(){

//     int arr[25] = {12, 1, 3, 4, 2, 53, 7, 754, 1, 4};
//     int num, count = 0;
//     printf("Enter Number to Search : ");
//     scanf("%d", &num);
//     for (int i = 0; i <= 9; i++)
//     {
//         if (arr[i] == num){
//             count++;
//         }
//     }
//     if (count == 0)
//     {
//         printf("Number not present\n");
//     }
//     else{
//         printf("Number %d present %d time", num, count);
//     }
    
    
//     return 0;
// }



// QUESTION D
// #include<stdio.h>
// int pos(int);
// int neg(int);
// int odd(int);
// int even(int);

// int pos(int n){
//     if (n >= 0)
//     return 1;
//     else
//     return 0;
// }

// int neg(int n){
//     if (n < 0)
//     return 1;
//     else
//     return 0;
// }

// int even(int n){
//     if (n % 2 == 0)
//     return 1;
//     else
//     return 0;
// }


// int odd(int n){
//     if (n % 2 != 0)
//     return 1;
//     else
//     return 0;
// }

// int main(){

//     int arr[10] = {12, -1, 3, -41, -2, 53, 7, 754, 1, 4};
//     int c_pos = 0, c_neg = 0, c_odd = 0, c_even = 0;
//     for (int i = 0; i <= 9; i++)
//     {
//         if (pos(arr[i])){
//             c_pos++;
//         }
//         if (neg(arr[i])){
//             c_neg++;
//         }
//         if (odd(arr[i])){
//             c_odd++;
//         }
//         if (even(arr[i])){
//             c_even++;
//         }
//     }
    
//     printf("Positive = %d Negative = %d Odd = %d Even = %d\n", c_pos, c_neg, c_odd, c_even);
    
//     return 0;
// }



// QUESTION E

// #include<stdio.h>
// #define n 7

// int main(){

//     int arr[n] = {1, 2, 3, 3, 5, 2, 1};
//     for (int i = 0; i < (n/2 + 1); i++)
//     {
//         if (arr[i] == arr[n - (i+1)]){
//             printf("Position %d and Position %d are equal\n", i, (n - (i + 1)));
//         }
//         else{
//             printf("Position %d and Position %d are Not Equal\n", i, (n - (i + 1)));

//         }
//     }
    

//     return 0;
// }


// QUESTION F

// #include<stdio.h>

// int main(){

//     int arr[10] = {6, 5, 4, 3, 2, 7, 45, 76, 84, 35};
//     int * small = arr;
//     for (int i = 0; i < 10; i++)
//     {
//         if (*(arr + i) < * small){
//             small = (arr + i);
//         }
//     }
//     printf("Smallest  = %d\n", *small);

//     return 0;
// }


// QUESTION G

// #include<stdio.h>

// void modify(int a[], int n){
//     for (int i = 0; i < n; i++)
//     {
//        a[i] = a[i] * 3; 
//     }
    
// }
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5};
//     modify(arr, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }



// QUESTION H

// INSERTION SORT
// #include<stdio.h>
// #define N 16

// int main(){

//     int arr[N] = {5, 4, 3, 2, 1, 67, 56, 24, 8, 3, 9, 14, 74, 47, 27, 19};
//     int t;
//     for (int i = 1; i < N; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if(arr[i] < arr[j]){
//                 t = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = t;
//             }
//         }
        
//     }
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }