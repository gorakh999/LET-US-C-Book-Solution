// QUESTION B

// #include<stdio.h>
// #define N 5
// #define M 5

// int main(){

//     int arr[N][M] = {
//                         {12, 134, 14, 15, 16},
//                         {18, 75, 92, 74, 92},
//                         {91, 1, 5, 6, 82},
//                         {21, 42, 63, 74, 62},
//                         {11, 14, 15, 1767, 76}
//     };
//     int largest = arr[0][0];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if (arr[i][j] >= largest){
//                 largest = arr[i][j];
//             }
//         }
//     }
//     printf("Largest = %d\n", largest);
    
//     return 0;
// }


// QUESTION C

// #include<stdio.h>
// #define N 5
// #define M 5

// int main(){

//     int arr[N][M] = {
//                         {1, 2, 3, 4, 5},
//                         {6, 7, 8, 9, 10},
//                         {11, 12, 13, 14, 15},
//                         {16, 17, 18, 19, 20},
//                         {21, 22, 23, 24, 25}
//     };
//     int tra_arr[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             tra_arr[j][i] = arr[i][j];
//         }
//     }
    
//     printf("Original Array.....\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("\nTranspose Array.....\n");
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             printf("%d ", tra_arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// QUESTION g

// #include<stdio.h>
// #include<stdlib.h>
// #define N 5
// #define M 5

// int main(){

//     int arr[N][M] = {
//                         {1, 2, 3, 4, 5},
//                         {6, 7, 8, 9, 10},
//                         {11, 12, 13, 14, 15},
//                         {16, 17, 18, 19, 20},
//                         {21, 22, 23, 24, 25}
//     };
    
//     int symmetric = 1;


    
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if(arr[i][j] != arr[j][i]){
//                 symmetric = 0;    
//             }
            
//         }
//     }
//     if (symmetric)
//     printf("Symmetric\n");
//     else
//     printf("Not Symmetric\n");
    

//     return 0;
// }



// QUESTION H

// #include<stdio.h>
// #define N 5
// #define M 5

// int main(){

//     int arr1[N][M] = {
//                         {1, 2, 3, 4, 5},
//                         {6, 7, 8, 9, 10},
//                         {11, 12, 13, 14, 15},
//                         {16, 17, 18, 19, 20},
//                         {21, 22, 23, 24, 25}
//     };
//     int arr2[N][M] = {
//                         {1, 2, 3, 4, 5},
//                         {6, 7, 8, 9, 10},
//                         {11, 12, 13, 14, 15},
//                         {16, 17, 18, 19, 20},
//                         {21, 22, 23, 24, 25}
//     };
//     int sum[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             sum[i][j] = arr1[i][j] + arr2[i][j];
//         }    
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int  j = 0; j < M; j++)
//         {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
        
//     }
// }
    
    
// QUESTION I

// #include<stdio.h>
// #define N 3
// #define M 3

// int main(){

//     int arr1[N][M] = {
//                         {1, 2, 3},
//                         {6, 7, 8},
//                         {11, 12, 13}
//     };
                        
//     int arr2[N][M] = {
//                         {1, 2, 3},
//                         {6, 7, 8},
//                         {11, 12, 13}
                        
//     };
//     int mult[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             int sum = 0;
//             for (int k = 0; k < N; k++)
//             {
//                 sum = sum + arr1[i][k] * arr2[k][j];
//                 mult[i][j] = sum;
//             }       
//         }    
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int  j = 0; j < M; j++)
//         {
//             printf("%d ", mult[i][j]);
//         }
//         printf("\n");
        
//     }
    

// }


// QUESTION L

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int arr[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
//     float mean = 0;
//     float std[15];

//     for (int i = 0; i < 15; i++)
//     {
//         mean = mean + arr[i];
//     }
//     mean = mean / 15;

//     printf("%f ",mean);

//     for (int i = 0; i < 15; i++)
//     {
//         std[i] = sqrt(pow((arr[i] - mean), 2)) / 15;
//     }
//     printf("\n");
//     for (int i = 0; i < 15; i++)
//     {
//         printf("%.2f ", std[i]);
//     }
        
//     return 0;
// }



// QUESTION M

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float s1[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
//     float s2[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
//     float angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
//     float area[6];

//     // for (int i = 0; i < 6; i++)
//     // {
//     //     angle[i] = angle[i] * 180 / 3.14;
//     // }

//     for (int i = 0; i < 6; i++)
//     {
//         area[i] = 0.5 * s1[i] * s2[i] * sin(angle[i]);
//     }

//     printf("Printing Area\n");
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%.3f\n", area[i]);
//     }

//     float max = -1;
//     for (int i = 0; i < 6; i++)
//     {
//         if (area[i] > max){
//             max = area[i];
//         }
//     }
//     printf("Maximum Area is %0.3f\n", max);
    
    
    
    
//     return 0;
// }



// QUESTION N

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int n = 11;
//     float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
//     float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
//     float r1 , r2;
//     double r;
//     float sx = 0, sy = 0, sxy = 0, sxx = 0, syy = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sx = sx + x[i];
//         sy = sy + y[i];
//         sxy = sxy + x[i] * y[i];
//         sxx = sxx + x[i] * x[i];
//         syy = syy + y[i] * y[i];
//     }

//     printf("Sum X = %f\n", sx);
//     printf("Sum Y = %f\n", sy);
//     printf("Sum XY = %f\n", sxy);
//     printf("Sum XX = %f\n", sxx);
//     printf("Sum YY = %f\n", syy);
    
//     r1 = sxy - (sx * sy);
//     r2 =  sqrt((n * (sxx - (sx * sx))) * (n * (syy - (sy * sy))));

//     r = r1 / r2 ;
//     printf("%f %f\n", r1, r2);
//     printf("Correlation Cofficiant  = %lf\n", r);

//     return 0;
// }




// QUESTION O

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int n = 10;
//     float x[10] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
//     float y[10] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
//     float sx = 0, sy = 0, syx = 0, sxx = 0, mean_x, mean_y ;
//     float a, b, r1, r2;

//     for (int i = 0; i < n; i++)
//     {
//         sx = sx + x[i];
//         sy = sy + y[i];
//         syx = syx + x[i] * y[i];
//         sxx = sxx + x[i] * x[i];
//     }
//     mean_x = sx / n;
//     mean_y = sy / n;

//     printf("Sum X = %f\n", sx);
//     printf("Sum Y = %f\n", sy);
//     printf("Sum YX = %f\n", syx);
//     printf("Sum XX = %f\n", sxx);    
//     printf("Mean X = %f\n", mean_x);
//     printf("Mean Y = %f\n", mean_y);

//     r1 = (n * syx) - (sx * sy);
//     r2 = (n * sxx) - (sx * sx);
//     b = r1 / r2;
//     a = mean_y - (b * mean_x);

//     printf("Equation is y = %.2f + %.2f*x\n", a, b);


//     return 0;
// }




