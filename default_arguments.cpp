#include <iostream>
using namespace std;

void biodata(string name, int age , string city="perambur") 
{
    cout << name << " is from "<< city << " and he is "<< age << " years old" << endl;
}
int main() 
{
biodata("Sanjay",18,"Chennai");
biodata("Sandeep",18);
return 0;
}