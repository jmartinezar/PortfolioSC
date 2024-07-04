# Introductory text

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

# Generalities

clean:
	rm *~ *.pdf *.log *.txt *.aux *.o main 2_2
