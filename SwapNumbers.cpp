//Swap two number entered by a user
#include <iostream>
#include <String> 
using namespace std;  
int main()  
{
    //Variable declaration
    int x, y; string name;
    //Ask the user of the numbers
    cout<<"Enter the first number\n";
    cin>>x;
    cout<<"Enter the second number\n";
    cin>>y;
    //Enter your full name
    cout<<"Enter your full name\n";
    getline(cin>>ws,name);cout<<endl;
    //The code to split the name will be here in future
    cout<<"Hello "<<name<<endl;
    cout<<"Before swap x= "<<x<<" y= "<<y<<endl;      
    x=x*y; //Eg if x=50 (5*10)    
    y=x/y; //Eg if y=5 (50/10)    
    x=x/y; //Eg if x=10 (50/5)    
    cout<<"After swap x= "<<x<<" y= "<<y<<endl;      
return 0;  
}  