//Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}

          /* 3-times print 'In for loop'
          because x*x->1*1=1<10   true
          x*x->2*2=4 < 10          true
          x*x->3*3=9 < 10           true
          x*x->4*4=16 < 10          but its false
          
          
          */