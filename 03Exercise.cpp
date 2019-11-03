// 03Exercise.cpp
// Author: Mauricio Quijada

#include <iostream>
using namespace std;

int main()
{
   int cost = 0;
   int money = 100;
   int change = 0;

   cout << "How much it cost" << endl;
   cin >> cost; //value between 0 to 100
   change = money - cost;
   
   cout << "Change "<< endl;
   cout << (change / 10) << " Pounds "<< (change % 10) << " penies " << endl;
   
   return 0;
}
