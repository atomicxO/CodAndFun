#!/usr/bin/ruby -w

# Bitwise Operators work on bits operands.


=begin

/--------------------------------\
 Operator		Description
\--------------------------------/

	&	-> 			AND operator
	|	-> 			OR operator
	<<	-> 			Left shift operator
	>>	-> 			Right shift operator
	^	-> 			XOR operator
	~	-> 			Complement operator

=end

puts("Bitwise AND(`&`):-\n")
a = 5	# binary: 0101
b = 3	# binary: 0011 

result = a & b
puts result		# Output: 1 (binary: 0001)


puts("Bitwise OR(`|`):-\n")
a = 5 		# binary: 0101
b = 3		# binary: 0011

result = a | b
puts result		# Output: 7 (binary: 0111)

puts("Bitwise XOR(`^`):-")
a = 5 		# binary: 0101
b = 3		# binary: 0011

result = a ^ b
puts result		# Output: 6 (binary: 0110)

puts("Bitwise NOT (`~`):-")
a = 5		# binary: 0101
b = 3		# binary: 0011

result1 = ~a 	# Output: -6 (binary: 0110)
result2 = ~b    # Output: -4 (binary: 0100)

puts(result1,result2)

puts("Left Shift (`<<`):-")
a = 5			# Output: 5 (binary:) 0101
b = 3			# Output: 3 (binary:) 0011

result = a << 2  # Output: 20 (binary: 10100)
puts result


puts("Right Shift (`>>`):-")
a = 5			# Output: 5 (binary:) 0101
b = 3			# Output: 3 (binary:) 0011

result = a >> 2  # Output: 1 (binary: 0001)
puts result

