#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<time.h>
#include<unistd.h> 
void SetColor(short); 
using namespace std;
void SetColor(short Color){ 

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hCon,Color); 

} 
void intestazione(void){
	srand(time(NULL)); 
	int q,i,l,c,wat;
    q = (rand()%15)+1;
	for (wat=0; wat<=1; wat++){
		cout<<"Loading";
		system("cls");
		cout<<"Loading.";
		system("cls");
		cout<<"Loading..";
		system("cls");
		cout<<"Loading...";
		system("cls");
	} 
    SetColor(q); 
    system("cls"); 
	cout<<"                    #####################################"<<endl;
	cout<<"                    ##                                 ##"<<endl;
	cout<<"                    ##       Automatic Keylogger(s)    ##"<<endl;
	cout<<"                    ##             Creator             ##"<<endl;
	cout<<"                    ##          Codec By Angelo        ##"<<endl;
	cout<<"                    ##                                 ##"<<endl;
	cout<<"                    #####################################"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED|FOREGROUND_BLUE); 
}

