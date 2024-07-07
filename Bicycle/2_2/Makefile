# Exercise 2_2

# Variables

data = data_22_0.txt data_22_1.txt data_22_2.txt data_22_3.txt data_22_4.txt data_22_5.txt

# Execution

2_2.pdf: 2_2.gp $(data)
	gnuplot $<

%.o: %.cpp
	g++ -g -Wall -O3 -c $<

2_2: 2_2.o include_22.o
	g++ -g -Wall -O3 $^ -o $@

data_22_%.txt: 2_2 2_2.sh
	bash 2_2.sh

# Generalities

clean:
	rm *~ *.pdf *.log *.txt *.aux *.o main 2_2
