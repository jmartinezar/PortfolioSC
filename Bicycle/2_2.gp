set term pdf
set output "2_2.pdf"
set title 'Velocity vs time without friction'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key right bottom

plot "data_22_0.txt" w l lw 2 t 'P=1.00', "data_22_1.txt" w l lw 2 t 'P=0.95', "data_22_2.txt" w l lw 2 t 'P=0.90', "data_22_3.txt" w l lw 2 t 'P=0.85', "data_22_4.txt" w l lw 2 t 'P=0.80', "data_22_5.txt" w l lw 2 t 'P=0.75'