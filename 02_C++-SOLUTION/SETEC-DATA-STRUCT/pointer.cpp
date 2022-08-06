#include <iostream>
using namespace std;

void arrayAddress();

int main()
{
   int *p;
   cout << "Address p = " << p << endl;
   int a;
   // cout<< (p = &a);
   cout << "Adress a = " << &a << endl;

   return 0;
}

void arrayAddress()
{
   int a[2];
   cout << &a[0] << endl;
   cout << &a[1] << endl;
}

void arr_val_address()
{
   int a[2];
   a[0] = 10;
   a[1] = 20;
   cout << a[0] << endl;
   cout << &a[0] << endl;
   cout << a[1] << endl;
   cout << &a[1] << endl;
}

void pointerToArrAddress()
{
   int a[2];
   int *p;
   p = a;
   a[0] = 10;
   a[1] = 20;
   cout << a[0] << endl;
   cout << a[1] << endl;
}

void pointerToArrAddress2()
{
   int a[2];
   int *p;
   p = a;
   a[0] = 10;
   a[1] = 20;
   cout << *p << endl;
   cout << a[0] << endl;
   p++;
   cout << *p << endl;
}

void pointerToArrAddress3()
{
   int a[2];
   int *p;
   p = a;
   a[0] = 10;
   a[1] = 20;
   *p = 11;
   cout << *p << endl;
   p++;
   *p = 21;
   cout << *p << endl;
}

void pointerToArrAddress4()
{

   int a[2];
   int *p;
   p = a;
   a[0] = 10;
   a[1] = 20;
   *p = 11;
   cout << *p << endl;
   p++;
   *p = 21;
   cout << *p << endl;
   cout << a[0] << endl;
   cout << a[1] << endl;
}

void usingPtrOutputArr()
{

   int n;
   int a[100];
   int *p;
   cout << "Enter N = ";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cout << "Enter a[" << i << "] = ";
      cin >> a[i];
   }
   cout << "\n using pointer to output....\n";
   p = a;
   for (int i = 0; i < n; i++)
   {
      cout << "Value p = " << *p << endl;
      p++;
   }
   p = &a[0]; // p = a;
   cout << endl;
   for (int i = 0; i < n; i++)
   {
      cout << "Value p = " << *p << endl;
      p++;
   }
}

void usingPtrOutputArr2()
{

   int n;
   cout << "Enter N = ";
   cin >> n;
   int *p = new int[n];
   for (int i = 0; i < n; i++)
   {
      cout << "P[" << i << "] = ";
      cin >> p[i];
   }
}

void usingPtrOutputArr3()
{

   int n;
   cout << "Enter N = ";
   cin >> n;
   int *p = new int[n];
   for (int i = 0; i < n; i++)
   {
      cout << "P[" << i << "] = ";
      cin >> p[i];
   }
}

void usingPtrOutputArr4()
{
   /*
   Enter n = 3;
   a[0] = 1;
   a[1] = 2;
   a[2] = 3;

   Enter number element to add = 2
   a[3] = 4;
   a[4] = 5;

   list all elements
   a[0] = 1;
   a[1] = 2;
   a[2] = 3;
   a[3] = 4;
   a[4] = 5;
   */
   int n;
   cout << "Enter N = ";
   cin >> n;
   int *a = new int[n];
   for (int i = 0; i < n; i++)
   {
      cout << "a[" << i << "] = ";
      cin >> a[i];
   }
   cout << "\n Enter element to add = ";
   int element;
   cin >> element;
   int *p = a; // backup data from a[i] to *p

   a = new int[n + element];
   for (int i = 0; i < n; i++)
   {
      a[i] = p[i];
      for (int i = n; i < n + element; i++)
      {
         cout << "Enter a[" << i << "] = ";
         cin >> a[i];
      }
      cout << "\nList all elements...\n";
      n = n + element;
      for (int i = 0; i < n; i++)
         cout << "a[" << i << "]" << a[i] << endl;
   }
}

void usingPtrOutputArr5()
{

   int n;
   cout << "Enter N = ";
   cin >> n;
   int *a = new int[n];
   for (int i = 0; i < n; i++)
   {
      cout << "a[" << i << "] = ";
      cin >> a[i];
   }
   cout << "\n Enter element to delete = ";
   int del;
   cin >> del;
   int *index = new int[del]; // backup data from a[i] to *p

   for (int i = 0; i < del; i++)
   {
      cout<<"Index = ";
      cin>>index[i];
   }
   int *p = a;
   a = new int[n-del];
   int j = 0;
   for(int i = 0; i < n; i++){
      int b = 0;
      for(int s = 0; s < del; s++){
         if(i==index[s]){
            b = 1;
         }
         if(b==1){
            continue;
         }
         a[j] = p[i];
         j++;
      }
   }
   n = n -del;
   cout<<"\nList all elements...\n";
   for(int i = 0; i < n; i++){
      cout<<"a["<<i<<"]"<<a[i]<<endl;
   }
}