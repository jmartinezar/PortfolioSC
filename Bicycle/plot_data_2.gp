set term pdf
set output "velocity_v2.pdf"
unset key
set title 'Velocity vs time with friction'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'

plot "data_2.txt" w l lw 3 lc 'black'