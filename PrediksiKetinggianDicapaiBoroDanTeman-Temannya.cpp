#include <bits/stdc++.h>
using namespace std;
// tinggimax=v^2*sin^2s/20
float hasil[1000];
float SinA[1000];

int main()
{
    float s[1000];
    float v[1000];
    float t[1000];
    float jumlahperulangan;
    int status = 0;
    cout << "Prediksi Ketinggian Dicapai Boro dan Teman-temannya\n";
    cout << "===================================================\n";
    cout << "Masukkan jumlah burung : ";
    cin >> jumlahperulangan;
    cout << endl;
    for (int i = 1; i <= jumlahperulangan; i++)
    {
        cout << "Masukkan sudut penerbangan burung ke-" << i << " : ";
