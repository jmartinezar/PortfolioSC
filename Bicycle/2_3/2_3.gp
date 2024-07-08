set term pdf
set output "2_3.pdf"
set title 'Velocity vs time with drigging'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key top left

plot "2_3_wd.txt" pt 7 lw 2 lc 'red' w l t "With drip", "2_3_wf.txt" pt 7 lw 2 lc 'black' w l t "Without drip"