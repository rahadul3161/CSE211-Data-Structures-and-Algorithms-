//Linear Search Algorithm
#include <iostream>
using namespace std;
int main (){
    string str = "not found";
    int n;
    cout<<"how many element want to entry "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int  key;
    cin>>key;
    for (int i=0; i<n; i++ ){
        if (arr[i]==key){
            str = "found";
                break;
        }
    }
    cout <<str<<endl;
 return 0;
}
