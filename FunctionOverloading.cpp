#include <iostream>
using namespace std;

class shape
{
public:
   void area(int radius)
   {
      cout << "Area of circle = " << 3.14 * radius * radius;
   }
   void area(int length, int breath)
   {
      cout << "Area of Rectangle = " << length * breath;
   }
   void area(long side)
   {
      cout << "Area of Square = " << side * side;
   }
   void area(int base, long height)
   {
      cout << "Area of Tringle= " << base * height / 2;
   }
};
int main()
{
   int ch;
   shape s;
   cout << "1.Area of circle\n2.Area of rectangle\n3.Area of square\n4.Area of triangle" << endl;
   cout << "ENter your choice :";
   cin >> ch;

   switch (ch)
   {
   case 1:
      s.area(9);
      break;
   case 2:
      s.area(45, 65);
      break;
   case 3:
      s.area(8l);
      break;
   case 4:
      s.area(12, 8l);
      break;

   default:
      cout << "Invalid";
      break;
   }
}