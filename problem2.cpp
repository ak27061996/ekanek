/*
n = size of delhi_to_mumbai list
Time Complexcity: O(max(k, nlogn))
*/

#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
bool comapre(pair<int,int>&a,pair<int,int>&b){
    return (a.first + a.second )<(b.first + b.second);
}
void solution(vector<int> &d_to_m, vector<int> &m_to_d, int k){
    sort(all(d_to_m));
    sort(all(m_to_d));
    int sq = ceil(sqrt(k));
    vector<pair<int, int> > result;
    for(int i=0;i<=sq;i++){
        for(int j=0;j<=sq;j++){
            result.push_back({d_to_m[i], m_to_d[j]});
        }
    }
    sort(all(result), comapre);
    for(int i=0;i<=k;i++){
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }
}


int main(){
    vector<int> d_to_m = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    vector<int> m_to_d = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
    solution(d_to_m, m_to_d, 10);
}