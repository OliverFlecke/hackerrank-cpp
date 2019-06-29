#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> numbers;
    stringstream ss(str);
    char ch;
    int number;
    
    do 
    {
        ss >> number;
        numbers.push_back(number);
    } while (ss >> ch);

    return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

