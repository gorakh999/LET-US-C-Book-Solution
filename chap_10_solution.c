// QUESTION A

// #include<stdio.h>
// int sum1(int x);
// int rec_sum(int x);

// int main(){

//     int num1;
//     printf("Enter Number : \n");
//     scanf("%d", &num1);

//     printf("Sum = %d\n", sum1(num1));
//     printf("Recursive Sum = %d\n", rec_sum(num1));

//     return 0;
// }

// int sum1(int x){
//     int sum = 0;
//     while (x != 0)
//     {
//         sum = sum + x % 10;
//         x = x / 10;

//     }
//     return sum;
// }

// int rec_sum(int x){
//     int sum = 0;
//     if (x == 0){
//         return sum;
//     }
//     else{
//         return  (x % 10) + rec_sum(x/10);
//     }
// }



// QUESTION B

// #include<stdio.h>
// void factor(int x);

// int main(){

//     int num;
//     printf("Enter Number : \n");
//     scanf("%d", &num);
//     factor(num);

//     return 0;
// }

// void factor(int x){
//     static int i = 2;
//     if (i <= x){
//         if (x % i == 0 ){
//             printf("%d ", i);
//             x = x / i;
//         }
//         else{
//             i++;
//         }

//         factor(x);
//     }
//     return;
// }


// QUESTION C


// #include<stdio.h>
// void fibo(int old, int current);

// int main(){

//     int old = 1, current = 1;
//     printf("%d\t%d\t", old, current);
//     fibo(old, current);
//     return 0;
// }

// void fibo(int old, int current){
//     static int count = 0;
//     int new;
//     if (count == 25){
//         return;
//     }
//     else{
//         new = old + current;
//         printf("%d\t", new);
//         count++;
//         fibo(current, new);
//     }

// }


// QUESTION D

// #include<stdio.h>
// #include<math.h>

// int bin(int x);
// void rec_bin(int x);

// int main(){

//     int num;
//     printf("Enter Number : \n");
//     scanf("%d", &num);

//     bin(num);

//     return 0;
// }

// int bin(int x){
//     int r = x % 2;
//     x = x / 2;
//     if (x == 0){
//         printf("%d ", r);
//         return r;
//     }
//     else{
//         bin(x);
//     }
//     printf("%d ", r);
// }


// QUESTION E

// #include<stdio.h>
// int rec_sum(int x);

// int main(){

//     int res;
//     res = rec_sum(1);
//     printf("%d\n", res);
//     return 0;
// }


// int rec_sum(int x){
//     static int count = 1;
//     if (count != 10)
//     {
//         count += 1;
//         return x + rec_sum(x+1);

//     }
    
// }


