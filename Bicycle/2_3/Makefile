# Execise 2_3

# Variables

data = 2_3_wf_water.txt 2_3_wd_water.txt 2_3_wf_air.txt 2_3_wd_air.txt

# Execute

2_3.pdf: 2_3.gp $(data)
	gnuplot $<

%.txt: 2_3
	./$<

2_3: 2_3.o include.o
	g++ -g -Wall -O3 $^ -o $@

%.o: %.cpp include.h
	g++ -g -Wall -O3 -c $< 

# Generalities

clean:
	rm *~ *.pdf 2_3 *.o *.txt
