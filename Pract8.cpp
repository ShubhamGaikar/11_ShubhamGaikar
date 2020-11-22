#include<iostream>
using namespace std;
class area_of_circle
{

public: float r, area;
void input(float a)
{
cin>>a;
r=a;
}

void Area()
{
area = 3.14 * r * r;
}
void display()
{
cout << "Area of circle is:" << area<<" sq-cm ";
}
};

int main() {
area_of_circle obj;
float a;
cout << "Enter radius of a circle in (cm):";
obj.input(a);
obj.Area();
obj.display();

return 0;
}
