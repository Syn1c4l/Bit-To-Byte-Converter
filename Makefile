all:
	g++ -Wall BitByte.cpp -o BitByte

run:
	./BitByte

try: all run