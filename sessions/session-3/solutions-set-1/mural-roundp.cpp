#include <bits/stdc++.h>
using namespace std;

// basic copy over.
inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
      neg = 1;
      c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
      x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
      x = -x;
}

int main ( int argc, char* argv[], char* envp[])
{
    int t = 0;
    fastRead_int(t);

    for(int ll = 1; ll <= t; ll++){
        int n = 0;
        fastRead_int(n);

        string temp;
        cin >> temp;

        int len = (n + 1) / 2, sum = 0, Max = INT_MIN;

        for(int i = 0; i < len; i++){
            sum += (int)(temp[i] - '0');
        }

        Max = max(sum, Max);

        for(int i = 1; i <= n-len; i++) {
            sum += (int)(temp[i+len-1] - '0');
            sum -= (int)(temp[i-1] - '0');
            Max = max(sum, Max);
        }
        cout << "Case #" << ll << ": " << Max << endl;
    }

	return 0;
}
