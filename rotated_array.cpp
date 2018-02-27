#include<iostream>
#include<vector>
using namespace std;

vector<int> cycle(vector<int> a, int d)
{

 vector<int> b;
 int n=a.size();

 for(int i=d;i<n;i++)
   b.push_back(a[i])  ;

 for(int j=0;j<d;j++)
   b.push_back(a[j]);


 return b;


}


int main()
{

int n,d;
cout<<"Enter Array size and Number of Rotations:"<<endl;
cin>>n>>d;
vector<int> a(n);
cout<<"Enter Elements of Array:"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];

}

a=cycle(a,d);
cout<<"Rotated Array:"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i];

}



}
