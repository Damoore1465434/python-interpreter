/*
Author(s): Donald Aguinaldo | 1455130
Duncan Moore     | 1465434
Title: My Python Interpreter
This program will simulate a python interpreter
by comprehending the syntax that is created and
displays what should be properly displayed in
the console
*/

#include "pyInter.h"

using namespace std;

int main(int argc, char* argv[]) {
	pyInter obj;
	string line;
	ifstream in_file;
//open file to read lines as instructions
in_file.open("pyCode.txt");
obj.getLine(in_file,line);
system("pause");

//close file once done
in_file.close();

//deallocate and dynamic variables

return 0;
}
