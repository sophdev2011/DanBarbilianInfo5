#include <iostream>
using namespace std;
int main()
{
    int n, m, p;
    cin>>n;
    m=n%10;
    p=n%10;
    while(n!=0)
        {
        if(n%10<m && n%10<p)
            m=n%10;
            p=n%10;
            n=n/10;
    }
            cout<<m<<" "<<p; 
            return 0;
}