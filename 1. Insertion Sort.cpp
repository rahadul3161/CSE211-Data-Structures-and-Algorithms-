Insertion Sort
#include iostream
using namespace std;
void insertionSort(int A[], int n) {
    for (int i=1; in; i++) {
        int key = A[i];

        int j=i-1;
        while (j=0 && A[j]key) {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = key;
    }
}
int main() {
    int A[] = {9, 5, 1, 4, 3};
    int n = sizeof(A)sizeof(A[0]);
    insertionSort(A, n);
    coutSorted array ;
    for (int i=0; in; i++)
        coutA[i] ;
    coutendl;
    return 0;
}
