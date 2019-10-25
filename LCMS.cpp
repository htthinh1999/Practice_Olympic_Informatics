#include <iostream>
#include <iomanip>
#include <random>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <sstream>
#include <bitset>
#include <cassert>
#include <fstream>
#include <queue>

#define len(X) ((int)(X).size())

#ifdef __LOCAL
	#define DBG(X) cout << #X << "=" << (X) << '\n';
#else
	#define DBG(X)
#endif
 
using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INT_INF = (int)(2e9);
const ll  LL_INF  = (ll)(2e18);

const int NIL = -1;
static mt19937 _g(time(nullptr));

inline ll randint(ll a, ll b) { ll w = (_g() << 31LL) ^ _g(); return a + w % (b - a + 1); }
inline void fast_io() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); };
template<typename T> inline T sign(T x) { return T(x > 0) - T(x < 0); }
template<typename T, typename S> inline ostream& operator<<(ostream& os, const pair<T, S> p) { cout << "[" << p.first << ";" << p.second << "]"; return os; }
template<typename T> inline ostream& operator<<(ostream& os, const vector<T>& v) { for(auto el: v) cout << el << " "; return os; }
template<typename T> inline T fetch() { T ret; cin >> ret; return ret; }
template<typename T> inline vector<T> fetch_vec(int sz) { vector<T> ret(sz); for(auto& elem: ret) cin >> elem; return ret; }

const int MOD      = 998244353;
const int MAXVALUE = (int)1e6 + 4321;

int add(int x, int y) {
	return (x + y >= MOD ? x + y - MOD : x + y);
}

int sub(int x, int y) {
	return (x - y < 0 ? x - y + MOD : x - y);
}

int mult(int x, int y) {
	return (x * 1LL * y) % MOD;
}

int binpow(int x, int y) {
	if(y == 0 || x == 1) {
		return 1;
	}

	if(x == 0) {
		return 0;
	}

	int rez = binpow(x, y / 2);
	rez = mult(rez, rez);

	if(y & 1) {
		rez = mult(rez, x);
	}

	return rez;
}

int divide(int x, int y) {
	return mult(x, binpow(y, MOD - 2));
}

int sum[MAXVALUE], n;

void solve() {
	cin >> n;
	int full_sum = 0;

	for(int i = 0; i < n; ++i) {
		int value;
		cin >> value;
		full_sum = add(full_sum, value);

		/*for(auto& i: divs[value]) {
			sum[i] = add(sum[i], value);
		}*/

		for(int i = 1; i * i <= value; ++i) {
			if(value % i == 0) {
				sum[i] = add(sum[i], value);

				if(i * i != value) {
					sum[value / i] = add(sum[value / i], value);
				}
			}
		}
	}

	for(int i = 1; i < MAXVALUE; ++i) {
		sum[i] = mult(sum[i], sum[i]);
	}

	for(int i = MAXVALUE - 1; i > 0; --i) {
		for(int j = 2 * i; j < MAXVALUE; j += i) {
			sum[i] = sub(sum[i], sum[j]);
		}
	}

	int answ = 0;

	for(int i = 1; i < MAXVALUE; ++i) {
		int cur = sum[i];
		cur = divide(cur, i);

		answ = add(answ, cur);
	}

	answ = sub(answ, full_sum);
	answ = divide(answ, 2);

	cout << answ << '\n';
}

int main() {
	freopen("LCMS.INP","r",stdin);
   	freopen("LCMS.OUT","w",stdout);	
	fast_io();
	solve();

	return 0;
}

