.PHONY: build clean

ifndef GXX
	GXX = g++
endif

# Compilation flags
COMPILE_FLAGS = -c -fPIC -m32 -O3 -w -Wall -Isrc/sdk/amx/ -DLINUX
LIBRARIES = -lrt

# Output file name
OUTFILE = bin/ctime.so

build:
	mkdir -p bin
	$(GXX) $(COMPILE_FLAGS) src/sdk/*.cpp
	$(GXX) $(COMPILE_FLAGS) src/*.cpp
	$(GXX) -m32 -shared -o $(OUTFILE) *.o $(LIBRARIES) 
	
clean:
	rm -f *.o
