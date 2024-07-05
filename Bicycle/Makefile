# Introductory text

################################################

# Variables definition

objects = Bicycle.o include.o

tex_deps = Bicycle.tex velocity_v1.pdf velocity_v2.pdf

files_plot_1 = plot_data_1.gp data_1.txt

files_plot_2 = plot_data_2.gp data_2.txt

files_to_delete = *~ *.pdf *.log *.txt *.aux *.o main 2_2

# Recipes

doc: $(tex_deps)
	pdflatex $<

velocity_v1.pdf: $(files_plot_1)
	gnuplot $<

velocity_v2.pdf: $(files_plot_2)
	gnuplot $<

%.o: %.cpp include.h
	g++ -c -g $<

%.txt: main
	./main

main: $(objects)
	g++ -g $^ -o $@

2_2.pdf:
	cd 2_2;\
	make;\
	cd ..

# Generalities

clean:
	rm $(files_to_delete)
