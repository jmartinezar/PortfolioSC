set term pdf
set output "2_3.pdf"
set title 'Velocity vs time with drigging'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
unset key

plot "2_3.txt" pt 7 lw 1 lc 'red' w l