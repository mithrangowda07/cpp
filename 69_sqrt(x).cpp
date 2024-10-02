#include<iostream>
using namespace std;

long long int binary_search(int n){
        int s = 0;
        int e = n;
        long long int mid = s +(e-s)/2;
        long long int ans = -1;
        while(s<=e){
            long long int sqre = mid*mid;
            if(sqre==n){
                return mid;
            }
            if (sqre<n){
                ans = mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    }

    double morePrecision(int n,int precision,int temSoln){
        double ans = temSoln;
        double factor = 1;
        for(int i =0;i<precision;i++){
            factor=factor/10;
            for(double j=ans;j*j<n;j=j+factor){
                ans=j;
            }
        }
        return ans;
    }

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int temSoln = binary_search(n);
    double ans = morePrecision(n,3,temSoln);
    cout<<"Ans:"<<ans<<endl;
    return 0;
}
