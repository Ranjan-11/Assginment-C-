//Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}

 /*     Initially, t is 10.
          First iteration: t /= 2 sets t to 10 / 2 = 5.
          Second iteration: t /= 2 sets t to 5 / 2 = 2.
          Third iteration: t /= 2 sets t to 2 / 2 = 1.
          Fourth iteration: t /= 2 sets t to 1 / 2 = 0

output is 3- times print hello
*/