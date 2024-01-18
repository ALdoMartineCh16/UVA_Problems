#include <iostream>
#include <string>
#include <map>
using namespace std;

string arra[1505], arrb[1505];

int main() {
    int t, ca=1;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n, m;
        map<string, int> grupoC;
        cin >> n >> m;
        cin.ignore();

        for (int i = 0; i < n; i++)
            getline(cin, arra[i]);

        for (int i = 0; i < m; i++)
            getline(cin, arrb[i]);

        cout<<"Case "<< ca++<< ": ";

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                grupoC[arra[i] + arrb[j]]++;

        cout << grupoC.size() << endl;
    }

    return 0;
}
