doc: Bicycle.tex velocity_v1.pdf
	pdflatex $<

velocity_v1.pdf: plot_data_1.gp data_1.txt
	gnuplot $<

%.o: %.cpp
	g++ -c $<

data_1.txt: main
	./main > $@

main: Bicycle.o include.o
	g++ $^ -o $@

clear:
	rm *~ *.pdf *.log *.txt *.aux *.o main
