doc: Bicycle.tex velocity_v1.pdf velocity_v2.pdf
	pdflatex $<

velocity_v1.pdf: plot_data_1.gp data_1.txt
	gnuplot $<

velocity_v2.pdf: plot_data_2.gp data_2.txt
	gnuplot $<

%.o: %.cpp
	g++ -c -g $<

data_1.txt: main
	./main

data_2.txt: main
	./main

main: Bicycle.o include.o
	g++ -g $^ -o $@

2_2: 2_2.o include_22.o
	g++ $^ -o $@

data_22_%.txt: 2_2 2_2.sh
	bash 2_2.sh

2_2.pdf: 2_2.gp data_22_0.txt data_22_1.txt data_22_2.txt data_22_3.txt data_22_4.txt data_22_5.txt
	gnuplot $<

clear:
	rm *~ *.pdf *.log *.txt *.aux *.o main 2_2
