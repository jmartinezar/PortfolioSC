set term pdf
set output "velocity_v1.pdf"
unset key
set title 'Velocity vs time'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'

plot "data_1.txt" w l lw 3 lc 'black'