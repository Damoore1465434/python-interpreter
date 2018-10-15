
#ifndef pyInter_H
#define pyInter_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class pyInter {
private:
	//variable containers
	vector<char> char_remove = { '"', '(', ')' };
	vector<char> stack = { '"', '(', ')' };

public:
	void print(string protoLine);
	void getLine(ifstream& in_file, string protoline);
	void tokeneizer(char placeholder);
};

#endif // pyInter_H_
