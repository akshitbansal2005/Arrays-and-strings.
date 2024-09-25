#include<iostream>
using namespace std;
int main()
{
    int max,min,i;
    int a[5] = {2,4,6,8,10};

    max = a[0];
    min = a[0];

    for(i=0;i<5;i++)
    {
        if(a[i]>=max)
        {
            max = a[i];
        }
        if(a[i]<=min)
        {
            min = a[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is:"<<min<<endl;
}

/* Output 
Max is: 10
Min is:2
*/
