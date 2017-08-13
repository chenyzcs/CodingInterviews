#include "utility\LinkedList.h"

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    LinkedList l;
    l.creatList(v);
    printList(l);
    return 0;
}