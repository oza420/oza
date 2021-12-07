#include<iostream>
#include<Windows.h>
using namespace std;
class basic
{
protected:
 double cost;
 string no;
 char ch, op;
public:
 void show(char s)
 {
   cout << "\n        WELCOM TO CAR WORK SHOP             \n" << endl;
 }
 void details()
 {
  cout << "   \n\n Instructions & Guidance \n\n  " << endl;
  cout << "   cost for repairing is one per thing RS 500\n " << endl;
  cout << "   cost for washing a car is RS 1000\n " << endl;
  cout << "   cost for survice is RS 2000 \n" << endl;
 }
 char getdata()
 {
  cout << "\n\n we have following functions available \n\n " << endl;
  cout << " REPERING(1)\n ";
  cout << " WASHING(2)\n ";
  cout << " CHANGING(3)\n ";
  cout << " select your option " << endl;
  cin >> ch;
  switch (ch)
  {
  case '1':
   cout << "You are advice to go maintenance shop " << endl;
   Sleep(3000);
   break;
  case '2':
   cout << "You are advice to go Washing shop " << endl;
   Sleep(3000);
   break;
  case '3':
   cout << "You are advice to go Engineering shop " << endl;
   Sleep(3000);
   break;
  }
  return ch;
  system("cls");
 }
 void get()
 {
  cout << " enter your option " << endl;
  cin >> ch;
  cout << " do  u want to enter anyother options ? ( y / n ) " << endl;
  cin >> ch;
  while (ch != '0')
  {
   cout << " enter your option " << endl;
   cin >> ch;
   cout << " Are you sure  ? ( y / n ) " << endl;
   cin >> ch;
  }
  cout << " your parts will  be repaired after 10 minutes " << endl;
 system("cls");
 }
};
class repairing : public basic
{
protected:
public:
 void parts()
 {
  cout << " price list for repairing items  " << endl;
  cout << "\n 1." << "Engine Repering = 5000 " << endl;
  cout << "\n 2." << "Battery = 1500 " << endl;
  cout << "\n 3." << "Brake = 1000 " << endl;
  cout << "\n 4." << "Gear Box = 2000 " << endl;
  basic::get();
  cout << " your items are being repaired " << endl;
 }
};
class washing : public basic
{
public:
 void wash()
 {
  cout << " Charge for car washing is 1000 RS " << endl;
  cout << " your car will be washed after Repairing " << endl;
 }
};
class changing : public basic
{
protected:
public:
 void changes()
 {
  cout << " price list is " << endl;
  cout << "\n 1. front mirror = 2000 ";
  cout << "\n 2. back mirror = 500 ";
  cout << "\n 3. tyres = 2000 each ";
  basic::get();
  cout << " your parts will be changes after 5 minutes " << endl;
  Sleep(5000);
  system("cls");
 }
};
int main()
{
 char a;
 repairing r;
 washing w;
 changing c;
 r.show('*');
 r.details();
 a = r.getdata();
 if (a == '1')
 {
  r.parts();
 }
 if (a == '3')
 {
  c.changes();
 }
 else if (a == '2')
 {
  c.show('*');
  w.wash();
 }
 else
 {
  cout << " invalid option " << endl;
 }
 cout << " THANK YOU " << endl;
 system("pause");
 return 0;
}
