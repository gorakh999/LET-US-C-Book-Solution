// QUESTION A

// #include<stdio.h>

// int main(){

//     int i, j;
//     printf("Prime Numbers are : \n");
//     for (i = 1; i <= 300; i++)
//     {
//         for(j = 2; j <= i; j++){
//             if (i % j == 0){
//                 break;
//             }
//         }
//         if (j == i){
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }


// QUESTION B

// #include<stdio.h>

// int main(){

//     float sum = 0, fact;
//     for (int i = 1; i <= 7; i++){
//         fact = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             fact = fact * j;
//         }
//         printf("Fact of %d is %f\n", i, fact);
//         sum = sum + i / fact;
//     }
//     printf("Sum of Series is %f\n", sum);
//     return 0;
// }


// QUESTION C

// #include<stdio.h>

// int main(){

//     int i = 1, j = 1, k = 1;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (j = 1; j <= 3; j++){
//             for (k = 1; k <= 3; k++){
//                 printf("%d%d%d\n", i, j, k);
//             }
//         }
//     }
    

//     return 0;
// }


// QUESTION D

// #include<stdio.h>

// int main(){

//     int num;
//     printf("Enter Number : \n");
//     scanf("%d", &num);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d * %d = %d\n", num, i, num * i);
//     }
    
//     return 0;
// }


// QUESTION E

// #include<stdio.h>

// int main(){

//     float x, y, i;
//     for (y = 1; y <= 6; y++)
//     {
//         for (x = 5.5; x <= 12.5; x = x + 0.5){
//             i = 2 + (y + 0.5 * x);
//             printf("i = %f y = %f x = %f\n", i, y, x);
//         }
//     }
    
//     return 0;
// }


// QUESTION F

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float p, r, n, q, a;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter p, r, n, q : \n");
//         scanf("%f % f %f %f", &p, &r, &n, &q);
//         a = p + pow((1 + (r / q)), (n * q));
//         printf("Your Amount is %f\n", a);
//         fflush(stdin);
//     }
        
//     return 0;
// }


// QUESTION G

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float sum = 0;
//     int x;
//     printf("Enter Value of X : \n");
//     scanf("%d", &x);

//     for (int i = 0; i <= 7; i++)
//     {
//         if (x == 1){
//             sum = sum + pow((x - 1.0)/x, i);
//         }
//         else{
//             sum = sum + 0.5 * pow((x - 1.0)/x, i);
//         }
//     }
//     printf("ln %d = %f\n", x, sum);
    
//     return 0;
// }

// QUESTION H

// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 30; i++)
//     {
//         for (int j = 1; j <= 30; j++)
//         {
//             for (int k = 1; k <= 30; k++)
//             {
//                 if (i * i + j * j == k * k){
//                     printf("%d %d %d\n", i, j, k);
//                 }
//             }
            
//         }
        
//     }
    
//     return 0;
// }


// QUESTION I

// #include<stdio.h>

// int main(){

//     int rate = 10;
//     long int pop = 100000;
//     for (int y = 1; y <= 10; y++)
//     {
//         pop = pop + pop * rate / 100;
//         printf("Population After %d year is %ld\n", y, pop);
//     }
    

//     return 0;
// }


// QUESTION J

// #include<stdio.h>

// int main(){

//     for (int i = 1; i <= 30; i++)
//     {
//         for (int j = 1; j <= 30; j++)
//         {
//             for (int k = 1; k <= 30; k++)
//             {
//                 for (int l = 1; l <= 30; l++)
//                 {
//                     if ((i != j && i != k && i != l) &&
//                         (j != i && j != k && j != l) &&
//                         (k != i && k != j && k != l) &&
//                         (l != i && l != j && l != k) ){

//                             if (i * i * i + j * j * j == k * k * k + l * l * l){
//                                 printf("%d %d %d %d \n", i, j, k, l);
//                             }
//                         }
//                 }
                
//             }
            
//         }
        
//     }
    
//     return 0;
// }


// QUESTION K 

// #include<stdio.h>

// int main(){

//     for (int h = 0; h < 24; h++)
//     {
//         if (h == 0){
//             printf(" %d Midnight \n", h);
//             continue;
//         }
//         else if (h > 0 && h < 12)
//         {
//             printf("%d AM\n", h);
//             continue;
//         }
//         else if (h == 12)
//         {
//             printf("%d Noon\n", h);
//             continue;
//         }
//         else{
//             printf("%d PM\n", h % 12);
//             continue;
//         }
        
        
//     }
    
//     return 0;
// }


// QUESTION L

// #include<stdio.h>

// int main(){

//     int i, j, k, l, sp = 20;
//     for (i = 1, k = 1; i <= 4; i++)
//     {
//         for (int l = 1; l <= sp; l++)
//         {
//             printf(" ");
//         }
//         sp -= 2;
//         for ( j = 1; j <= i; j++, k++)
//         {
//             printf(" %d ", k);
//         }
//         printf("\n");

        
        
//     }
    
//     return 0;
// }


