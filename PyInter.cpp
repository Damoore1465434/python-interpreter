#include "pyInter.h"

void pyInter::print(string protoLine) {
	if (protoLine.find("print") != string::npos) {
		//iterate through container for characters to remove for print function
		for (int i = 0; i != char_remove.size(); i++)
			protoLine.erase(remove(protoLine.begin(), protoLine.end(), char_remove[i]), protoLine.end());
			protoLine.erase(protoLine.begin(), protoLine.begin() + 5);
			cout << protoLine << endl;
	}
}
void pyInter::tokeneizer(char placeholder) {

}
void pyInter::getLine(ifstream& file, string protoline) {
	while (getline(file, protoline)) {
		//catches comments and skips line
		if (protoline.find("#") != string::npos) {
			continue;
		}
		else if (protoline.find(':')){ // to incorporate the colon operator
			//if its a def use a function to read the function

			//if its a variable then store in variable container

			//if its an operator then store in operator container

			if (protoline.find("return")) {
				//t = x + y;
			}
			print(protoline);
		}
	}
}
