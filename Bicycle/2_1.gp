set term pdf
set output "2_1.pdf"
set title 'Velocity vs time without friction'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'

f(x) = sqrt( 1 + 2*x )

plot "data_1.txt" pt 7 lw 1 lc 'red' t 'Data', f(x) w l lw 2.5 lc 'black' t 'Exact solution'