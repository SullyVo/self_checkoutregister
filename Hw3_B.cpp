/**
PART C
Write a program that will do the following steps:
1.	generate 5 random numbers between 3 and 13 inclusive
 // r1, r2, r3, r4, r5
2.	generate one random number between 2 and 6 // name it x
3.	calculate r1 to the power of x
4.	calculate the average of the 5 numbers
5.	calculate the square root of the second and the last number
6.	calculate the geometric mean of the second, third, and fourth number (the product of the three numbers to the power of 1 / 3)
7.	print the 5 random numbers
8.	print r1 to the power of x
9.	print the average of the 5 numbers with 1 digit after the decimal point
10.	print the square root of the second and last random number with 3 digits after the decimal point
11.	print the geometric mean of the second, third, and fourth number with 3 digits after the decimal point


Uyen Vo

*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
srand(time(0));

int r1, r2, r3, r4, r5, x;
r1 = rand() % 11 + 3;
r2 = rand() % 11 + 3;
r3 = rand() % 11 + 3;
r4 = rand() % 11 + 3;
r5 = rand() % 11 + 3;
x = rand() % 5 + 2;

cout << "5 random numbers are:" <<r1 <<" " <<r2 <<" " <<r3 <<" " <<r4 <<" " <<r5 <<endl;
cout << "The first number to the power of the random number x is:" << pow(r1,x) <<endl;
cout <<"The average of the 5 numbers is:" <<setprecision(2) << (r1+r2+r3+r4+r5)/5.0 <<endl;

cout << "The square root of the second number is:" <<setprecision(4) <<sqrt(r2) <<endl;
cout << "The square root of the last number is:" <<setprecision(4) <<sqrt(r5) <<endl;
cout << "The geometric mean of the second, third, and fourth number is:" <<setprecision(4) << pow(r2 * r3 * r4,1.000/3) <<endl;

   return 0;
}
/*********************************************************************************
SAVE THE FIRST OUTPUT HERE

5 random numbers are:9 6 7 8 12
The first number to the power of the random number x is:81
The average of the 5 numbers is:8.4
The square root of the second number is:2.449
The square root of the last number is:3.464
The geometric mean of the second, third, and fourth number is:6.952
*/

/*********************************************************************************
SAVE THE SECOND OUTPUT HERE

5 random numbers are:6 13 4 5 11
The first number to the power of the random number x is:46656
The average of the 5 numbers is:7.8
The square root of the second number is:3.606
The square root of the last number is:3.317
The geometric mean of the second, third, and fourth number is:6.383

*/
