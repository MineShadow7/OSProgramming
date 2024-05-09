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
