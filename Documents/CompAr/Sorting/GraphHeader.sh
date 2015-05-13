G_File=/usr/bin/gcc
Fldr=/Users/theo/Documents/CompAr/Sorting/
C_File=$Fldr"FunWithGraphs.c"
X_File=$Fldr"FunWithGraphs.exe"


cd $Fldr

#$G_File $C_file -o $X_File
$G_File $C_File -o $X_File

$X_File
