#include<iostream>
using namespace std;


int main(){
 char operations;
 cout<<"Enter operations(+,-,*,/)";
 cin>>operations;
 int num1;   
 cout<<"Enter the value of num1"<<endl;
 cin>>num1;
 int num2;
 cout<<"Enter the value of num2"<<endl;
 cin>>num2;

switch (operations){
case'+':
cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
break;
case'-':
cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
break;

case'*':
cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
break;

case'/':
if(num2!=0){
cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
   }
else{
cout<<"Error! Cannot Divide by zero:"<<endl;
break;
   }
   
default:
cout<<"Error! operation is not exit:"<<endl;
break;
}
return 0;
}

