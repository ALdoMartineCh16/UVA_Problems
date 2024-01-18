#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0, j=0;
    vector<long long> next_;
    next_.push_back(1);
    while(next_.back() <= 2147483648){
        long long aux = min(next_[i]*2,next_[j]*3);
        next_.push_back(aux);
        if(next_[i]*2==aux) i++;
        if(next_[j]*3==aux) j++;
    }
    int m;
    while(cin>>m){
        if(m==0){break;}
        cout<<*lower_bound(next_.begin(),next_.end(),m) << endl;
    }
}
