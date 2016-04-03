#include<iostream>
#include<string.h>
#define DIM 40
using namespace std;
int choose2(void){
		
		char choose2[DIM];
        cout<<endl;
        do{
           fflush(stdin);
        
		   cout<<"Vuoi creare un altro virus?(si/no): "<<endl;
           cin.getline(choose2,sizeof(choose2));
        
           if ((strcmp(choose2,"si")==0))
           return 1;
           else if(strcmp(choose2,"no")==0)
           return 2;
           else if (((strcmp(choose2,"si")!=0)&&((strcmp(choose2,"no")!=0))))
        cout<<"Comando inserito non valido"<<endl;
        
        }while(((strcmp(choose2,"si")!=0)&&((strcmp(choose2,"no")!=0))));
        
}
