#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> filterGenap(const vector<int> &nums) {
    vector<int> hasil;
    copy_if(
        nums.begin(), nums.end(),
        back_inserter(hasil),
        [](int x) { return x % 2 == 0; }
    );
    return hasil;
}

vector<int> filterGanjil(const vector<int> &nums) {
    vector<int> hasil;
    copy_if(
        nums.begin(), nums.end(),
        back_inserter(hasil),
        [](int x) { return x % 2 != 0; }
    );
    return hasil;
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah bilangan : ";
    cin >> jumlah;

    vector<int> angka(jumlah);
    cout << "Masukkan " << jumlah << " bilangan (pisahkan dengan spasi/enter) : ";
    for (int i = 0; i < jumlah; ++i) {
        cin >> angka[i];
    }

    auto genap = filterGenap(angka);
    auto ganjil = filterGanjil(angka);

    cout << "\nBilangan Genap: ";
    for (int x : genap) {
        cout << x << " ";
    }

    cout << "\nBilangan Ganjil: ";
    for (int x : ganjil) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
