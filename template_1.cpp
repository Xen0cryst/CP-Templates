#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// File I/O
void setIO(const string &inFile, const string &outFile) {
    freopen(inFile.c_str(), "r", stdin);
    freopen(outFile.c_str(), "w", stdout);
    freopen("error.txt", "w", stderr);
}

// Timer for measuring execution time
class Timer {
public:
    Timer() : start(chrono::high_resolution_clock::now()) {
    }

    ~Timer() {
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
        cerr << "Execution Time: " << duration << " ms\n";
    }

private:
    chrono::high_resolution_clock::time_point start;
};

// Utility Functions
template<typename T>
void print(const vector<T> &vec, const string &separator = " ") {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) cout << separator;
        cout << vec[i];
    }
    cout << '\n';
}

template<typename T>
void print(const set<T> &s, const string &separator = " ") {
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (it != s.begin()) cout << separator;
        cout << *it;
    }
    cout << '\n';
}

// Math Operations
template<typename T>
T gcd(T a, T b) {
    while (b) {
        swap(a, b);
        b %= a;
    }
    return a;
}

template<typename T>
T lcm(T a, T b) {
    return a / gcd(a, b) * b;
}


int modpow(int base, int exp, int mod) {
    int result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = static_cast<int>((static_cast<long long>(result) * base) % mod);
        base = static_cast<int>((static_cast<long long>(base) * base) % mod);
        exp >>= 1;
    }
    return result;
}

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}

// Main Solution
void solve() {

    // Code Here
}

int main() {
    fast_io;
    setIO("input.txt", "output.txt");

    Timer timer;

    solve();

    return 0;
}

// Participants Name: Zaki Al Marzan
// Username: Xenocryst_ / RUXE_
