#include <bits/stdc++.h>
using namespace std;
  
int same(int arr[], int size, int n){
    for (int i = 0; i < size; i++) {
        arr[arr[i] % size]
            = arr[arr[i] % size] + size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= size * 2) {
            cout << i << " " << endl;
        }
    }
    return 0;

}

int main()
{
    int n;
    cout << "Array Length : ";
    cin>> n;
    int arr[n];
    cout << "Enter The Array Elements : "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    // int arr[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    same(arr, size, n);
    
    // for (int i = 0; i < size; i++) {
    //     arr[arr[i] % size]
    //         = arr[arr[i] % size] + size;
    // }
    // cout << "The repeating elements are : " << endl;
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] >= size * 2) {
    //         cout << i << " " << endl;
    //     }
    // }
    return 0;
}
