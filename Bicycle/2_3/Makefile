# Execise 2_3

# Execute

2_3.pdf: 2_3.gp 2_3.txt
	gnuplot $<

2_3.txt: 2_3
	./$<

2_3: 2_3.o include.o
	g++ -g -Wall -O3 $^ -o $@

%.o: %.cpp include.h
	g++ -g -Wall -O3 -c $< 

# Generalities

clean:
	rm *~ *.pdf 2_3 *.o *.txt
