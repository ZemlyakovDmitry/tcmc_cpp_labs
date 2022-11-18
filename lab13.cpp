/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Zemlyakov" << endl;
    int arr[10], k;
    int summ = 0;
    cout << "Vvedite 10 elementov massiva (natural'nyye chisla):" << endl;
    for(int i = 0; i < 10; i++){
        cout << "a[" << i << "]=";
        cin >> arr[i];
    }
    cout << "Vvedite K: ";
    cin >> k;
    cout << "Elementy massiva, kratnyye zadannomu K:" << endl;
    for(int i = 0; i < 10; i++){
        if(arr[i] % k == 0){
            summ += arr[i];
            cout << "a[" << i << "]=" << arr[i] << endl;
        }
    }
    cout << "Summa elementov massiva, kratnykh zadannomu K = " << summ << endl << endl;

    int counter = 0;
    for(int i = 1; i < 10; i++){
        if(arr[i-1] < arr[i])
            cout << "arr[" << i-1 << "] < arr[" << i <<"]" << endl;
        else if(arr[i-1] > arr[i]){
            cout << "arr[" << i-1 << "] > arr[" << i <<"]" << endl;
            counter = 1;
        }
        else {
            cout << "arr[" << i-1 << "] = arr[" << i <<"]" << endl;
            counter = 1;
        }
    }
    if(counter != 0)
        cout << "Posledovatel'nost' chisel NE yavlyayetsya vozrastayushchey";
    
    return 0;
}
