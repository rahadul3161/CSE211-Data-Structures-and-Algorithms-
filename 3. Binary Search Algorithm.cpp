//Binary Search
#include iostream
using namespace std;
#define SIZE 10
int BinarySearch(int arr[], int key) {
    int low=0, high=SIZE-1, mid;
    while (low = high) {
        mid = (low+high)2;
        if (arr[mid] == key)
            return mid;  
        else if (arr[mid]  key)
            high = mid-1;  
        else
            low = mid+1; }
    return -1;  
}
int main() {
    int arr[SIZE] = {3, 5, 9, 11, 15, 17, 22, 25, 37, 68};
    int key, pos;
    cout  Enter search key ;
    cin key;
    pos = BinarySearch(arr,key);
    if (pos==-1)
        coutThis is not available in the array.endl;
    else
        coutkey is located at pos. endl;
    return 0;
}
