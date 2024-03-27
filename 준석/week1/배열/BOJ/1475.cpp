#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    string str = to_string(a);
    int arr[9] = {0};

    for(int i = 0; i < str.length(); i++){
            if(str[i] - '0' == 6 || str[i] - '0' == 9)
                arr[6]++;
            else    
                arr[str[i] - '0']++;
    }

    int MAX = 0;
    arr[6] = (arr[6] + 1) / 2;
    for(int i = 0; i < 9; i++){
        if(arr[i] > MAX)
            MAX = arr[i];
    }
    cout << MAX;
    return 0;
}