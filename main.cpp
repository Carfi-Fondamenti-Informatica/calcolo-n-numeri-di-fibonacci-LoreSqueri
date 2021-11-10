#include <iostream>
using namespace std;
int main() {
    int i=0, n=0, p=i, s=1, f=0;
    cin >>n;
    if (n>=2) {
        cout << "1" << endl;
        for (int i=2; i<=n; i++) {
            f = p + s;
            p = s;
            s = f;
            cout << f << endl;
        }
    }else{
        cout << "errore";
    }
    return 0;
}
