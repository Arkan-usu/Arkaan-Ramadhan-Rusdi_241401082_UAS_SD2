#include <iostream>
using namespace std;

main()
{
    int N;
    int n;
    y :
    cout << "Masukkan banyak bilangan "<< endl;
    cin >> n;
    if(n > 100 || n < 1)
    {
        cout << "Batas 1<= t <= 100! Ulangi\n";
        goto y;
    }
    cout << endl;
    cout << "=================";

    int x[n];

    for (int i = 0; i < n ; i++)
    {
        cout << endl;
        cout << "Masukkan bilangan bulat (x) : ";
        cin >> x[i];
        z :
        cout << "Masukkan jumlah N : ";
        cin >> N;
        if(N > 10 || N < 1)
        {
            cout << "Batas N <= 10 ! Ulangi\n";
            goto z;
        }


        if(N % 2 == 0)
        {
            cout << "Hasil : " << x[i] - x[i] << endl; 
        }
        else
        {
            cout << "Hasil : "<< x[i] << endl;
        }
        
    }


}