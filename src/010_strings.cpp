#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int a_len = a.size();
    int b_len = b.size();

    printf("%d %d\n", a_len, b_len);
    
    string combined = a + b;
    printf("%s\n", combined.c_str());

    swap(a[0], b[0]);
    printf("%s %s", a.c_str(), b.c_str());

    return 0;
}

