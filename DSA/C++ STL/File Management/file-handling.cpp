#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Binary {
public:
	int x = 11;
};

void write() {
	ofstream file;

	string x = "Hello World";

	file.open("hello.txt", ios::out);

	if (file.good()) {
		file << x;
	}
	else {
		cout << "Unable to create file...";
	}
	file.close();
}

void findNumberOfWords() {
	ifstream file;
	int count = 0;

	string line;

	file.open("hello.txt", ios::out);

	while (getline(file, line)) {
		stringstream ss(line);
		string word;
		while (ss >> word) {
			count++;
		}
	}
	cout << count;
	file.close();
}

void WriteBinary() {
	ofstream file;

	Binary b;

	b.x = 44;
	
	file.open("hello.bin", ios::out | ios::binary);

	file.write(reinterpret_cast<char*>(&b), sizeof(b));

	file.close();
}

void ReadBinary() {
	ifstream file;

	file.open("hello.bin", ios::in | ios::binary);

	Binary c;

	file.read(reinterpret_cast<char*>(&c), sizeof(c));

	cout << c.x;

	file.close();
}

static void read() {
	ifstream file;

	file.open("hello.txt", ios::in);

	if (file.good()) {
		string temp;
		while (getline(file, temp)) {
			cout << temp;
		}
	}
	file.close();
}


int main() {
	//read();
	//findNumberOfWords();
	WriteBinary();
	ReadBinary();
}