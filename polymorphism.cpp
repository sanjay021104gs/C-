#include <iostream>
using namespace std;

class Enemy {
    protected:
        int attackpower;
    public:
        void setattackpower(int a) {
            attackpower=a;
        }
};
class ninja : public Enemy {
    public:
        void attack() {
            cout << "ninja attackpower is " << attackpower << endl;
        }
};
class monster : public Enemy {
    public:
        void attack() {
            cout << "monster attack power is " << attackpower << endl; 
        }
};
int main() {
    ninja n;
    monster m;
    Enemy*e1 =&n;
    Enemy*e2 =&m;
e1->setattackpower(59);
e2->setattackpower(45);
n.attack();
m.attack();
}       