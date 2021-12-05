/*
A third year students wants to make a cpp program with the following output
1
12
123
1234
12345

12345......n

*/

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of pyramind turns you want : ";
    cin>>n;

    // using for loop for this task
    for(int i {1}; i<=n; i++ ){
        for(int j {1}; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}