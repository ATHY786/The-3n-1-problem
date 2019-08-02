#include <iostream>
using namespace std;

int main() {
	int i,a,b,temp,c=1,max=0,var=0;
	cin>>a>>b;
	int array[b-a];
	if(a>0&&a<1000000&&b>0&&b<1000000)
	{
	for(int i=a;i<=b;i++)
	{
	    c=1;
	    temp=i;
	    while(temp!=1)
	    {
	        if(temp%2==0)
	        temp=temp/2;
	        else
	        temp=temp*3+1;
	        c++;
	    }
	    array[var]=c;
	    var++;
	}
	max=array[0];
	for(int k=0;k<b-a;k++)
	{
	    if(array[k]>max)
	    max=array[k];
	}
	cout<<max<<endl;
	}
	return 0;
}