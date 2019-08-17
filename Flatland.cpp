#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	    int T;
	    void f(int &,int &);
	    cin>>T;
	    for(int l=0;l<T;l++)
	    {   int N;
	        cin>>N;int c=0;
	        f(N,c);
	        cout<<c<<"\n";
	        
	    }
	    
	return 0;
}
void f(int &N,int &c)
	    {
	        for(int i=N;i>0;i--)
	        {
	            float s;
	            s=sqrt(i);
	            if(s==int(s)){ c++; N-=i;break; }
	        }
	       if(N!=0)f(N,c);
	    }