#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   char str1[20];
   int l,flag=0;
   int i;
   cout<<"enter the string:";
   cin>>str1;
   l= strlen(str1);
   for(int i=0;i<l;i++)
   if(str1[i]!=str1[l-i-1])
   {
       flag=1;
       break;
   }
   if(flag)
   {
       cout<<str1<<" not a palindrome"<<endl;
   }
   else {
       cout<<str1<<" is palindrome"<<endl;
       
   }
   return 0;
   
   
}
