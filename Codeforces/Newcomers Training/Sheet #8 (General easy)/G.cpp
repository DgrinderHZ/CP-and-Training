#include <bits/stdc++.h>
using namespace std;
 
//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfstr(v) scanf("%s", v);
#define sz(v) (int)v.size()
#define ndl puts("")
#define SS stringstream
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
#define prec setprecision(n)
 
//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
//#define N 100000010
 
int compare( string s, string ss) {
 
         for( int i = 0 ; i < s.size() ; i++){
 
                    if( isupper(s[i])) {
                              if(  s[i] == toupper( ss[i] )  ) continue;
                              if( s[i] < toupper( ss[i] ) ) return -1;
                              else return 1;
                    }else{
                               if(  s[i] == tolower( ss[i] )  ) continue;
                               if( s[i] < tolower( ss[i] ) ) return -1;
                              else return 1;
                    }
        }
   return 0;
}
 
int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
 
  /* Code here */
  string s , ss;
  getline(cin , s);
  getline( cin, ss);
 
  cout<< compare(s, ss);
 
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
