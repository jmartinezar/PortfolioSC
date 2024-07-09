declare -a powers
N=6

for((ii = 0; ii<N; ++ii));
do
    p=$(./2_2 $ii)
    powers+=("$p")
done

if [ -f "2_2.gp" ]; then
    rm 2_2.gp
fi

cat <<EOF > 2_2.gp
set term pdf
set output "2_2.pdf"
set title 'Velocity vs time with different P values'
set xlabel 'Time[s]'
set ylabel 'Velocity[m/s]'
set key right bottom

plot "data_22_0.txt" w l lw 2 t "P=${powers[0]}", "data_22_1.txt" w l lw 2 t "P=${powers[1]}", "data_22_2.txt" w l lw 2 t "P=${powers[2]}", "data_22_3.txt" w l lw 2 t "P=${powers[3]}", "data_22_4.txt" w l lw 2 t "P=${powers[4]}", "data_22_5.txt" w l lw 2 t "P=${powers[5]}"
EOF
