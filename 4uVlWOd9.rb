#Add all the natural numbers below one thousand that are multiples of 3 or 5.
#http://codepad.org/4uVlWOd9

sum = 0
(1..999).each do |i|
	sum += i if i % 3 == 0 || i % 5 == 0
end

puts sum
