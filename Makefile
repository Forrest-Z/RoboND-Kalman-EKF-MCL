
probability:
	g++ probability.cpp -o probability.bin

measurement_update:
	g++ measurement_update.cpp -o measurement_update.bin -std=c++11

all: probability measurement_update;

clean:
	rm *.bin
