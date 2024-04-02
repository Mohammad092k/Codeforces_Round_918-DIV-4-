#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
				  tree_order_statistics_node_update>;
#define ld long double
#define md 1000000007
#define vll vector<ll>
#define vvll vector<vector<ll> >
#define v2(dt, name, n, m, ini) vector<vector<dt>> name(n, vector<dt>(m, ini))
#define pll pair<ll, ll>
int hcf(int a , int b){if(b==0) return a;a%=b;return hcf(b,a);}

int main()

{


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tccc= 1;
	cin >> tccc;

    while(tccc--){
        string ans = "";
         for(int i=0;i<3;i++){
			vector<int> v(3,0);
			for(int j=0;j<3;j++){
				char ch;
				cin>>ch;

				if(ch=='A') v[0] =1;
				if(ch=='B') v[1] =1;
				if(ch=='C') v[2] =1;

			}
			 if(v[0]==0) ans = "A";
			 if(v[1]==0) ans = "B";
			 if(v[2]==0) ans = "C";
		 }
		
          cout<<ans<<endl;

		}
	
    return 0;
    
    
    }
