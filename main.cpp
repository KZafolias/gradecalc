#include <iostream>

/*run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//vars
	int agreek;
	int maths;
	int greek;
	int bio;
	int phy;
	int geo;
	//main
	cout << "Hello, type your grades here";
	cout << "type ancient greek grade";
	cin >> agreek;
	cout << "type maths grade";
	cin >> maths;
	cout << "type greek grade";
	cin >> greek;
	cout << "type biology grade";
	cin >> bio;
	cout << "type physics grade";
	cin >> phy;
	cout << "type gorgraphy grade";
	cin >> geo
	
	cout << agreek + maths + greek + bio + phy + geo /6 << endl;
	
	return 0;
	
}
