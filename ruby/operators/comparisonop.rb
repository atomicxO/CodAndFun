#!/usr/bin/ruby -w 

# Comparison Operator

=begin

In Ruby, comparison operators are used to compare two values and return 
a Boolean (`true` or `false`) result on the comparison.
Here are the comparison operators in Ruby along with examples for each:

=end

# [1] Equal (`==`)

puts "\n[+] Checks if two values are equal."

a = 5
b = 5
puts a == b  # outputs: true

# [2] Not Equal (`!=`)

puts "\n[+] Checks if two values are equal or not?"
a = 5
b = 10
puts a != b  		# output: True

# [3] Greater than(`>`)

puts "\n[+] Checks if the left operand is greater than the right operand."
a = 10
b = 20
puts b > a		# output: True

# [4] Greater than or Equal To(`>=`)
puts "\n[+] Checks if the left operand is greater than or equal to the right operand."
a = 10
b = 10
puts a >= b 	# output: True

# [5] Less than(`<`)
puts "\n[+] Checks if the left operand is less than the right operand."
a = 5 
b = 10
puts a < b 		# Output: True

# [6] Less Than or Equal to(`<=`)
puts "\n[+] Checks if the left operand is less than or equal to the right operand."
a = 5
b = 5
puts a <= b 	# Output: True


=begin

[+] Notes:

> Comparison operators in Ruby return `true` or `false` based on the
  comparison result.

> These operators are often used in conditional statements 
  (`if`, `unless`, `while`, etc.) to control the flow of 
  execution based on conditions.

> In Ruby, comparison operators can be used with different types of 
  values, including numbers, strings, and objects, depending on the
  context and the type's implementation of comparison methods 
  (<=> for sorting and == for equality).

=end

