
//Tapasweni Pathak
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <climits>
#include <cstdlib>

#define FORALL(i,a,b)				for(int i=a;i<b;++i)
#define FOREACH(i,a,b)				for(int i=a;i<=b;++i)

#define MAX(a,b)				( (a) > (b) ? (a) : (b))
#define MIN(a,b)				( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)				( (n >> b) & 1)
#define ODD(a)					(a&1?1:0)
#define EVEN(a)					(a&1?0:1)

#define MOD					1000000007
#define PI					3.1415925535897932384626433832795

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--){
		for (int i = 0; s[i]; ++i){
			if (s[i] == 'B' && s[i + 1] == 'G'){
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				++i;
			}
		}
	}

	cout << s;

    return 0;
}
