#include <iostream>
using namespace std;
template < class T >
void swapping(T &a,T &b) {
    T t=a;
    a=b;
    b=t;
}
int main() {
char a='A',b='B';
int x=4,y=45;
cout << "before swapping A is" << a << " and B is " << b << endl;
swapping(a,b);
cout << "after swapping A is "<<a<<" and B is "<< b << endl;
swapping(x,y);
cout << "after swapping x is "<<x<< " and y is " << y << endl;
return 0;
}