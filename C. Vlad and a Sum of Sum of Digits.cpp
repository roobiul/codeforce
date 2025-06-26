//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
 
using namespace std;

#define MXM 200010
int digitSum[MXM];
 
void precalculate() {
    for (int i = 1; i < MXM; ++i) {
        int sum = 0;
        int num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        digitSum[i] = digitSum[i - 1] + sum;
    }
}
 
int main() {
    precalculate();
 
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        printf("%d\n", digitSum[n]);
    }
 
    return 0;
}