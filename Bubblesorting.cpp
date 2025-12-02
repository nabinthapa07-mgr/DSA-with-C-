#include<iostream>
using namespace std;

int main() {
    int a[]={2,9,7,11,4,17};
    int size = sizeof(a)/sizeof(a[0]);

    for (int i=0;i<size-1;i++) {
        for (int j=1;j<size-1;j++) {
            if (a[j]<a[j-1]) {
                int temp =a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }

        }

    }
    cout<<"Sorted Array:"<<endl;
    for (int i=0;i < size;i++) {
        cout<<a[i]<<""<<endl;
    }

    return 0;
}