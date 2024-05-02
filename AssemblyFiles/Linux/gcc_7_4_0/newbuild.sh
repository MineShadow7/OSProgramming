cd /home/mineshadow/Documents/OSProgramming/Eco.Lab1/AssemblyFiles/Linux/gcc_7_4_0
export ECO_FRAMEWORK=/home/mineshadow/Documents/OSProgramming/Eco.Framework
echo DONEECHO
echo $DIR
export TARGET=0
export DEBUG=0
 make -f Makefile
export TARGET=0
export DEBUG=1
 make -f Makefile
export TARGET=1
export DEBUG=0
 make -f Makefile
export TARGET=1
export DEBUG=1
 make -f Makefile
 make -f MakefileExe
