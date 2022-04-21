#include <bits/stdc++.h>
// SUPERSHARE ASSIGNMENT ---------> Scientific Calculator
using namespace std;

int main()
{
float a,b;
int z;
void Power(float,float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);
void Addition(float,float);
void Subtraction(float,float);
void Multiplication(float,float);
void Division(float,float);
void ProfitLoss(float,float);


cout<<"WHAT YOU WANT TO FIND: "<<endl;
cout<<"Press '1' for Power Calculation "<<endl;
cout<<"Press '2' for Sin Calculation "<<endl; 
cout<<"Press '3' for Square Calculation "<<endl; 
cout<<"Press '4' for Cos Calculation "<<endl; 
cout<<"Press '5' for Tan Calculation "<<endl;
cout<<"Press '6' for Log Calculation "<<endl;
cout<<"Press '7' for Base Log Calculation "<<endl;
cout<<"Press '8' for Addition Calculation "<<endl;
cout<<"Press '9' for Subtraction Calculation"<<endl;
cout<<"Press '10' for Multiplication Calculation"<<endl;
cout<<"Press '11' for Division Calculation"<<endl;
cout<<"Press '12' for Profit/Loss Calculation "<<endl;


cin>>z;
switch(z)
{
case 1:
cout<<"Enter the Number for Calculating its Power: "<<endl;
cin>>a;
cout<<"Enter the Power for a Number: "<<endl;
cin>>b;
Power(a,b);
break;

case 2:
cout<<"Enter the Number for Calculating SIN: "<<endl;
cin>>a;
Sine(a);
break;

case 3:
cout<<"Enter the Number for Calculating Square: "<<endl;
cin>>a;
Square(a);
break;

case 4:
cout<<"Enter the Number for Calculating COS: "<<endl;
cin>>a;
Cos(a);
break;

case 5:
cout<<"Enter the Number for Calculating TAN: "<<endl;
cin>>a;
Tan(a);
break;

case 6:
cout<<"Enter the Number for Calculating LOG: "<<endl;
cin>>a;
Log(a);
break;

case 7:
cout<<"Enter the Number for Calculating LOG WITH BASE 10: "<<endl;
cin>>a;
Baselog(a);
break;

case 8:
cout<<"Enter the Numbers to be Added"<<endl;
cin>>a>>b;
Addition(a,b);
break;

case 9:
cout<<"Enter the Number to be Subtracted"<<endl;
cin>>a>>b;
Subtraction(a,b);
break;

case 10:
cout<<"Enter the Numbers to be Multiplied"<<endl;
cin>>a>>b;
Multiplication(a,b);
break;

case 11:
cout<<"Enter the Dividend and Divisor respectively"<<endl;
cin>>a>>b;
Division(a,b);
break;

case 12:
cout<<"Enter Cost price and Selling Price respectively "<<endl;
cin>>a>>b;
ProfitLoss(a,b);
break;
}

return 0;

}

void Power(float x,float y)
{
float p;
p = pow(x,y);
cout<<"Power of "<< x <<" isto "<< y <<" : "<<p;
}

void Sine(float x)
{
float s;
s = sin(x);
cout<<"Sin of "<<x<<" : "<<s;
}

void Square(float x)
{
float sq;
sq = sqrt(x);
cout<<"Square of "<<x<<" : "<<sq;
}

void Cos(float x) 
{
float c;
c = cos(x);
cout<<"COS of "<<x<<" : "<<c;
}

void Tan(float x)
{
float t;
t = tan(x);
cout<<"TAN of "<<x<<" : "<<t;
}

void Log(float x)
{
float l;
l = log(x);
cout<<"Natural Logarithm of "<<x<<" : "<<l;
}

void Baselog(float x)
{
float bl;
bl = log10(x);
cout<<"LOG with Base 10 of "<<x<<" : "<<bl;
}

void Addition(float x,float y)
{
float p;
p = x + y;
cout<<"Addition of "<< x <<" isto "<< y <<" : "<<p;
}

void Subtraction(float x,float y)
{
float p;
p = x - y;
cout<<"Subtraction of "<< y <<" from "<< x <<" : "<<p;
}

void Multiplication(float x,float y)
{
float p;
p = x * y;
cout<<"Multiplication of "<< x <<" with "<< y <<" : "<<p;
}

void Division(float x,float y)
{
if(y==0)
{
cout<<"can't Divide with 0";
return;
}
float p;
p = x / y;
cout<<"Division of "<< x <<" by "<< y <<" : "<<p;
}

void ProfitLoss(float x, float y){
if (x == y)
cout << "No profit nor Loss";
else if (y > x)
cout<<"profit gained = "<< y-x;
else
cout<<"loss incurred = "<< x-y;
}