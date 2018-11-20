/**
PART B
Write a program that acts as a self-checkout register at a store and lets the user buy 2 items.

The program will prompt the user and read in:
- the name of item 1, such as mechanical pencil.
- the price of item 1 and number of items 1, such as: 2 2.50
- the name of item 2, such as  binder
- the price of item 2 and the number of items 2, such as:  3 7.25
Read both the price and the number in one C++ statement
Then the program calculates the total cost of the items, including the sales tax of 8.675%.
The tax should be defined as a constant in the program, and not used as a literal.
The program prints the receipt on screen. The output should be in column format,
and the prices are with 2 digits after the decimal point. You can assume the item names
will not be more than 20 characters wide.




Uyen Vo
*/
#include <iomanip>
#include <iostream>

using namespace std;


int main()
{
string item1, item2,itemsAll;
int item1Amount,item2Amount;
double item1Price, item2Price;
const double TAX = 0.08675;

double item1Total, item2Total, items, itemsTotal;

cout <<"Item 1 is mechanical pencil" <<endl;
cout << "Enter the amount of item 1:\t" ;
cin >> item1Amount;
cout << "Enter the price of item 1:\t" ;
cin >>item1Price;

item1Total = item1Amount * item1Price;
cout << "Total of item 1 is" << setprecision(2) << fixed << setw(8) <<item1Total <<endl;

cout << "Item 2 is binder" <<endl;
cout << "Enter the amount of item 2:\t" ;
cin >> item2Amount;
cout << "Enter the price of item 2:\t" ;
cin >>item2Price;

item2Total = item2Amount * item2Price;
cout << "Total of item 2 is" <<setprecision(2) << fixed  << setw(8) <<item2Total <<endl;


items = item1Total + item2Total;
itemsTotal = (items * TAX) + items;
cout << "Total of all items are" <<setprecision(2) << fixed <<setw(8) <<itemsTotal <<endl;


    return 0;
}
/***********************************************************************
SAVE THE FIRST OUTPUT HERE:
mechanical pencil, 3 at 2.50 each
binder, 5 at 7.25 each

Item 1 is mechanical pencil
Enter the amount of item 1:	3
Enter the price of item 1:	2.50
Total of item 1 is    7.50
Item 2 is binder
Enter the amount of item 2:	5
Enter the price of item 2:	7.25
Total of item 2 is   36.25
Total of all items are   47.55

/***********************************************************************
SAVE THE SECOND OUTPUT HERE (input of your choice)
Item 1 is mechanical pencil
Enter the amount of item 1:	2
Enter the price of item 1:	3.0
Total of item 1 is    6.00
Item 2 is binder
Enter the amount of item 2:	3
Enter the price of item 2:	5.0
Total of item 2 is   15.00
Total of all items are   22.82
*/
