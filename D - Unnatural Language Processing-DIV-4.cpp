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
    int tccc;
    cin >> tccc;
    while (tccc--)
    {

        ll n;
        cin >> n;
        string s;
        cin >> s;
        string resu;

        map<int, int> m;

        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;

		ll k= s.size();
        int i=0;
        while(i< k){
            if (m[s[i]] == 1)
            {
                resu.push_back(s[i]);
                int j = i + 1;
                
                 if (j + 1 <= k - 1)
                {

                    if (m[s[j]]==0 and m[s[j + 1]]==0)
                    {
                        resu.push_back(s[j]);
                        resu.push_back('.');
                        i = j;
                    }
                    else  resu.push_back('.');
                    
                }
            }
            else resu.push_back(s[i]);
            
			i++;
        }

        cout << resu << endl;
    }

    return 0;

}
