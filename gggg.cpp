#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    
    vector<vector<long long int>> v;
    for(int i=1;i<=n;i++){
        vector<long long int> v1(i);
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1){
                v1[j]=1;
            }
            else{
                v1[j]=v[i-1][j]+v[i-1][j-1];
            }
        }
         for(int k=0;k<v1.size();k++){
             cout<<v1[k];
         }
         v.push_back(v1);
    }
    return v;
}
