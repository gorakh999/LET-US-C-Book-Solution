
// QUESTION 1
// #include<stdio.h>

// int main(){

//     int num, sum = 0;
//     scanf("%d", &num);
//     while(num != 0){
//         sum = sum + (num % 10 );
//         num = num / 10;
//     }
//     printf("Sum is %d", sum);

//     return 0;
// }


// QUESTION 2

// #include<stdio.h>

// int main(){

//     long long int num, rem, reverse = 0;
//     scanf("%lld", &num);
//     while(num != 0){
//         rem = num % 10;
//         reverse = reverse * 10 + rem;
//         num /= 10;
//     }
//     printf("Reverse is %lld\n", reverse);
//     return 0;
// }


// QUESTION 3

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float s1, s2, s3;
//     float s, area;
//     scanf("%f %f %f", &s1, &s2, &s3);
//     s = (s1 + s2 + s3) / 2;
//     area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
//     printf("Area of Triangle is %f", area);

//     return 0;
// }


// QUESTION 4

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float x, y, r, theta;
//     scanf("%f %f", &x, &y);
//     r = sqrt(x * x + y * y);
//     theta = atan(x/y);
//     theta = theta * 180 / 3.14;
//     printf("Value in Polar Coordinate is (%f, %f)", r, theta);
//     return 0;
// }

// QUESTION 5

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float l1, l2, g1, g2, d;
//     printf("Enter Latitude 1 and Longitude 1 : \n");
//     scanf("%f %f", &l1, &g1);
//     printf("Enter Longitude 2 and Longitude 2 : \n");
//     scanf("%f %f", &l2, &g2);
//     l1 = l1 * 3.14 / 180;
//     l2 = l2 * 3.14 / 180;
//     g1 = g1 * 3.14 / 180;
//     g2 = g2 * 3.14 / 180;


//     d = 3963 * acos((sin(l1) * sin(l2)) + (cos(l1) * cos(l2) * cos(g2 - g1)));
//     printf("Distance = %f", d);

//     return 0;
// }


// QUESTION 6

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float t, v, wcf;
//     scanf("%f %f", &t, &v);
//     wcf = 35.74 + 0.6215 * t + ((0.4275 * t - 35.75) * pow(v, 0.16f));
//     printf("WCF = %f", wcf);
//     return 0;
// }

// QUESTION 7

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float angle, s,c,t;
//     scanf("%f", &angle);
//     angle = angle * 3.14 / 180 ;
//     s = sin(angle);    
//     c = cos(angle);    
//     t = tan(angle);    
//     printf("Sin(%f) = %f \nCos(%f) = %f \nTan(%f) = %f", angle, s, angle, c, angle, t);

//     return 0;
// }


// QUESTION 8

// #include<stdio.h>

// int main(){

//     int a, b, temp;
//     scanf("%d %d", &a, &b);
//     printf("Value Before Interchange is a = %d and b = %d\n", a, b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("Value Before Interchange is a = %d and b = %d\n", a, b);
    
//     return 0;
// }


// QUESTION 9

// #include<stdio.h>

// int main(){

//     int amount, hun, fift, ten, five, two, one, totnotes;
//     scanf("%d", &amount);
//     hun = amount / 100;
//     amount = amount % 100;
//     fift = amount / 50;
//     amount = amount % 50;
//     ten = amount / 10;
//     amount = amount % 10;
//     five = amount / 5;
//     amount = amount % 5;
//     two = amount / 2;
//     amount = amount % 2;
//     one = amount / 1;
//     amount = amount % 1;

//     totnotes = hun + fift + ten + five + two + one ;
//     printf("Total Notes are %d\n", totnotes);
//     return 0;
// }