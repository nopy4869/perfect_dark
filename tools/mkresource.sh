tee dist/windows/icon.rc <<EOF
100 ICON "./icon.ico"
1 VERSIONINFO
FILEVERSION     1,0,0,0
PRODUCTVERSION  1,0,0,0
BEGIN
  BLOCK "StringFileInfo"
  BEGIN
    BLOCK "040904E4"
    BEGIN
      VALUE "CompanyName", "Perfect Dark decompilation project"
      VALUE "FileDescription", "The unofficial Win32 port of Perfect Dark $2-$1"
      VALUE "FileVersion", "$1"
      VALUE "InternalName", "perfectDark-Win32-$2-$1"
      VALUE "LegalCopyright", "(C) 2022 Ryan Dwyer, (C) 2023 fgsfdsfgs"
      VALUE "OriginalFilename", "pd.exe"
      VALUE "ProductName", "Perfect Dark Win32"
      VALUE "ProductVersion", "$2-$1"
    END
  END

  BLOCK "VarFileInfo"
  BEGIN
    VALUE "Translation", 0x409, 1252
  END
END
EOF