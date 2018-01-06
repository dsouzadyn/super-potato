#include <bits/stdc++.h>

using namespace std;

void print_stack(stack<int> t)
{
    string d = "";
    while(!t.empty()) {
        d = to_string(t.top()) + " " + d;
        t.pop();
    }
    cout << d << endl;
}

int main()
{
    stack<int> s;
    queue<int> q;
    int t;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        s.push(t);
    }
    for(size_t c = s.size(); c > 0; c--) {
        for(int dop = 1; dop < c; dop++) {
            t = s.top();
            s.pop();
            q.push(t);
        }
        for(size_t deq = q.size(); deq > 0; deq--) {
            t = q.front();
            q.pop();
            s.push(t);
        }
    }
    print_stack(s);
}
