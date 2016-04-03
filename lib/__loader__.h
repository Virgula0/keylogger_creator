#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<time.h>
#include<unistd.h> 
using namespace std;

void SetColor2(short);
void SetColor2(short Color2){ 

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hCon,Color2); 

} 

void waiting(void){
/*grafica di esportazione non ha alcuna funzione reale*/
    srand(time(NULL));
	int x,i,v;
	v = (rand()%15)+1;
	SetColor2(v);
	system("cls");
    for (x=0; x<=100;x+=2){
        cout<<"           Caricamento ed esportazione sorgente virus in corso... "<<endl<<endl;
		cout<<"                           Attendere prego ["<<x<<"%]"<<endl;
        cout<<"            [";
        for (i=1; i<=x; i+=2)
            cout<<"=";
            for(i=1; i<=(100-x); i+=2) 
            cout<<" ";
            cout<<"]";
        if(x!=100)
          system("cls");
    }
    cout<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED|FOREGROUND_BLUE); 
}

