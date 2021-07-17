// QUESTION A

// #include<stdio.h>
// #include<string.h>

// struct Student{
//     int roll_no;
//     char name[50];
//     char dept[20];
//     char course[20];
//     int year_of_joining;
// };
// struct Student s[450];

// void printnames(int year){
//     for (int i = 0; i < 450; i++)
//     {
//         if (s[i].year_of_joining == year){
//             printf("%s\n", s[i].name);
//         }
//     }
// }

// void details(int roll_no){
//     for (int i = 0; i < 450; i++)
//     {
//         if (s[i].roll_no == roll_no){
//             printf("Name : %s\n", s[i].name);
//             printf("Department : %s\n", s[i].dept);
//             printf("Course : %s\n", s[i].course);
//             printf("Roll No. : %d\n", s[i].roll_no);
//             printf("Year of : %d\n", s[i].year_of_joining);
//         }
//     }
// }

// int main(){

//     s[0].roll_no = 1;
//     strcpy(s[0].name, "ram");
//     strcpy(s[0].course, "cse");
//     strcpy(s[0].dept, "btech");
//     s[0].year_of_joining = 2019;

//     printnames(s, 2019);
//     details(1);
//     return 0;
// }




// QUESTION B

// #include<stdio.h>
// #include<string.h>
// #define N 2

// struct Customer{
//     int acc_no;
//     char name[50];
//     int balance;
// };
// struct Customer c[N];

// void balance_low_100(){
//     for (int i = 0; i < N; i++)
//     {
//         if (c[i].balance < 100){
//             printf("Name : %s\n", c[i].name);
//             printf("Account Number : %d\n", c[i].acc_no);
//             printf("\n");
//         }
//     }
// }

// void depo_withdrawl(){
//     int acc, amount, code;
//     printf("Enter Account no. and Amount\n");
//     scanf("%d %d", &acc, &amount);
//     printf("0 for withdrawl and 1 for deposit\n");
//     scanf("%d", &code);

//     if (code == 1){
//         for (int i = 0; i < N; i++)
//         {
//             if(c[i].acc_no == acc){
//                 c[i].balance += amount;
//                 printf("Deposit Successfull\n");
//                 printf("Updated Balance is %d\n", c[i].balance);
//             }
//         }
//     }
//     if (code == 0){
//         for (int i = 0; i < N; i++)
//         {
//             if(c[i].acc_no == acc){

//                 if ((c[i].balance - amount) < 100){
//                     printf("Balance is insufficient for the Withdrawl\n");
//                 }
//                 else{
//                     c[i].balance -= amount;
//                     printf("Withdrawl Successfull\n");
//                     printf("Updated Balance is %d\n", c[i].balance);
//                 }
//             }
//         }

//     }

// }

// int main(){

//     c[0].acc_no = 1;
//     strcpy(c[0].name, "ramesh");
//     c[0].balance = 99;

//     c[1].acc_no = 2;
//     strcpy(c[1].name, "raju");
//     c[1].balance = 106;

    // balance_low_100();
//     depo_withdrawl();
//     return 0;
// }



// QUESTION C

// #include<stdio.h>
// #include<string.h>

// struct Engine{
//     int serial_no;
//     int year_of_manuf;
//     char material[15];
//     int quantity;
// };
// struct Engine eng[2] ;   

// void retrieve_info(){
//     for (int i = 0; i < 2; i++)
//     {
//         if ((eng[i].serial_no >= 0xbb1) && (eng[i].serial_no <= 0xcc6)){
//             printf("Details Are : \n");
//             printf("Serial no. : %x\n", eng[i].serial_no);
//             printf("Year of Manufacture : %d\n", eng[i].year_of_manuf);
//             printf("Material is : %s\n", eng[i].material);
//             printf("Quantity : %d\n", eng[i].quantity);
//         }
//     }   
// }

// int main(){

//     eng[0].serial_no = 0xbb3;
//     eng[0].year_of_manuf = 1900;
//     strcpy(eng[0].material, "gold");
//     eng[0].quantity = 10;

//     eng[1].serial_no = 0xcc7;
//     eng[1].year_of_manuf = 1230;
//     strcpy(eng[1].material, "silver");
//     eng[1].quantity = 78;
//     retrieve_info();
//     return 0;
// }





















