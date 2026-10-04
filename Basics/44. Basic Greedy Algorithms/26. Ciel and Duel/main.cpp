// author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;
 
vector<int> lst1, lst2, lst3;
 

void solve() {
   int n, m;
    cin >> n >> m;
    
    for( int i = 1; i <= n; i ++ ) {
        string str; int x;
        cin >> str >> x;
        
        if( str == "ATK" )
            lst1.push_back( x );
        else
            lst2.push_back( x + 1 );
    }
    
    lst3.resize( m );
    for( int &x : lst3 )
        cin >> x;
    
    int ans = 0;
    sort( lst1.begin(), lst1.end() );
    sort( lst2.begin(), lst2.end() );
    sort( lst3.begin(), lst3.end() );
    
    /* we try to destroy only attack cards */
    
    for( int i = 1; i <= min( (int) lst1.size(), m ); i ++ ) {
        bool ok = true;
        
        for( int j = 0; j < i && ok == true; j ++ ) {
            if( lst1[j] > lst3[m - ( i - j )] )
                ok = false;
        }
        
        if( ok == true ) {
            int cst = 0;
            
            for( int j = 0; j < i; j ++ )
                cst += lst3[m - j - 1] - lst1[j];
            
            ans = max( ans, cst );
        }
    }
    
    /* we try to destroy all the cards, including the defense ones */
    
    bool ok = true;
    for( int x : lst2 ) {
        if( lst3.size() == 0 || lst3.back() < x )
            ok = false;
        else
            lst3.erase( lower_bound( lst3.begin(), lst3.end(), x ) );
    }
    
    ok &= ( lst1.size() <= lst3.size() );
    for( int i = 0; i < lst1.size() && ok == true; i ++ ) {
        if( lst1[i] > lst3[lst3.size() - ( lst1.size() - i )] )
            ok = false;
    }
    
    if( ok == true )
        ans = max( ans, accumulate( lst3.begin(), lst3.end(), 0, plus<int>() ) -
                  accumulate( lst1.begin(), lst1.end(), 0, plus<int>() ) );
    
    cout << ans << endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}