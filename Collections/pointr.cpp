#include <iostream>
using namespace std;


int main( ) {
    int varN = 9;
    int *ptrN = &varN; // ptrN points to varN address

    cout << "varN value: " << varN << endl;
    cout << "varN location: " << ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;


    return 0;
}
