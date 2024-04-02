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
bool isPerfectSquare(ll num) {
    // If the square root is an integer, then it's a perfect square
    ll root = sqrt(num);
    return root * root == num;
}
int main()

{


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tccc= 1;
	cin >> tccc;

    while(tccc--){
        ll n;
        cin>>n;
        vll nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            
        }

        ll sum =0;
        for(int i=0;i<n;i++) sum+=nums[i];

         if (isPerfectSquare(sum)) {
        cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
  
		
	}

    return 0;
    
    
    }
