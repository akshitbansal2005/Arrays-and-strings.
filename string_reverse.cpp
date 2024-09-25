#include<iostream>
using namespace std;
int main()
{
    string str = " SYMBI ";
    int i;
    cout<<"String in reverse is: "<<endl;
    for(i=str.length()-1;i>0;i--)
    {
        cout<<str[i];
    }
}

/*Output
String in reverse is: 
 IBMYS
*/
