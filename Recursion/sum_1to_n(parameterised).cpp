    #include<iostream>
    using namespace std;

    void sum_1to_n(int sum,int n){
        if(n==0){
            cout<<sum<<endl;
            return;
        }

        sum_1to_n(sum+n,n-1);
        }

    int main () {
        int n;
        cout<<"enter the n:";
        cin>>n;
        

        sum_1to_n(0,n);
    }