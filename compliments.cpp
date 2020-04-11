#include<iostream>
#include<cmath>

using namespace std;

int main() {
  //-------defining variables and initializing them-------------
  string name;
  char redo;

  do
  {
      //----receiving the variables from input--------------
      cout<<"What's your name?"<<endl;
      cin>>name ;
      cout<<endl<<endl;
      cout<<"You're amazing, " + name + "! I love your name :))"<<endl;
      cout<<"Can I tell you a secret? " + name + ", I think you're beautiful..!"<<endl;
      cout<<"...Unless your name is " + name + "..."<< endl;
      cout<<"... bruh u ugly af"<<endl;
      cout<<"enter y to change your name"<< endl;
      cin>>redo;
      cout<<endl<<endl;
      }
    while(redo=='y'||redo=='Y');

    return 0;

}
