# Execise 2_3

# Variables

data = 2_3_wf_water.txt 2_3_wd_water.txt 2_3_wf_air.txt 2_3_wd_air.txt

obj_file = 2_3.o include.o

# Execute

2_3.pdf: 2_3.gp $(data)
	gnuplot $<

%.txt: 2_3
	./$<

2_3: $(obj_file) input_air.dat input_water.dat
	g++ -g -Wall -O3 $(obj_file) -o $@

%.o: %.cpp include.h
	g++ -g -Wall -O3 -c $< 

# Generalities

clean:
	rm *~ *.pdf 2_3 *.o *.txt test

# test function to read variables

test: test.o
	g++ $< -o $@

test.o: test.cpp
	g++ -g -Wall -c test.cpp
