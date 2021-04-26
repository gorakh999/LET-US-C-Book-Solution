// QUESTION A

// #include<stdio.h>

// int main(){

//     int year;
//     scanf("%d", &year);
//     if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
//         printf("%d is a Leap Year", year);
//     }
//     else{
//         printf("%d is Not a Leap Year\n", year);
//     }
//     return 0;
// }

// QUESTION B

// #include<stdio.h>

// int main(){

//     char ch;
//     scanf("%c", &ch);
//     if (ch >= 65 && ch <= 90){
//         printf("%c is in Capital Letter", ch);
//     }
//     else if (ch >= 97 && ch <= 122)
//     {
//         printf("%c is in Lower Letter", ch);
//     }
//     else if (ch >= 48 && ch <= 57)
//     {
//         printf("%c is a Digit\n", ch);
//     }
//     else if (ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 & ch <= 96 || ch >= 123 && ch <= 127){
//         printf("%c is a Special Character", ch);
//     }
//     return 0;
// }

// QUESTION C

// #include<stdio.h>

// int main(){

//     int s1, s2, s3;
//     scanf("%d %d %d", &s1, &s2, &s3);
//     if (s1 >= s2 && s1 >= s3){
//         if ((s2 + s3) > s1){
//             printf("Triangle is Valid");
//         }
//         else{
//             printf("Triangle is Not Valid");
//         }
//     }
//     else if (s2 >= s1 && s2 >= s3){
//         if ((s1 + s3) > s2){
//             printf("Triangle is Valid");
//         }
//         else{
//             printf("Triangle is Not Valid");
//         }
//     }
//     else if (s3 >= s2 && s3 >= s1){
//         if ((s1 + s2) > s3){
//             printf("Triangle is Valid");
//         }
//         else{
//             printf("Triangle is Not Valid");
//         }
//     }

//     return 0;
// }

// QUESTION D

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int s1, s2, s3;
//     scanf("%d %d %d", &s1, &s2, &s3);
//     if (s1 == s2 && s2 == s3){
//         printf("Triangle is Equilateral");
//     }
//     else if (s1 == s2 || s2 == s3 || s3 == s1)
//     {
//         printf("Triangle is Isosceles\n");
//     }

//     else if (s1 != s2 && s2 != s3)
//     {
//         if ((pow(s1, 2) == (pow(s2, 2) + pow(s3, 2))) || (pow(s2, 2) == (pow(s1, 2) + pow(s3, 2))) || (pow(s3, 2) == (pow(s1, 2) + pow(s2, 2))))
//         {
//         printf("Triangle is Right Angled");
//         }
//         else{
//             printf("Triangle is Scalene");
//         }
//     }
//     return 0;
// }

// QUESTION E

// #include<stdio.h>

// int main(){

//     float red, green, blue, max;
//     float white, cyan, magenta, yellow, black, r_frac, g_frac, b_frac;
//     scanf("%f %f %f", &red, &green, &blue);
//     if (red == 0 && green == 0 && blue == 0)
//     {
//         cyan = magenta = yellow = 0;
//         black = 1;
//     }
//     else{
//         r_frac = red / 255;
//         g_frac = green / 255;
//         b_frac = blue / 255;
//         max = r_frac;
//         if (g_frac > max){
//             max = g_frac;
//         }
//         if (b_frac > max)
//         {
//             max = b_frac;
//         }
//         white = max;

//         cyan = (white - r_frac) / white;
//         magenta = (white - g_frac) / white;
//         yellow = (white - b_frac) / white;
//         black = 1 - white;

//     }
//     printf("White = %d\n", white);
//     printf("Cyan = %f , Magenta = %f, Yellow = %f, Black = %f", cyan, magenta, yellow, black);

//     return 0;

// QUESTION F

// #include<stdio.h>

// int main(){

//     float hard, carbon, tensile;
//     int cond_1, cond_2, cond_3, grade;
//     scanf("%f %f %f", &hard, &carbon, &tensile);
//     cond_1 = hard > 50;
//     cond_2 = carbon < 0.7;
//     cond_3 = tensile > 5600;
//     if (cond_1 && cond_2 && cond_3){
//         grade = 10;
//     }
//     else if (cond_1 && cond_2)
//     {
//         grade = 9;
//     }
//     else if (cond_2 && cond_3)
//     {
//         grade = 8;
//     }
//     else if (cond_3 && cond_1)
//     {
//         grade = 7;
//     }
//     else if (cond_1 || cond_2 || cond_3)
//     {
//         grade = 6;
//     }
//     else{
//         grade = 5;
//     }
//     printf("Grade = %d", grade);

//     return 0;
// }

// QUESTION G

// #include<stdio.h>
// #include<math.h>

// int main(){

//     float weight, height, BMI;
//     scanf("%f %f", &weight, &height);
//     height = height / 100;
//     BMI = weight / (pow(height, 2));

//     if (BMI < 15){
//         printf("BMI = %f and Category = Starvation", BMI);
//     }
//     else if (BMI >= 15.1 && BMI < 17.6)
//     {
//         printf("BMI = %f and Category = Anorexic", BMI);

//     }
//     else if (BMI >= 17.6 && BMI < 18.6)
//     {
//         printf("BMI = %f and Category = UnderWeight", BMI);

//     }
//     else if (BMI >= 18.6 && BMI < 25)
//     {
//         printf("BMI = %f and Category = Ideal", BMI);

//     }
//     else if (BMI >= 25 && BMI < 30)
//     {
//         printf("BMI = %f and Category = OverWeight", BMI);

//     }
//     else if (BMI >= 30 && BMI < 40)
//     {
//         printf("BMI = %f and Category = Obese", BMI);

//     }
//     else if (BMI >= 40)
//     {
//         printf("BMI = %f and Category = Morbidly Obese", BMI);

//     }

//     return 0;
// }


//QUESTION ON CONDITIONAL OPERATOR

// QUESTION A

// a part

// #include<stdio.h>

// int main(){

//     char ch;
//     scanf("%c", &ch);
//     ch >= 97 && ch <= 122 ? printf("Lower Case") : printf("Not Lower Case");
//     return 0;
// }


// b part

// #include<stdio.h>

// int main(){

//     char ch;
//     scanf("%c", &ch);
//     (ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127) ? printf("Special Character") : printf("Not a Special Character");
//     return 0;
// }



// QUESTION B

// #include<stdio.h>

// int main(){

//     int year;
//     scanf("%d", &year);
//     (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) ? printf("Leap Year") : printf("Not a Leap year");
//     return 0;
// }


// QUESTION C

// #include<stdio.h>

// int main(){

//     int num1, num2, num3;
//     scanf("%d %d %d", &num1, &num2, &num3);
//     (num1 > num2 && num1 > num3) ? printf("%d is Greater", num1) : ((num2 > num1 && num2 > num3) ? printf("%d is Greater", num2) : ((num3 > num1 && num3 > num2) ? printf("%d is Greater ", num3) : printf("All are Equal") ) );
//     return 0;
// }


// QUESTION D

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int angle;
//     scanf("%d", &angle);
//     (pow(sin(angle), 2) + pow(cos(angle), 2) == 1) ? printf("Equal") : printf("Not Equal");
//     return 0;
// }


// QUESTION E


// #include<stdio.h>

// int main(){

//     float sal;
//     scanf("%f", &sal);
//     (sal >= 25000 && sal <= 40000) ? printf("Manager\n") : ((sal >= 15000 && sal < 25000) ? printf("Accountant\n") : printf("Clerk\n") );
//     return 0;
// }