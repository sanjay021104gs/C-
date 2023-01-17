/*  Question
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500,
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard
write a program to find his gross salary
da-dearness allowance
hra-house rent allowance 
bs - basic salary
gross salary - total salary
*/
#include <iostream>
using namespace std;
int main() {
float bs, hra , gross_salary , da;
cout << "Enter your salary: ";
cin >> bs;
if(bs <1500) {
    hra=bs*10/100;
    da=bs*90/100;
}
else {
    hra=500;
    da=bs*98/100;
}
gross_salary=bs+hra+da;
cout << "HRA : " << hra << endl;
cout << "DA : " << da << endl;
cout << "BS : "<< bs << endl;
cout << "--------------------------------"<< endl;
cout << "gross salary = " << gross_salary << endl;
return 0;
}
