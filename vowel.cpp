#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
int main()
{
char a;
cin>>a;
switch(a)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
cout<<"Vowel ";
break;
default:
cout<<"not a vowel";
}
return 0;
}
