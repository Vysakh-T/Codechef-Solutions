#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int m,n,i;
	    cin>>m>>n;
	    if(m<=1)m=2;
	    for(i=m;i<=n;i++)
	    {
	        int j,flag=1;
            for(j=2;j<=sqrt(i);j++)
                {
                  if(i%j==0){flag=0;goto f;}
                }
            f:
	        if(flag==1)cout<<i<<"\n";
	    }
	    cout<<"\n";
	}
	return 0;
}

