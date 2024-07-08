################################################
################################################
# Introductory text
################################################
################################################



################################################
# Variables definition
################################################

objects = Bicycle.o include.o

tex_deps = Bicycle.tex velocity_v1.pdf velocity_v2.pdf

files_plot_1 = plot_data_1.gp data_1.txt

files_plot_2 = plot_data_2.gp data_2.txt

files_to_delete = *~ *.pdf *.log *.txt *.aux *.o main 2_2

################################################
# Recipes
################################################

# Latex report #################################

doc: $(tex_deps)
	pdflatex $<

# Plots for figures ############################

velocity_v1.pdf: $(files_plot_1)
	gnuplot $<

velocity_v2.pdf: $(files_plot_2)
	gnuplot $<

# Object files #################################

%.o: %.cpp include.h
	g++ -g -Wall -O3 -c $<

# Data files ###################################

%.txt: main
	./main

# Compilation of main program ##################

main: $(objects)
	g++ -g -Wall -O3 $^ -o $@

################################################
# Exercises
################################################

# Exercise 2_2 #################################

2_1.pdf: 2_1.gp
	gnuplot $<

# Exercise 2_2 #################################

2_2.pdf:
	cd 2_2;\
	make;\
	cd ..

# Exercise 2_2 #################################

2_3.pdf:
	cd 2_3;\
	make;\
	cd ..

################################################
# Generalities
################################################

clean:
	rm $(files_to_delete);\
	make -C 2_2 clean;\
	make -C 2_3 clean
