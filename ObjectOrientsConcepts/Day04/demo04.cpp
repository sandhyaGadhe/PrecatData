#include <iostream>
using namespace std;

int main()
{
    // int *ptr = (int *)malloc(sizeof(int) * 1);
    int *ptr = new int; // dynamic memroy allocation in cpp
    *ptr = 20;
    cout << "Address of dma - " << ptr << endl;
    cout << "Address of ptr - " << &ptr << endl;
    cout << "Value inside dma - " << *ptr << endl;

    // free(ptr);
    delete ptr; // deallocate the memory to avoid memory leakage
    ptr = NULL; // to avoid dangling pointer

    // DMA for any array
    int *ptr2 = new int[5];
    delete[] ptr2;
    ptr2 = NULL;

    return 0;
}