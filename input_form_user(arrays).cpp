#include<iostream>
using namespace std;

int main()
{
  int x[6];
  cout<<"enter the element:"<<endl;
  for (int j = 0; j<6; j++)
  {

    cin>>x[j];
  }
      cout<<"element:"<<endl;
 
  for (int i = 0; i<6; i++)
  {
    cout<<x[i]<<endl;
  }
}
/*output
enter the element:
10 20 30 40 50 60
element:
10
20
30
40
50
60
*/
