//https://vjudge.net/problem/CodeForces-704A

#include <bits/stdc++.h>

using namespace std;

int const N = 3e5 + 1;
int n, q, cnt[N], events[N], to[N], res[N];
bool vis[N];

int main() {
  scanf("%d %d", &n, &q);
  int type, x, sum = 0, lst = 1, tmp = 0, evecnt = 1;
  for(int i = 1; i <= q; ++i) {
    scanf("%d %d", &type, &x);

    if(type == 1) {
      ++sum;
      ++cnt[x];
      events[evecnt++] = x;
    } else if(type == 2) {
      sum -= cnt[x];
      cnt[x] = 0;
      to[x] = evecnt - 1;
    } else {
      for(; lst <= x; ++lst) {
        if(vis[lst])
          continue;
        if(to[events[lst]] >= lst) {
          vis[lst] = true;
          continue;
        }
        --sum;
        --cnt[events[lst]];
        vis[lst] = true;
      }
    }

    res[i] = sum;
  }

  for(int i = 1; i <= q; ++i)
    printf("%d\n", res[i]);

  return 0;
}