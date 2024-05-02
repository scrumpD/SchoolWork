all: a.out a.out2 a.out3

a.out: main.cc
	g++ -g -std=c++98 main.cc

a.out2: main2.cc
	g++ -oa.out2 -g -std=c++2a main2.cc

a.out3: main3.cc
	g++ -oa.out3 -g -std=c++2a main3.cc

clean:
	rm -f a.out a.out2 a.out3 *.o core
