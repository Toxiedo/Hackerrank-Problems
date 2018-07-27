#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector <vector<int>> myvec;
    for(int i=0;i<n;i++)
        {
        int nsize ;
        cin>>nsize;
        
            vector <int> vec;
            for(int j=0;j<nsize;j++)
                {
                int input;
                cin>>input;
                vec.push_back(input);
                }
        myvec.push_back(vec);
        }
    
    for(int i=0;i<q;i++)
        {
        int n1,n2;
        cin>>n1>>n2;
        cout<<myvec[n1][n2]<<endl;
    }
    return 0;
}
