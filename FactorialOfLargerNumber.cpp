// /*Find the factorial of a large number.*/
// #include<iostream>
// #include<vector>
// using namespace std;
//     int go(vector<int>& v, int value , int size)
//     int carry = 0;

//     for(int i = 0;i<size;i++){
//         int prod = v[i] * value + carry;

//         v[i] = prod%10;
//         carry = prod/10;
//     }
//     while(carry){
//         v[size] = carry % 10;
//         carry /=10;
//         size++;
//     }
//     return size;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(500 , 0);
//     int size = 1;
//     v[0]=1;
//     for(int i = 2; i<n; i++){
//         size = go(v, i,size);
//     }
//     cout << "Factorial of " << n << " is: ";
//     for (int i = size-1; i >= 0; i--)
//     {
//         cout<<v[i];
//     }
    
// }

#include<iostream>
#include<vector>
using namespace std;

// Function to multiply a number with the vector and update the vector
int go(vector<int>& v, int value, int size) {
    int carry = 0;
    for(int i = 0; i < size; i++) {
        int prod = v[i] * value + carry;
        v[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry) {
        v[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}

int main() {
    int n;
    cout << "Enter the number to find the factorial: ";
    cin >> n;

    vector<int> v(500, 0); // Initialize a large enough vector to hold the result
    int size = 1;
    v[0] = 1;

    for(int i = 2; i <= n; i++) { // Loop should go up to and including n
        size = go(v, i, size);
    }

    cout << "Factorial of " << n << " is: ";
    for(int i = size - 1; i >= 0; i--) {
        cout << v[i];
    }
    cout << endl;

    return 0;
}
