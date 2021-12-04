#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "Enter elements: ";
   int *ptr = data;

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
   {
       cout << endl << *(ptr + i);
   }
}