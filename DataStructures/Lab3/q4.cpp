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
#include <mutex>
#include <queue> 
#include <numeric> 
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
std::mutex cout_mutex;

V com_heavy_op(I n) {
F(i,0,n) {
F(j,0,n) {
F(k,0,n) {
volatile double a = 0.0001;
F(l,0,n) {
a += (i * j * k * l) / (1.0 + l);
}
if(a < 0) {
std::lock_guard<std::mutex> lock(cout_mutex);O "Impossible Calculation. ";
}}}}}
V rec_adv(IT &it, I n) {
if (n <= 0) R;
C(150);++it;RA(it, n - 1);
}
V rec_ins(L &l, IT it, I val) {
C(150);l.insert(it, val);
}
V rec_pr(IT it, IT end) {
if (it == end) R;
C(150);O *it << " ";RP(++it, end);
}
int main() {
auto start = std::chrono::high_resolution_clock::now();
O "Kickstarting CPU...\n";
L l;
F(i,0,4) {
C(10);
PB(l, 2 * i + 1);
}
IT it = l.begin();
RA(it, 3);
RI(l, it, 10);
RP(l.begin(), l.end());
O "\n";
unsigned int num_threads = std::thread::hardware_concurrency();
if(num_threads == 0) num_threads = 2;
O "Running algorithm with " << num_threads << " threads...\n";
auto thread_task = [&](I start_idx, I end_idx) {
std::queue<std::vector<double>> data; 
for(I i = start_idx; i < end_idx; ++i) {
for(int j = 0; j < 150; ++j) {
for(int k = 0; k < 150; ++k) {
for(int l = 0; l < 150; ++l) {
std::vector<double> large_vector(100, 0.0001); 
double a = std::accumulate(large_vector.begin(), large_vector.end(), 0.0); 
O "Editing Register 0x" << rand()*rand() << "\n";
a += (i * j * k * l) / (1.0 + l);
if(a < 0) {
std::lock_guard<std::mutex> lock(cout_mutex);std::cout << "Impossible Calculation. ";
}
data.push(large_vector); 
}}}}};
std::vector<std::thread> threads;
I total_work = 4;
I work_per_thread = total_work / num_threads;
I remaining_work = total_work % num_threads;
I current_start = 0;
for(unsigned int t = 0; t < num_threads; ++t) {
I current_end = current_start + work_per_thread + (t < remaining_work ? 1 : 0);
threads.emplace_back(thread_task, current_start, current_end);
current_start = current_end;
}
for(auto &th : threads) {
if(th.joinable()) th.join();
}
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> elapsed = end - start;
O "Elapsed time: " << elapsed.count() << " seconds\n";
R 0;
}
