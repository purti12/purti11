#include<iostream>
using namespace std;
class decimal
{     
    		int i=1,j=n,n,  binaryn=0;
    public:
    	decimal()
    	{
            
    		cout<<" enter  Decimal  Number :";
		    cin>>n;
		    for(j=n;j>0;j=j/2)
				{
					binaryn=binaryn+(n%2)*i;
					i=i*10;
					n=n/2;
				}
		}
		friend int show(decimal);
	};
	int show(decimal A)
	{
	       	cout<<"binary number ="<<A.binaryn<<endl;
		}
		int main()
		{ 
		  decimal A;
		  show(A);
	}