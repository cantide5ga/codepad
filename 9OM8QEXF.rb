#First thirty-four numbers in a Fibonacci sequence
#http://codepad.org/9OM8QEXF

n0 = 0
n1 = 1;
term = 0;

# Seed
puts n0
puts n1

32.times{
	term = n0 + n1

	puts term

	n0 = n1
	n1 = term
}
