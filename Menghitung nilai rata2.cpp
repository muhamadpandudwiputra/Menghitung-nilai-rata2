#include <iostream>
using namespace std;

void hitungRerata() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int data;
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> data;
        total += data;
    }

    double rerata = (double) total / n;
    cout << "Nilai rata-rata adalah: " << rerata << endl;
}

int main() {
    hitungRerata();
    return 0;
}

