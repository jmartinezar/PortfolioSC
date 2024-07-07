2_3.pdf: 2_3.gp 2_3.txt
	gnuplot $<

2_3.txt: 2_3
	./$<

2_3: 2_3.o include.o
	g++ -g -Wall $^ -o $@

%.o: %.cpp include.h
	g++ -g -Wall -c $< 

clean:
	rm *~ *.pdf 2_3 *.o *.txt
