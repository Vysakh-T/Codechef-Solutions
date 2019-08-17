#include <iostream>
using namespace std;

int main() {
    void sort(int[],int);
	int T;
	cin>>T;
	while(T--){
	    int k,n[100];
	    cin>>k;
	    for(int i=0;i<k;i++)cin>>n[i];
	    int l,p;
	    cin>>p;
	    p--;
	    l=n[p];
	    sort(n,k);
	    int pos;
	    for(int i=0;i<k;i++){if(n[i]==l)pos=i+1;}
	    cout<<pos<<"\n";
	}
	return 0;
}
void sort(int a[100],int l)
    {
        int i,j,temp;
        for(i=0;i<l-1;i++){
            for(j=0;j<(l-i-1);j++){
                if(a[j]>a[j+1]){ temp = a[j];a[j]=a[j+1];a[j+1]=temp; }
            }
        }
    }    
