//Author:
#include<iostream>

using std::cin;

int main()
{
   //declare variables here
    int first = 0;
    int second = 0;
    int biggest = 0;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  cin>>first;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
 cin>>second;

  //determine if first or second is bigger and store that in a third variable
if ( first > second )
{ 
        biggest = first;
}
else 
    {
            biggest = second
     ;} 
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<biggest;

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
