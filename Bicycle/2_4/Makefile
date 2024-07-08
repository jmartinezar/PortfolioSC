# Exercise 2_4

# Execution

2_4.pdf: 2_4.gp 2_4.txt
	gnuplot $<

%.o: %.cpp include.h
	g++ -g -Wall -O3 -c $<

2_4: 2_4.o include.o
	g++ -g -Wall -O3 $^ -o $@

2_4.txt: 2_4
	./$<

# Generalities

clean:
	rm *~ *.pdf *.log *.txt *.aux *.o main 2_2
