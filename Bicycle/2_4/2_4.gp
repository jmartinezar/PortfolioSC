set term pdf
set output "2_4.pdf"
unset key
set title 'Velocity vs time with slope'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'

plot "2_4.txt" w l lw 3 lc 'black'