//WAP of DFA which accepts 3 consecutive 1 as input

#include<iostream>
using namespace std;
int main()
{
  int state =0, i=0;
  string input;
  cout<<"Enter any string: ";
  cin>>input;
  while(input[i]!='\0')
  {
    switch(state)
    {
      case 0:
        if(input[i]=='0')
        {
          state=0;
          i++;
        }
        else if(input[i]=='1')
        {
          state=1;
          i++;
        }
        else
          {
        cout<<"string not accepted.";
        return 0;
        }
        break;

     case 1:
        if(input[i]=='0')
        {
        state=0;
        i++;
        }
        else if(input[i]=='1')
        {
        state=2;
        i++;
        }
        else
        {
        cout<<"string not accepted";
        return 0;
        }
        break;

      case 2:
        if(input[i]=='0')
        {
        state=0;
        i++;
        }
        else if(input[i]=='1')
        {
        state=3;
        i++;
        }
        else
        {
        cout<<"string not accepted";
        return 0;
        }
        break;

      case 3:
        if(input[i]=='0' || input[i]=='1'){
        state=3;
        i++;}
        else
        {
        cout<<"string not accepted";
        return 0;
        }
        break;

    }
  }

  if(state==3)
  {
    cout<<"string is accepted.";
  }
  else{
    cout<<"string not accepted."; 
  }

return 0;
}