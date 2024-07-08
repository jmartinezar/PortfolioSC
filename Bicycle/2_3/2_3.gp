set term pdf size 10cm,11cm
set output "2_3.pdf"

set multiplot layout 2,1

set lmargin 0
set rmargin 0
set size ratio 0.75
set title 'Velocity vs time for air'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key bottom right
set grid
set xtics 20

plot "2_3_wd_air.txt" pt 7 lw 2 lc 'red' w l t "With drip", "2_3_wf_air.txt" pt 7 lw 2 lc 'black' w l t "Without drip"

set lmargin 0
set rmargin 0
set size ratio 0.75
set title 'Velocity vs time for water'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key top right
set logscale x
set xtics autofreq

plot "2_3_wd_water.txt" pt 7 lw 2 lc 'red' w l t "With drip", "2_3_wf_water.txt" pt 7 lw 2 lc 'black' w l t "Without drip"