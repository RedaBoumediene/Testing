for((i = 1; ; i++)); do
	echo $i
	./gen $i > in
	./prog1 < in > out1
	./prog2 < in > out2
	diff -w out1 out2 || break
	# diff -w <(./prog1 < in) <(./prog2 < in) || break
done
