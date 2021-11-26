#include <iostream>
using namespace std;
 
int main(){
    int d, count = 0;
    cin >> d; 
    int arr[n];
    for (int i = 0; i < d; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            count++;
        }
    }
    if(count == 0){
        cout << "NO";
    } else {
        cout << count << endl;
        for (int c = d - 1; c >= 0; c--){
            if (arr[c] < 0){
                cout << arr[c] << " "; 
            }
        }
    }
    return 0;
}