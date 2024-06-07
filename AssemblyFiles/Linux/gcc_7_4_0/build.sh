export ECO_FRAMEWORK=../../../Eco.Framework
DIR=$(cd "$(dirname "$0")"; pwd)
echo $DIR

export TARGET=1
export DEBUG=0
make -f Makefile
make -f MakefileExe


