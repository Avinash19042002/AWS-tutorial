
#include <bits/stdc++.h>
using namespace std;

int main(){
int n=100;
vector<int>mark(n+1,1),prime;
mark[0]=0;
mark[1]=0;

for(int i=2;i*i<=n;i++){
if(mark[i]){
//	prime.push_back(i);
for(int j=i*i;j<=n;j+=i)mark[j]=0;
}
}

for(int i=2;i<=n;i++)if(!mark[i])prime.push_back(i);
cout<<"Primes are : ";
for(auto &it:prime)cout<<it<<' ';
return 0;
}
