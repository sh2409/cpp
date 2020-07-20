#include<iostream.h>
#include<conio.h>
class Test {
private:
   int x, y, z;
public:

   void input() {
       cout << "Enter Three Numbers :";
       cin >> x >> y>>z;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y && t.x > t.z) {
       cout << "\nThe Largest is :" << t.x;
   } else if (t.y > t.z) {
       cout << "\nThe Largest is :" << t.y;
   } else {
       cout << "\nThe Largest is :" << t.z;
   }
}

void main() {
   clrscr();
   Test t;
   t.input();

   find(t);
   getch();
}


