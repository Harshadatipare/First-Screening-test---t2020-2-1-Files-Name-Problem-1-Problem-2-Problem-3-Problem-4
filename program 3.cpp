//Problem-3:  With a single integer as the input, generate the following until a = x [series of numbers as shown in the below examples]

//  Output: (examples)
// 1) input a = 1, then output : 1
// 2) input a = 2, then output : 1
// 3) input a = 3, then output : 1, 3, 5
// 4) input a = 4, then output : 1, 3, 5
// 5) input a = 5, then output : 1, 3, 5, 7, 9
// 6) input a = 6, then output : 1, 3, 5, 7, 9
// .
// .
// 7) input a = x, then output : 1, 3, 5, 7, .......


#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n%2==0){
        n=n-1;
    }
    for(int i=0;i<n;i++){
        cout<<sum<<" ";
        sum=sum+2;
    }

    return 0;
}
