# Exercise 2_2

# Variables

data = data_22_0.txt \
       data_22_1.txt \
       data_22_2.txt \
       data_22_3.txt \
       data_22_4.txt \
       data_22_5.txt

comp_flags = -g -Wall -O3 -fsanitize=address,undefined,leak 

# Execution

2_2.pdf: $(data) 2_2.gp
	gnuplot 2_2.gp

%.o: %.cpp include.h
	g++ $(comp_flags) -c $<

2_2: 2_2.o include.o
	g++ $(comp_flags) $^ -o $@

data_22_%.txt: 2_2 2_2.sh
	bash 2_2.sh

2_2.gp: 2_2.sh
	bash 2_2.sh

# Generalities

clean:
	rm *~ *.pdf *.log *.txt *.aux *.o main 2_2 2_2.gp
