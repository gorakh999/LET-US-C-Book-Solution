// QUESTION A

// #include<stdio.h>
// void ops (int *, double *);


// int main(){
//     int sum;
//     double avg;
//     ops(&sum, &avg);
//     printf("Sum is %d\n", sum);
//     printf("Average is %f\n", avg);
    
//     return 0;
// }

// void ops(int *sum, double *avg){
//     int n1, n2, n3, n4, n5;

//     printf("Enter 5 Numbers : \n");
//     scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

//     *sum = n1 + n2 + n3 + n4 + n5;
//     *avg = *sum / 5;


// }


//  QUESTION B

// #include<stdio.h>
// void result(double *, double *);

// int main(){

//     double avg, percent;
//     result(&avg, &percent);
//     printf("Result = %f \nPercentage = %f\n", avg, percent);
//     return 0;
// }

// void result(double *avg, double * percent){
//     int s1, s2, s3;
//     printf("Enter Marks : \n");
//     scanf("%d %d %d", &s1, &s2, &s3);

//     *avg = (s1 + s2 + s3 ) / 3;
//     *percent = *avg;
// }


// QUESTION C

// #include<stdio.h>
// #include<math.h>

// void calcsin(double *);
// double fact(int x);


// int main(){

//     double sum1 = 0;
//     calcsin(&sum1);
//     printf("Value = %f\n", sum1);
//     return 0;
// }

// double fact(int x){
//     double rst = 1;
//     while (x != 1)
//     {
//         rst = rst * x;
//         x -= 1;
//     }
//     return rst;
// }

// void calcsin(double * sum1){
//     int val ;
//     double numerator, sol, factorial;
//     printf("Enter Value : \n");
//     scanf("%d", &val);

//     for (int i = 1, j = 1; i <= 10; i++, j+= 2){
//         numerator = pow(val, j);
//         factorial = fact(j);
//         printf("%d ", factorial);
//         sol = numerator / factorial;

//         (i % 2 == 0)?(*sum1 = *sum1 - sol) : (*sum1 = *sum1 + sol);



//     }


// }


// QUESTION D

// #include<stdio.h>
// void shift(int *, int *, int *);

// int main(){

//     int x = 5, y = 8, z = 10;
//     printf("Before Shifting : \nx = %d \ny = %d \nz = %d\n", x, y, z);
//     shift(&x, &y, &z);
//     printf("After Shifting : \nx = %d \ny = %d \nz = %d\n", x, y, z);
//     return 0;
// }

// void shift(int *x, int *y, int *z){
//     int temp;
//     temp = *z;
//     *z = *y;
//     *y = *x;
//     *x = temp;
// }


// QUESTION E

// #include<stdio.h>
// #include<math.h>

// float area(float , float, float);

// int main(){

//     float s1, s2, s3;
//     float area1;
//     printf("Enter Sides : \n");
//     scanf("%f %f %f", &s1, &s2, &s3);
//     area1 = area(s1, s2, s3);
//     printf("Area = %f\n", area1);
//     return 0;
// }

// float area(float s1, float s2, float s3){
//     float S, a, m;
//     S = (s1 + s2 + s3) / 2;
//     m = S * (S - s1) * (S - s2) * (S - s3);
//     a = sqrt(m);
//     return a;
// }


