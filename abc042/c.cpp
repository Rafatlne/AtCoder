#include <bits/stdc++.h>
using namespace std;
int newArr[11];

bool compare(int ans){
    while (ans > 0)
    {
        if(newArr[ans % 10] == 1)
            return false;
        
        ans /= 10;
    }

    return true;
    
}

int main(){
    int N,K,value;
    cin >> N >> K ;
    
    for(int i = 0; i < K; i++){
        cin >> value;
        newArr[value] = 1;
    }


    for(int i = N; i < 100000; i++){
        
        if(compare(i)){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}