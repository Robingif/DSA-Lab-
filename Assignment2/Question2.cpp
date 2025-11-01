#include<iostream>
using namespace std;

int main()
{
int Arr[10];
for(int i=0;i<10;i++)
{
cout<<"Enter element"<<i+1<<endl;
cin>>Arr[i];
}

for(int i=1;i<10;i++)
{
for(int j=1;j<=10-i;j++)
{
if(Arr[j]<Arr[j-1])
{
swap(Arr[j],Arr[j-1]);
}
}
}
for(int i=0;i<10;i++)
{
cout<<Arr[i];
}

}