#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int key=5;
    int x[5];
    cout<<"Enter the value: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }
    cout<<"Find the location: "<<endl;
    for(j=0;j<5;j++)
    {
       if (x[j]==key)
       {
        cout<<"Array value is: "<<endl;
        cout<<"Location: "<<endl;
        cout<<j;
       }
        else if (j==5)
        {
            cout<<"key not found"<<endl;
        } 
    }
}

/*output
Enter the value: 
*/
