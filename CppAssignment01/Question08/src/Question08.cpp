/*
 Q8. (Challenge) Absolute Value & Clamp — No if-else
Write two C++ functions using only the ternary operator (no if, no else, no standard library):
1. int absolute(int n) — returns the absolute value of n.
2. int clamp(int val, int lo, int hi) — returns:
lo if val < lo
hi if val > hi
val otherwise
Test with the following cases in main() and print results in a table format:
val lo hi absolute(val) clamp(val, lo, hi)
-15 -10 10 ? ?
0 -10 10 ? ?
25 -10 10 ? ?
-3 0 5 ? ?
 */

#include <iostream>
using namespace std;


int absolute(int n) {
    return (n < 0) ? -n : n;
}


int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {


    int vals[] = {-15, 0, 25, -3};
    int los[]  = {-10, -10, -10, 0};
    int his[]  = {10, 10, 10, 5};

    cout << "val\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)\n";
    cout << "-------------------------------------------------------------\n";

    for(int i = 0; i < 4; i++) {
        cout << vals[i] << "\t"
             << los[i] << "\t"
             << his[i] << "\t"
             << absolute(vals[i]) << "\t\t"
             << clamp(vals[i], los[i], his[i]) << endl;
    }

    return 0;
}
