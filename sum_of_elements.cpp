#include<iostream>
using namespace std;
int main()
{
    int x[6],i,sum=0,avg;

    cout<<"Enter array: ";
    for(i=0;i<6;i++)
    {
        cin>>x[i];   //input from user 
    }

    cout<<"The elements are: "<<endl;
    for(i=0;i<6;i++)
    {
        cout<<x[i]<<endl;  //printing the elements
    }

    for(i=0;i<6;i++)
    {
        sum=sum+x[i];
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    avg=sum/6;
    cout<<"The average of elements is: "<<avg<<endl;
}

/*Output
Enter array: 1 3 4 6 7 9
The elements are: 
1
3
4
6
7
9
The sum of elements is: 30
The average of elements is: 5*/
