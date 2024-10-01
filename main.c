#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    system("reg add \"HKLM\\Software\\Policies\\Google\\Chrome\" /v ExtensionManifestV2Availability /t REG_DWORD /d 2 /f");
    ShellExecute(0, "open", "https://github.com/ovftank", 0, 0, SW_SHOWNORMAL);
    return 0;
}
