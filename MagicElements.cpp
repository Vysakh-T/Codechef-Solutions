#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,sum,count=0,i,a[100000];
	    cin>>N>>K;
	    for(i=0;i<N;i++)
	     cin>>a[i];
	    for(i=0;i<N;i++)
	    {   sum=0;
	        for(int j=0;j<N;j++)if(j!=i)sum+=a[j];
	        if((a[i]+K)>sum)
	        count+=1;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
