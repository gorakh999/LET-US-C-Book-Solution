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