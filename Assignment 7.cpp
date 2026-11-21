#include<iostream>
#include<string>
using namespace std;
int main()
{
 int sec_int = 999;
 int ent_sec;
 string input;
 int i=0;
 while(i<5)
 {
  cout<<"Enter Secret Integer(Only Integers Allowed) :"<<endl;
  cin>>input;
  bool valid=true;
  try
  {
    size_t pos;
    ent_sec = stoi(input,&pos);
    if(pos != input.length())
     {
      valid = false;
      
     }
  }
  catch(...)
  {
   valid = false;
   
  }
  
  if(valid == false)
  {
    cout<<"Invalid Data Type"<<endl;
  }
  else if(ent_sec == sec_int)
  {
   cout<<"Correct !"<<endl;
   break;
  }
  else if(ent_sec > sec_int)
  {
    cout<<"Too high !"<<endl;
  }     
  else if(ent_sec < sec_int)
  {
    cout<<"Too low !"<<endl;
  }
  if(i==4 && ent_sec != sec_int )
  {
    cout<<"Game Over !"<<endl;
    cout<<"Secret Integer is "<<sec_int<<endl;
  }
 i++;
 }
 return 0;
}