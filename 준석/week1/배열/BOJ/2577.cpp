#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, result;
    cin >> a;
    cin >> b;
    cin >> c;
    result = a * b * c;
    string str = to_string(result);
    int arr[10];
    for(int i = 0; i < 10; i++)
        arr[i] = 0;

    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < 10; j++){
            if(str[i] - '0' == j)
                arr[j]++;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}