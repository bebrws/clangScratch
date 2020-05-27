
all: main main.ll

main.ll: main.c
	clang -S -emit-llvm main.c

main.bitcode: main.c
	 clang -flto -c main.c -o main.bitcode

main: main.bitcode
	 clang main.bitcode -o main

clean:
	rm -rf main.ll main main.bitcode