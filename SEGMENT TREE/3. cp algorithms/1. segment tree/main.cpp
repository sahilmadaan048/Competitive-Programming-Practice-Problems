
void build(int a[], int c, int tl, int tr) {
    if(tl == tr) {
        t[v] = a[tl];
    }
    else {
        int tm = (tl + tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[2*v+1];
    }
}


int sum(int v, int tl, int tr, int l, int r) {
    if(l > r) {
        return 0;
    }
    if(l == tl and r == tr) {
        return t[v];
    }
    return sum(v*2, tl, tm, 1, min(r, tm)) + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
} 



void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}