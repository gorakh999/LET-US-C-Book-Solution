// QUESTION A

// #include<stdio.h>

// int main(){

//     int cp, sp;
//     scanf("%d %d", &cp, &sp);
//     if (cp > sp){
//         printf("He Has Loss of %d Rupees\n", cp - sp);
//     }
//     else{
//         if (cp < sp){
//             printf("He has a Profit of %d Rupees\n", sp - cp);
//         }
//         else{
//             printf("He has No Profit or Loss\n");
//         }
//     }   
//     return 0;
// }


// QUESTION B

// #include<stdio.h>

// int main(){

//     int num;
//     scanf("%d", &num);
//     if (num % 2 == 0){
//         printf("%d is Even\n", num);
//     }
//     else{
//         printf("%d is Odd\n", num);
//     }
//     return 0;
// }


// QUESTION C

// #include<stdio.h>

// int main(){

//     int year;
//     scanf("%d", &year);
//     if (year % 100 == 0){
//         if (year % 400 == 0){
//             printf("%d is a Leap Year\n", year);
//         }
//         else{
//             printf("%d is Not a Leap Year\n", year);
//         }

//     }
//     else{
//         if (year % 4 == 0){
//             printf("%d is a Leap Year\n", year);
//         }
//         else{
//             printf("%d is Not a Leap Year\n");

//         }
//     }
//     return 0;
// }


// QUESTION D

// #include<stdio.h>

// int main(){

//     int year, leapdays, days;
//     long int normaldays, totaldays;
//     scanf("%d", &year);
//     normaldays = (year - 1) * 365l;
//     leapdays = (year - 1)/4 - (year - 1)/ 100 + (year - 1)/400;
//     totaldays = normaldays + leapdays;
//     days = totaldays % 7;
//     if (days == 0)
//         printf("Monday");
//     if (days == 1)
//         printf("Tuesday");
//     if (days == 2)
//         printf("Wednesday");
//     if (days == 3)
//         printf("Thursday");
//     if (days == 4)
//         printf("Friday");
//     if (days == 5)
//         printf("Saturday");
//     if (days == 6)
//         printf("Sunday");
//     return 0;
// }


// QUESTION E

// #include<stdio.h>

// int main(){

//     int num, reverse = 0, rem, num_copy;
//     scanf("%d", &num);
//     num_copy = num;
//     while (num_copy != 0){
//         rem = num_copy % 10;
//         reverse = reverse * 10 + rem;
//         num_copy /= 10;

//     }
//     if (reverse == num){
//         printf("%d and %d are Equal\n", num, reverse);

//     }
//     else{
//         printf("%d and %d are Not Equal\n", num, reverse);
//     }

//     return 0;
// }


// QUESTION F

// #include<stdio.h>

// int main(){

//     int ram, shyam, ajay;
//     scanf("%d %d %d", &ram, &shyam, &ajay);
//     if (ram < shyam && ram < ajay){
//         printf("Ram is Youngest \n");
//     }
//     if (shyam < ram && shyam < ajay){
//         printf("Shyam is Youngest\n");
//     }
//     if (ajay < ram && ajay < shyam){
//         printf("Ajay is Youngest\n");
//     }

//     return 0;
//     }


// QUESTION G

// #include<stdio.h>

// int main(){

//     int a1, a2, a3;
//     scanf("%d %d %d", &a1, &a2, &a3);
//     if (a1+ a2 + a3 == 180){
//         printf("Triangle is Valid\n");
//     }
//     else{
//         printf("Triangle is Not Valid\n");
//     }
//     return 0;
// }


// QUESTION H

// #include<stdio.h>

// int main(){

//     int num;
//     scanf("%d", &num);
//     if (num >= 0){
//         printf("Absolute Value is %d\n", num);
//     }
//     else{
//         printf("Absolute Value is %d\n", -1 * num);
//     }
//     return 0;
// }


// QUESTION I

// #include<stdio.h>

// int main(){

//     int l, b, area, perimeter;
//     scanf("%d %d", &l, &b);
//     perimeter = 2 * (l + b);
//     area = l * b;
//     if (area > perimeter){
//         printf("Area is Greater");
//     }
//     else{
//         if (area < perimeter){
//             printf("Perimeter Is Greater");
//         }
//         else{
//             printf("Both are Equal");
//         }
//     }

//     return 0;
// }


// QUESTION J

// #include<stdio.h>
// #include<math.h>
// int main(){

//     int x1, y1, x2, y2, x3, y3;
//     float s1, s2, s3;
//     printf("Enter First Coordinates : \n");
//     scanf("%d %d", &x1, &y1);
//     printf("Enter Second Coordinates : \n");
//     scanf("%d %d", &x2, &y2);
//     printf("Enter Third Coordinates : \n");
//     scanf("%d %d", &x3, &y3);

//     s1 = abs(y2 - y1) / (x2 - x1);
//     s2 = abs(y3 - y2) / (x3 - x2);
//     s1 = abs(y3 - y1) / (x3 - x1);
//     if ((s1 == s2) && (s1 == s3)){
//         printf("They are Collinear\n");
//     }
//     else{
//         printf("They are Collinear\n");
//     }
//     return 0;
// }


// QUESTION K

// #include<stdio.h>
// #include<math.h>
// int main(){

//     int x, y, radius;
//     float dis;
//     scanf("%d %d %d", &x, &y, &radius);
//     dis = sqrt(pow(x, 2) + pow(y, 2));
//     if (dis == radius){
//         printf("Point Lies on the Cicle\n");
//     }
//     else{
//         if(dis > radius){
//             printf("Point is Outside Circle\n");
//         }
//         else{
//             printf("Point is Inside Circle\n");
//         }
//     }

//     return 0;
// }


// QUESTION L

// #include<stdio.h>

// int main(){

//     int x, y;
//     scanf("%d %d", &x, &y);
//     if (x == 0 && y == 0){
//         printf("Point is On Origin\n");
//     }
//     else{
//         if (x == 0){
//             printf("Point is on X - axis\n");
//         }
//         else{
//             if(y == 0){
//                 printf("Point is on Y- axis\n");
//             }
//             else{
//                 printf("Point is Neither on X - Axis Nor Y- Axis");
//             }
//         }
//     }
//     return 0;
// }