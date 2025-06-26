//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define ctt cout<<
 

using namespace std;
int countZerosBetweenOnes(const vector<int>& arr) {
    int count = 0;
    int lastOneIndex = -1;
 
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 1) {
            if (lastOneIndex != -1) {
                for (int j = lastOneIndex + 1; j < i; ++j) {
                    if (arr[j] == 0) {
                        count++;
                    }
                }
            }
            lastOneIndex = i;
        }
    }
 
    return count;
}
int main ()
{
  
  Robiul;
  int testcase;
  cin>>testcase;
  while(testcase--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
 
        int zerosCount = countZerosBetweenOnes(arr);
        cout << zerosCount << endl;
  }

    return 0;
}
