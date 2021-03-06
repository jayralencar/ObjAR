; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "ObjAR"
#define MyAppVersion "1.0.0"
#define MyAppPublisher "Jayr Alencar Pereira"
#define MyAppURL "http://www.jayralencar.com.br"
#define MyAppExeName "gearAPP.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{E45BE9A7-0A82-40B4-8E26-B5CC370F21F7}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DisableProgramGroupPage=yes
OutputDir=C:\dev\AR\ObjAR\setup\output
OutputBaseFilename=ObjAR_setup_v1.1.0
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\dev\AR\ObjAR\Release\*"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\dev\AR\ObjAR\Release\Data\*"; DestDir: "{app}\Data"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\dev\AR\ObjAR\Release\osgPlugins-3.2.1\*"; DestDir: "{app}\osgPlugins-3.2.1"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Jayr Alencar\Documents\objAR\Data\*"; DestDir: "C:\Users\Public\ObjAR\Data"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Jayr Alencar\Documents\objAR\OSG\*"; DestDir: "C:\Users\Public\ObjAR\OSG"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\OpenSceneGraph-3.0.1\build\bin\*"; DestDir: "{app}\osgbin"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

[Registry]
Root: HKLM; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; \
    ValueType: expandsz; ValueName: "Path"; ValueData: "{olddata};{app}\osgbin"
Root: HKCU; Subkey: "Environment"; \
    ValueType: expandsz; ValueName: "Path"; ValueData: "{olddata};{app}\osgbin"



