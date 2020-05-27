
all: main mainArm

mainArm: mainArm.s
	clang -arch arm64 -miphoneos-version-min=10.0 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk main.s -o mainArm

mainArm.s: mainArm.ll
	/opt/llvm/bin/llc mainArm.ll --march arm64

mainArm.ll: main.c
	clang -arch arm64 -miphoneos-version-min=10.0 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk -S -emit-llvm  main.c
	mv main.ll mainArm.ll

main.bitcode: main.c
	 clang -flto -c main.c -o main.bitcode

main: main.bitcode
	 clang main.bitcode -o main

clean:
	rm -rf main.ll main main.bitcode mainArm.ll mainArm.s mainArm main.s mainArm.s