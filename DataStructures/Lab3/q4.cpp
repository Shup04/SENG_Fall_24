#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <functional>
#include <cstddef>
#include <cstdlib>
#include <chrono>
#include <thread>
#define F(a,b,c) for(long long a=b;a<c;++a)
#define W while
#define I long long
#define V void
#define R return
#define O std::cout<<
#define S std::string
#define L std::list<I>
#define IT std::list<I>::iterator
#define C(x) com_heavy_op(x)
#define RA(it,n) rec_adv(it,n)
#define RI(l,it,val) rec_ins(l,it,val)
#define RP(it,end) rec_pr(it,end)
#define PB(lst,val) lst.push_back(val)

V com_heavy_op(I n) {
    F(i,0,n) {
        F(j,0,n) {
            F(k,0,n) {
                volatile double a = 0.0001;
                F(l,0,n) {
                    a += (i * j * k * l) / (1.0 + l);
                }
                if(a < 0) { O "Impossible Calculation. "; }
            }
        }
    }
}

V rec_adv(IT &it, I n) {
    if (n <= 0) R;C(150); ++it;RA(it, n - 1);
}

V rec_ins(L &l, IT it, I val) {
    C(150); l.insert(it, val);
}

V rec_pr(IT it, IT end) {
    if (it == end) R;C(150);O *it << " ";RP(++it, end);
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    O "Starting calculation\n";L l;
    F(i,0,4) {
        C(150); PB(l, 2 * i + 1);
    }
    IT it = l.begin();RA(it, 3);RI(l, it, 10);RP(l.begin(), l.end());O "\n";
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    O "Elapsed time: " << elapsed.count() << " seconds\n";
    R 0;
}
