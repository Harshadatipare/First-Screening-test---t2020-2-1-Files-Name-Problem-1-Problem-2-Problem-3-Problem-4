//Problem-4:  Get the total count of number list in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
//(examples)
//  input: [1,2,8,9,12,46,76,82,15,20,30]
//  Output:      {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}



#include <iostream>

using namespace std;

int main()
{
    int n,count=0,arr2[9]={1,2,3,4,5,6,7,8,9};
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]%arr2[i]==0){
                count++;
            }
        }
        cout<<i+1<<" : "<<count<<endl;
    }

    return 0;
}
