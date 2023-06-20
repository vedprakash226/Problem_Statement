#include "testlib.h"
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int test_count = rnd.next(1,10);
    
    println(test_count);
    for (int test_case = 0; test_case < test_count; ++test_case) {
        int n=rnd.next(1,30);
        int x=rnd.next(1,1000);
    println(n,x);
    }
}
