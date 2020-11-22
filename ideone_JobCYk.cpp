#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"


int main() {
	
	ll t;
    cin>>t;

    while(t--){

        ll n,x;
        cin>>n>>x;


        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll count=0;
        sort(a,a+n);

        ll no=1;
        ll sum =0;
        for(ll i=n-1;i>=0;i--){
            sum += a[i]; 
            if( (sum/(no*1.0))  >= x ){
                count++;
                no++;
            }else{
                break;
            }
        }

        cout<<count<<"\n";

    }
	
	
	

	return 0;
}