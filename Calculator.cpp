//Calculator to perform various basic operations,arithmetic operations,Trigonometric operations//

#include<iostream>
#include<cmath>
using namespace std;

int fact(int n)
{ if(n==1 || n==0)
{return 1;
}
return n * fact(n-1);
	
}


void basicOp(int a)
{ if(a>0 || a==0){
  cout<<"(1) "<<"Square root of the number is "<<sqrt(a)<<endl;
  cout<<"(2) "<<"Logarithm value(base-10) of number is "<<log10(a)<<endl;
  cout<<"(3) "<<"Logarithm value(base-e) of number is "<<log(a)<<endl;
  cout<<"(4) "<<"Factorial of the number is "<<fact(a)<<endl;}
  cout<<"(5) "<<"Absolute value of the number is "<<abs(a)<<endl;
  cout<<"(6) "<<"Square of the number is "<<a*a<<endl;
  cout<<"(7) "<<"Cube of the number is "<<a*a*a<<endl;
  cout<<"(8) "<<"Cube root of the number is "<<cbrt(a)<<endl;
  
  cout<<endl<<endl;
}

void arithOp(int p,int q)
{ 
  cout<<"(1) "<<"Sum of the two numbers is "<<p+q<<endl;
  cout<<"(2) "<<"Difference between two numbers is "<<p-q<<endl;
  cout<<"(3) "<<"Division of the first number by second number give "<<p/q<<endl;
  cout<<"(4) "<<"Remainder when the first number is divided by second number gives "<<p%q<<endl;
  cout<<"(5) "<<"Multiplication of the two numbers is "<<p*q<<endl;	
  cout<<endl;
}

void trigonoOp(int v)
{ cout<<"The value is provided in radians "<<endl;
  cout<<"(1) "<<"Sine of the  number is "<<sin(v)<<endl;
  cout<<"(2) "<<"Cosine of the number  is "<<cos(v)<<endl;
  cout<<"(3) "<<"Tangent of the number is "<<tan(v)<<endl;
  cout<<"(4) "<<"Hyperbolic Tangent of the number is "<<tanh(v)<<endl;
  cout<<"(5) "<<"Hyperbolic cosine of the number is "<<cosh(v)<<endl;
  cout<<"(6) "<<"Arc tangent of the number is "<<atan(v)<<endl;
  if(v>=-1 && v<=1)
  {cout<<"(7) "<<"Arc cosine of the number is "<<acos(v)<<endl;
   cout<<"(8) "<<"Arc sine  of the number is "<<asin(v)<<endl;
  }
  
  cout<<endl;	
}

void decimalOp(double d)
{ cout<<"(1) "<<"Floor value of the decimal number is "<<floor(d)<<endl;
  cout<<"(2) "<<"Ceiling value  of the number  is "<<ceil(d)<<endl;
	
}

int main()
{  cout<<"Please enter the    !!!! 'on'!!!!   button to turn on the calculator "<<endl;
string ent;
cin>>ent;
if(ent=="on")
{ cout<<"        Calculator is turned on    "<<endl;
}
else
{ cout<<"Calculator is Off"<<endl;
return 0;
}

int count,option;
cout<<"!!!!!!! Welcome in the Calculator !!!!!!"<<endl;
cout<<"Enter the number of operations you want to perform "<<endl;
cin>>count;

while(count--){
cout<<"Enter '1' to perform basic operations on the number "<<endl;
cout<<"Enter '2' to perform arithmetic operations on the  two numbers "<<endl;
cout<<"Enter '3' to perform trigonometric operations on the number "<<endl;  
cout<<"Enter '4' to perform operation on decimal number "<<endl;
cout<<"Enter '5' to turn off the calculator "<<endl; 
cout<<endl<<endl;
cin>>option;
switch(option)
{
case 1:
int num1;
cout<<"Enter the number(integer) please"<<endl;
cin>>num1;
basicOp(num1);
break;	

case 2:
int num2,num3;
cout<<"Enter the two numbers(integers)"<<endl;
cin>>num2>>num3;
arithOp(num2,num3);
break;

case 3:
int val;
cout<<"Enter the number(integer)"<<endl;
cin>>val; 
trigonoOp(val);
break;

case 4:
double dp;
cout<<"Enter the decimal number(double)"<<endl;
cin>>dp;
decimalOp(dp);
break;
	
case 5:
return 0;
break;

default:
cout<<"Wrong Input "<<"Please enter the correct input"<<endl;
break;	
	
}
}
cout<<"Thanks for using the calculator"<<endl;
return 0;
}

