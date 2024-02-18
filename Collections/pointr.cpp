#include <iostream>
using namespace std;


int main( ) {
    int varN = 9;

    int *pFirstPointer;
    int *pSecondPointer = NULL;//bef c++ 11
    //int *pSecondPointer = nullptr;bef c++ 11

    int *ptrN = &varN; // ptrN points to varN address

    cout << "varN value: " << varN << endl;
    cout << "varN location: " << ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;

    delete ptrN;
    
    return 0;
}