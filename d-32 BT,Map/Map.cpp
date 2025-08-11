#include <bits/stdc++.h>
using namespace std;

// Note - in map key should unique and value can repeat

int main()
{

    map<int, string> m; // creating a map
    m[101] = "rahul";   // insert a map
    m[101] = "rahul";   // overwrites if same key used further

    cout << m[101] << endl; // accessing via key

    cout << m.count(101) << endl; // 1 if key present , 0 if key not present
    cout << m.count(400) << endl;

    // loop on map
    m[100] = "tlj"; // insert a map
    m[500] = "kel"; // insert a map
    m[60] = "vino"; // insert a map

    for (auto it : m)
    {
        cout << "key = " << it.first << "," << " value = " << it.second << endl;
    }

    //     output of loop -(becoz map automatically sort in ascending order as per key )
    //      key = 60, value = vino
    // key = 100, value = tlj
    // key = 101, value = rahul
    // key = 500, value = kel
    return 0;
}