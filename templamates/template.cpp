// Author: Azer Aslanov

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define pll pair<long long,long long>
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vpi vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>

#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define rrep(i,a,b) for (int i = (a); i >= (b); i--)
#define each(x,a) for (auto &x : a)

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

const ll INF = 9e18;
const int MOD = 1000000007;
const int MOD2 = 998244353;

#define bitcount(x) __builtin_popcount(x)
#define bitcountll(x) __builtin_popcountll(x)
#define clz(x) __builtin_clz(x)
#define clzll(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctz(x)
#define ctzll(x) __builtin_ctzll(x)

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

ll power(ll a, ll b, ll mod = MOD) {
    ll r = 1;
    while (b) {
        if (b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}

ll gcdll(ll a, ll b) { return b == 0 ? a : gcdll(b, a % b); }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

int main() {
    FAST;
    return 0;
}
