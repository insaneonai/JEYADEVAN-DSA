#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


void BubbleSort(vector<pair<int, char>> v, int n) {

    for (int i = n - 1; n >= 0; i++) {
        for (int j = 0; j < i; j++) {
            if (v[j].first < v[j + 1].first) {
                swap(v[j], v[j+1])
            }
        }
    }
}


string sortByFrequency(string str) {
    map<char, int> frequencyMap; // {'h': 1, 'e': 1, 'l': 2, 'o': 1};   // char arr[] , int arr[]
    for (char c : str)   // hello
        frequencyMap[c]++;
    }

    // {(5, k), (7,1)}

    vector<pair<int, char>> frequencyVector;   /// {(1, h), (1,e), (2,l), (1, o)}
    for (auto& pair : frequencyMap) {  // get all key value pair;
        frequencyVector.emplace_back(pair.second, pair.first);  /// emplace_back similar push_back
    }

    sort(frequencyVector.begin(), frequencyVector.end(), greater<pair<int, char>>());  /// Decrement sort 


    string sortedStr = "";  // llhoe
    for (auto& pair : frequencyVector) {
        sortedStr += string(pair.first, pair.second); 
    }

    return sortedStr;
}

int main() {
    string input = "hello";
    string sortedStr = sortByFrequency(input);
    cout << "Input: " << input << endl;
    cout << "Sorted by frequency: " << sortedStr << endl;
    return 0;
}