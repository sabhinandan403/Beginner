#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the no. of elements you want to insert"<<endl;
cin>>n;
int a[n];
cout<<"Enter elements"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int max=a[0];
cout<<"Entered elements are"<<endl;
for(int i=0;i<n;i++)
{
    cout<<"\t"<<a[i]<<"\t";
}
  
for(int i=0;i<n;i++){
    if(max<a[i]){
        max=a[i];
    }
}
cout<<"Maximum no is"<<max;
}
