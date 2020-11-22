#include<iostream>
#include<conio.h>
using namespace std;
class date
{
 public: int day;
 int month;
 int year;
 void getdata()
 {
 cout<<"ENTER TODAYS DATE D M Y";
 cin>>day>>month>>year;
 }
 void putdata()
 {
 cout<<"Todays date is \t"<<day<<"-"<<month<<"-"<<year;
 }
};
int main()
{
 date obj; // object of class date
 obj.getdata();
 obj.putdata();
 return 0;
}
