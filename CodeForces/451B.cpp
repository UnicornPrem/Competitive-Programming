
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
#include <bitset>
#include <deque>
#include <list>

#define FORALL(i,a,b)				for(int i = a; i < b; ++i)
#define FOREACH(i,a,b)				for(int i = a; i <= b; ++i)
#define REP(i,n) 		                for(int i = 0; i < n ; ++i)
#define REVALL(i,n) 		                for(int i = n ; i >= 0 ; --i)
#define REV(i,a,b) 		                for(int i = a ; i >= b ; --i)
#define TR(c,i) 				for(typeof((c).begin()) i=(c).begin();	i!=(c).end(); i++)

#define SC(n) 			                scanf("%d", &n)

#define MAX(a,b)				( (a) > (b) ? (a) : (b))
#define MIN(a,b)				( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)				( (n >> b) & 1)
#define ODD(a)					(a & 1 ? 1 : 0)
#define EVEN(a)					(a & 1 ? 0 : 1)

#define MOD					1000000007
#define PI					3.1415925535897932384626433832795
#define INF 					10000000000000LL 

#define PP 					pair<int, int> 
#define PB(a) 					push_back (a)
#define ALL(v) 					v.begin () , v.end () 
#define	VI    					vector<int> 
#define MII					map<int, int> 
#define MSI					map<string, int> 
#define VII					vector<vector<int> > 
#define VPP					vector<pair<int, int> > 
#define VIL                 			vector<long long int>
#define VIITER					vector<int>::iterator
#define MAXVEC(a)				max_element (a.begin (), a.end ())
#define MINVEC(a)				min_element (a.begin (), a.end ())

#define LLI					long long int
#define ULLI					unsigned long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    /*
    int T;
    SC(T);
    while (T--){
    }
    */
	int n, start = 1, end = 1;
	bool flag = false;
	cin >> n;
	LLI ar[n + 5];
	ar[0] = -1;
	ar[n + 1] = INF;
	FOREACH (i, 1, n){
		cin >> ar[i];
	}
	
	FOREACH (i ,1, n){
		if (ar[i] > ar[i + 1]){
			start = i;
			if (flag){
				cout << "no" << endl;
				return 0;
			}
			flag = true;
			while (ar[i] >= ar[i + 1] && i < n){
				++i;
			}
			end = i;
		}
		if (ar[start - 1] <= ar[end] && ar[start] <= ar[end + 1]) {
		}
		else
		{
			cout << "no" << endl;
			return 0;
		}

	}
	cout << "yes"<< endl;
	cout << start << " " << end << endl;

    return 0;
}
