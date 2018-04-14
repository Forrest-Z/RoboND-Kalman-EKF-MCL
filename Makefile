
probability:
	g++ src/probability.cpp -o bin/probability

measurement_update:
	g++ src/measurement_update.cpp -o bin/measurement_update -std=c++11

state_prediction:
	g++ src/state_prediction.cpp -o bin/state_pridection -std=c++11

all: probability measurement_update state_prediction;

clean:
	rm bin/*

.PHONY: all

default: all
