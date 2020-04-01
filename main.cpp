#include<iostream>
#include<math.h>
#include<string>
#include<vector>

using namespace std;

int main() {
    vector<int> numbers;
    string line;

    while(getline(cin, line, '\n') && !line.empty()){
        numbers.push_back(stoll(line)); 
    }

    for(int i = 0; i < numbers.size(); i+=2) {
        cout << pow(numbers[i+1], (double)1/numbers[i]) << endl;   
    }
    
    return 0;
}
