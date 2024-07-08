set term pdf
set output "2_3.pdf"

set multiplot layout 2,1

set title 'Velocity vs time for air'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key bottom right

plot "2_3_wd_air.txt" pt 7 lw 2 lc 'red' w l t "With drip", "2_3_wf_air.txt" pt 7 lw 2 lc 'black' w l t "Without drip"

set title 'Velocity vs time for water'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key bottom right

plot "2_3_wd_water.txt" pt 7 lw 2 lc 'red' w l t "With drip", "2_3_wf_water.txt" pt 7 lw 2 lc 'black' w l t "Without drip"