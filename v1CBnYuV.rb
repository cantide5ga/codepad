#Find the sum of the even-valued terms found in a Fibonacci sequence below four million.
#http://codepad.org/v1CBnYuV

n0 = 0
n1 = 1
term = 0
sum = 0

until term >= 4000000
	term = n0 + n1

	sum += term if term % 2 == 0

	n0 = n1
	n1 = term
end

puts sum
