#include<iostream>
using namespace std;

int main()
{
int Arr[10],search;
for (int i=0;i<10;i++){
cout<<"enter "<<i+1<<"element"<<endl; 
cin>>Arr[i];
}
cout<<"Enter element you want to search"<<endl;
cin>>search;
int start=0,end=9;
int mid=start+(end-start)/2;
while(start<=end)
{
if(Arr[mid]==search)
{
cout<<"found";
return 0;
}
if(Arr[mid]>search)
{
end=mid-1;
}
else{
start=mid+1;
}
mid=start+(end-start)/2;
}
cout<<"Not Found"<<endl;
return 0;
}

