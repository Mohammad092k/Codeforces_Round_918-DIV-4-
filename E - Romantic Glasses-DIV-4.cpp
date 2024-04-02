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
#define vpll vector<pair<ll ,ll >> 
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

		 ll n;
        cin >> n;

        ll ans = 0;

        map<ll, ll> m;

        vll nums(n);
        for (int i = 0; i < n; i++) cin >>nums[i];
            
        m[0] = 1;

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i%2 == 0) sum += nums[i];
           
            else sum-=nums[i];
            
            if (m[sum] ==1) ans = 1;
                
            else  m[sum]++;
               
        }
        if (ans) cout <<"YES"<< endl;
        
        else cout <<"NO"<< endl;
        
    }
	

    return 0;
    
    
    }
