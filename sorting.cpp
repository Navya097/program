#include<iostream>
using namespace std;
template<class x>void sort(x *a,int size)
{
    x t;
    for(int i=0;i<size;i++)
    for(int j=(size-1);j>=i;j--)
    {
        if(a[j-1]>a[j])
        {
            t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
        }
    }
}
int main()
{
    int i,n;
    cout<<"enter integer array size";
    cin>>n;
    int p[n];
    cout<<"enter"<<n<<"integer ";
    for(i=0;i<n;i++)
    cin>>p[i];
    cout<<"actual sorted integer array";
    cin>>p[i];
    sort(p,n);
    cout<<"sorted integer array";
    for(i=0;i<n;i++)
    cout<<p[i];
    char q[n];
        cout<<"enter character array size";
    cin>>n;
    
    cout<<"enter"<<n<<"character array size";
    for(i=0;i<n;i++)
    cin>>q[i];
    cout<<"actual sorted character array";
    cin>>q[i];
    sort(q,n);
    cout<<"sorted character array";
    for(i=0;i<n;i++)
    cout<<q[i];
    float r[n];
        cout<<"enter floating array size";
    cin>>n;
    
    cout<<"enter"<<n<<"floating array size";
    for(i=0;i<n;i++)
    cin>>r[i];
    cout<<"actual sorted floating array";
    cin>>r[i];
    sort(r,n);
    cout<<"sorted character array";
    for(i=0;i<n;i++)
    cout<<r[i];
}
