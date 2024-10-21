// arr={2,-3,,4,4,-7,-1,4,-2,6}
// negative number of every window of size k , i.e:k=3
// Ana={-3,-3,-7,-7,-1,-2}  size=n-k+1 


#include<iostream>

#include<vector>
using namespace std;

int main () {
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int> ans;
    for(int i=0;i<=n-k;i++){
              for(int j=i;j<k+i;j++){
                if(arr[j]<0){
                    ans.push_back(arr[j]);
                    break;
                }
            }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // time compexity==0(nk);
}