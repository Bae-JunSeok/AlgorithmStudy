#include <bits/stdc++.h>

using namespace std;

void alphabet_number(char arr[]){
    int count_array[26];
    for(int i = 0; i < 26; i++){
        count_array[i] = 0;
    }

    for(int i = 0; i < 101; i++){
        if(arr[i] == 'a')
            count_array[0]++;
        if(arr[i] == 'b')
            count_array[1]++;
        if(arr[i] == 'c')
            count_array[2]++;
        if(arr[i] == 'd')
            count_array[3]++;
        if(arr[i] == 'e')
            count_array[4]++;
        if(arr[i] == 'f')
            count_array[5]++;
        if(arr[i] == 'g')
            count_array[6]++;
        if(arr[i] == 'h')
            count_array[7]++;
        if(arr[i] == 'i') 
            count_array[8]++;
        if(arr[i] == 'j')
            count_array[9]++;
        if(arr[i] == 'k')
            count_array[10]++;
        if(arr[i] == 'l')
            count_array[11]++;
        if(arr[i] == 'm')
            count_array[12]++;
        if(arr[i] == 'n')
            count_array[13]++;
        if(arr[i] == 'o')
            count_array[14]++;
        if(arr[i] == 'p')
            count_array[15]++;
        if(arr[i] == 'q')
            count_array[16]++;
        if(arr[i] == 'r')
            count_array[17]++;
        if(arr[i] == 's')
            count_array[18]++;
        if(arr[i] == 't')
            count_array[19]++;
        if(arr[i] == 'u')
            count_array[20]++;
        if(arr[i] == 'v')
            count_array[21]++;
        if(arr[i] == 'w')
            count_array[22]++;
        if(arr[i] == 'x')
            count_array[23]++;
        if(arr[i] == 'y')
            count_array[24]++;
        if(arr[i] == 'z')
            count_array[25]++;
    }

    for(int i = 0; i < 26; i++){
        cout << count_array[i] << " ";
    }
} 

int main(){
    char arr[1000];
    cin >> arr;
    alphabet_number(arr);
    return 0;
}