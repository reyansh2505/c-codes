// #include <stdio.h> // write a structure to enter the info of 3 students
// #include <string.h>
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main (){
//     struct student s1;
//     s1.roll = 38;
//     s1.cgpa = 8.12;
//     //s1.name = "Reyansh";   because this is the not correct format of deifining char arr
//      strcpy (s1.name , "Reyansh");
//     printf("student name = %s\n", s1.name);
//     printf ("student roll no = %d\n", s1.roll);
//     printf ("student cgpa = %f\n", s1.cgpa);
//     printf("********************\n");

//     struct student s2;
//     s2.roll = 18;
//     s2.cgpa = 9.122;
//     strcpy (s2.name , "Dhanno");
//     printf("student name = %s\n", s2.name);
//     printf ("student roll no = %d\n", s2.roll);
//     printf ("student cgpa = %f\n", s2.cgpa);
//      printf("********************\n");

//      struct student s3;
//     s3.roll = 40;
//     s3.cgpa = 3.33;
//     strcpy (s3.name , "Sumit");
//     printf("student name = %s\n", s3.name);
//     printf ("student roll no = %d\n", s3.roll);
//     printf ("student cgpa = %f\n", s3.cgpa);

//     return 0;
// }




// #include <stdio.h>   //initialization of structure parameters in a single line

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct student s1 = {1664, 9.2, "Reyansh"};
//     printf("student roll = %d\n", s1.roll);

//     struct student *ptr = &s1;   // can also be represented by pointers
//     printf("student roll =%d\n", (*ptr).roll);
//     printf("student roll with arrow operator =%d\n", ptr->roll);
//     printf("student name with arrow operator =%s\n", ptr->name);
//     printf("student cgpa with arrow operator =%f\n", ptr->cgpa);


//     return 0;
//}




// create a structure to store vectors. Then make a function to return sum of 2 vectors.

// #include <stdio.h>
// struct vector{
//     int x;
//     int y;
// };

// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// int main (){
//     struct vector v1 = {5,10};
//     struct vector v2 ={3,7};
//     struct vector sum ={0};

//     calcSum(v1, v2, sum);

//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is %d\n", sum.x);
//     printf("sum of y is %d\n", sum.y);
// }




// create a structure to store complex numbers.(use arrow operator).
// #include <stdio.h>
// struct complex {
//     int real;
//     int img;
// };

// int main(){
//     struct complex number1 = {5,8};
//     struct complex *ptr = &number1;
//     printf("real part = %d\n", ptr->real);
//     printf("img part = %d\n", ptr-> img);
    

//     return 0;
// }