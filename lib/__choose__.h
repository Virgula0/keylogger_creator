#include<iostream>
using namespace std;
int choose1(void){
	    int choose1;
        cout<<endl;
        cout<<"Cosa vuoi creare?"<<endl;
        cout<<"1> KeyLogger per solo studio (keystroke method)"<<endl;
        cout<<"2> KeyLogger (avanzato)"<<endl;
        cout<<"3> Keylogger (avanzato) che salva il file in un determinato percorso"<<endl;
        cout<<"4> Keylogger (avanzato) che invia il file di log ad un server"<<endl;
        cout<<"99> Aiuto"<<endl;
        cout<<"00> Esci "<<endl;
		cout<<"Inserisci scelta(1-2-3-4-99-00) ";
        cin>>choose1;
        return choose1;
}
