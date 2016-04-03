#include<iostream>
#include<cstdlib>
#include<string.h>
#define DEM 100
using namespace std;
int dir_choose(void){
		
		char dir_choose[DEM];
		
        cout<<endl;
        do{
           fflush(stdin);
           cout<<"Inserisci il nome della cartella dove il file log del virus verra\' salvato."<<endl;
		   cout<<"Le cartelle disponibili sono: "<<endl<<endl;
		   cout<<" ----------------- "<<endl;
		   cout<<"|  Programmi      |"<<endl;
		   cout<<"|  Programmi(x86) | "<<endl;
		   cout<<"|  Windows        |"<<endl;
		   cout<<"|  Collegamenti   |"<<endl;
		   cout<<"|  Contatti       |"<<endl;
		   cout<<"|  Desktop        |"<<endl;
		   cout<<"|  Documenti      |"<<endl;
		   cout<<"|  Download       |"<<endl;
		   cout<<"|  Immagini       |"<<endl;
		   cout<<"|  Musica         |"<<endl;
		   cout<<"|  Partite salvate|"<<endl;
		   cout<<"|  Preferiti      |"<<endl;
		   cout<<"|  Ricerche       |"<<endl;
		   cout<<"|  Roaming        |"<<endl;
		   cout<<"|  Video          |"<<endl;
		   cout<<"|  Pubblica       |"<<endl;
		   cout<<" -----------------"<<endl;
		   cout<<"  Help-->Documentazione"<<endl;
		   cout<<endl<<endl;
		   
		   cout<<"Inserisci nome della cartella: ";
           cin.getline(dir_choose,sizeof(dir_choose));
           
        if (((strcmp(dir_choose,"help")==0)) || ((strcmp(dir_choose,"Help")==0)))
        return 1000;
        else if ((strcmp(dir_choose,"Programmi")==0) || (strcmp(dir_choose,"programmi")==0))
        return 2000;
        else if ((strcmp(dir_choose,"Programmi(x86)")==0) || (strcmp(dir_choose,"programmi(x86)")==0))
        return 3000;
        else if ((strcmp(dir_choose,"Windows")==0) || (strcmp(dir_choose,"windows")==0))
        return 4000;
        else if ((strcmp(dir_choose,"Collegamenti")==0) || (strcmp(dir_choose,"collegamenti")==0))
        return 5000;
        else if ((strcmp(dir_choose,"Contatti")==0) || (strcmp(dir_choose,"contatti")==0))
        return 6000;
        else if ((strcmp(dir_choose,"Desktop")==0) || (strcmp(dir_choose,"desktop")==0))
        return 7000;
        else if ((strcmp(dir_choose,"Documenti")==0) || (strcmp(dir_choose,"documenti")==0))
        return 8000;
        else if ((strcmp(dir_choose,"Download")==0) || (strcmp(dir_choose,"download")==0))
        return 9000;
        else if ((strcmp(dir_choose,"Immagini")==0) || (strcmp(dir_choose,"immagini")==0))
        return 10000;
        else if ((strcmp(dir_choose,"Musica")==0) || (strcmp(dir_choose,"musica")==0))
        return 11000;
        else if ((strcmp(dir_choose,"Partite salvate")==0) || (strcmp(dir_choose,"partite salvate")==0))
        return 12000;
        else if ((strcmp(dir_choose,"Preferiti")==0) || (strcmp(dir_choose,"preferiti")==0))
        return 13000;
        else if ((strcmp(dir_choose,"Ricerche")==0) || (strcmp(dir_choose,"ricerche")==0))
        return 14000;
        else if ((strcmp(dir_choose,"Roaming")==0) || (strcmp(dir_choose,"roaming")==0))
        return 15000;
        else if ((strcmp(dir_choose,"Video")==0) || (strcmp(dir_choose,"video")==0))
        return 16000;
        else if ((strcmp(dir_choose,"Pubblica")==0) || (strcmp(dir_choose,"pubblica")==0))
        return 17000;
        else if (((strcmp(dir_choose,"Programmi")!=0) && (strcmp(dir_choose,"programmi")!=0)) && ((strcmp(dir_choose,"help")!=0)) && ((strcmp(dir_choose,"Help")!=0)) && ((strcmp(dir_choose,"Programmi(x86)")!=0) && (strcmp(dir_choose,"programmi(x86)")!=0)) && ((strcmp(dir_choose,"Windows")!=0) && (strcmp(dir_choose,"windows")!=0)) && ((strcmp(dir_choose,"Collegamenti")!=0) && (strcmp(dir_choose,"collegamenti")!=0)) && ((strcmp(dir_choose,"Contatti")!=0) && (strcmp(dir_choose,"contatti")!=0)) && ((strcmp(dir_choose,"Desktop")!=0) && (strcmp(dir_choose,"desktop")!=0)) && ((strcmp(dir_choose,"Documenti")!=0) && (strcmp(dir_choose,"documenti")!=0)) && ((strcmp(dir_choose,"Download")!=0) && (strcmp(dir_choose,"download")!=0)) && ((strcmp(dir_choose,"Immagini")!=0) && (strcmp(dir_choose,"immagini")!=0)) && ((strcmp(dir_choose,"Musica")!=0) && (strcmp(dir_choose,"musica")!=0)) && ((strcmp(dir_choose,"Partite salvate")!=0) && (strcmp(dir_choose,"partite salvate")!=0)) && ((strcmp(dir_choose,"Preferiti")!=0) && (strcmp(dir_choose,"preferiti")!=0)) && ((strcmp(dir_choose,"Ricerche")!=0) && (strcmp(dir_choose,"ricerche")!=0)) && ((strcmp(dir_choose,"Roaming")!=0) && (strcmp(dir_choose,"roaming")!=0)) && ((strcmp(dir_choose,"Video")!=0) && (strcmp(dir_choose,"video")!=0)) && ((strcmp(dir_choose,"Pubblica")==0) && (strcmp(dir_choose,"pubblica")==0)))    
        cout<<"Comando inserito non valido"<<endl<<endl;
        
        }while(((strcmp(dir_choose,"Programmi")!=0) && (strcmp(dir_choose,"programmi")!=0)) && ((strcmp(dir_choose,"help")!=0)) && ((strcmp(dir_choose,"Help")!=0)) && ((strcmp(dir_choose,"Programmi(x86)")!=0) && (strcmp(dir_choose,"programmi(x86)")!=0)) && ((strcmp(dir_choose,"Windows")!=0) && (strcmp(dir_choose,"windows")!=0)) && ((strcmp(dir_choose,"Collegamenti")!=0) && (strcmp(dir_choose,"collegamenti")!=0)) && ((strcmp(dir_choose,"Contatti")!=0) && (strcmp(dir_choose,"contatti")!=0)) && ((strcmp(dir_choose,"Desktop")!=0) && (strcmp(dir_choose,"desktop")!=0)) && ((strcmp(dir_choose,"Documenti")!=0) && (strcmp(dir_choose,"documenti")!=0)) && ((strcmp(dir_choose,"Download")!=0) && (strcmp(dir_choose,"download")!=0)) && ((strcmp(dir_choose,"Immagini")!=0) && (strcmp(dir_choose,"immagini")!=0)) && ((strcmp(dir_choose,"Musica")!=0) && (strcmp(dir_choose,"musica")!=0)) && ((strcmp(dir_choose,"Partite salvate")!=0) && (strcmp(dir_choose,"partite salvate")!=0)) && ((strcmp(dir_choose,"Preferiti")!=0) && (strcmp(dir_choose,"preferiti")!=0)) && ((strcmp(dir_choose,"Ricerche")!=0) && (strcmp(dir_choose,"ricerche")!=0)) && ((strcmp(dir_choose,"Roaming")!=0) && (strcmp(dir_choose,"roaming")!=0)) && ((strcmp(dir_choose,"Video")!=0) && (strcmp(dir_choose,"video")!=0)) && ((strcmp(dir_choose,"Pubblica")==0) && (strcmp(dir_choose,"pubblica")==0)));
        
}
