#!/usr/bin/ruby -w

#[1]  Simple Local Variable Usage:

# First we need to define a function and which is block.
def alert(message)
# message is a local variable within the 'alert' method.
	message = "Hello, motherfucking #{message}."
# This will print the message
	puts message
end

# Whatever we put in this it displayed on the place of message.
alert("Programmer")

# Output: 
# ~$ ruby localvariablecode.rb
#-> Hello, motherfucking Programmer.


# [2]Local Variables in Blocks:
puts "Enter your Number here: "
number = gets.chomp.to_i

# `square` is a local variable within this block.
[1,2,3,4].each do [number]
	square = number * number
	puts square
end


# [3] Local Variables and Scope:

=begin
def example_method
	x = 10 # `x` is a local variable within `example_method`
	puts x # Output: 10
end

example_method
puts x 		# Error: undefined local variable or method 'x'

# In this example `x` in only accessible within `example_method` and is not avilable outside it.

=end

# [4] Local Variables in Conditionals:
puts
def check_value(value)
	if value > 0
		result = "Positive"
	else
		result = "Non-Positive"
	end
puts result
end

check_value(5)
check_value(-4)


# Here 'result' is a local variable defined within the conditional blocks and is used after the conditional.


# [5] Local Variables with Blocks and Methods;

def process_numbers
	factor = 2

	[1,2,3]. do [num]
		result = num * factor
		result
	end
end

processed = process_numbers
puts processed.inspect