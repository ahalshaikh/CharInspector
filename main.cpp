//Author:
#include<iostream>

using namespace std;

int main()
{
  char letter;
  cout<<"What character do you want to know about?\n";
  cin>>letter;

  if ((letter >= 'A') && (letter <= 'Z'))
  {

  cout<<letter;
  //when user's entry is between A-Z...
  cout<<" is an upper case letter!\n";

  }
else if ((letter >= 'a') && (letter <= 'z'))
  {
  
  cout<<letter;
  //when user's entry is between a-z...
  cout<<" is a lower case letter!\n";

  }
  else 
  {
  cout<<letter;
  //in all other cases...
  cout<<"?! Pssh. What are you talking about?\n";

  }
  

  
  //no matter what they enter...
  cout<<"The ASCII value is: ";
  cout<<(int)letter<<endl;
  return 0;
}
