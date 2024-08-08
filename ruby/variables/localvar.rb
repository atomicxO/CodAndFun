#!/usr/bin/ruby -w

# Defining and Using Local Variables;

def example_method
	lv = "Iam the local to this method"
	puts lv
end

example_method()

#puts lv

# In the Code above:

=begin
	
* `local_variable` is defined within the `example_method` method.
* It is accessible only within that method.
* Trying to access `local_variable` outside of the method results in an
  error because it is out of scope. 
	
=end

# Local Variables in Blocks;
# Local variables can also be used within blocks. Here's an example:

def block_example
	local_variable = "I'm a local variable in a method"

	[1, 2, 3].each do [item]
		inner_variable = "I'm a local variable in the block"
		puts "#{local_variable} and #{inner_variable} with item #{item}"
	end
	# puts inner_variable 
	# This will raise an error: `inner_variable` is not defined outside the block
end

# block_example


# Local Variables in Loops:
# You can also define local variables within loops:

def loop_example
counter = 0
while counter < 3
	loop_variable = "Inside the loop, counter is #{counter}"
	puts loop_variable
	counter += 1
	end

# puts loop_variable
# This will raise an error: `loop_variable` is not defined outside the loop
end


loop_example


=begin
[+] Practice Time!

Practice working with variables so you can develop an understanding of how they work.

Note: If you don't use variables you would have to repeat every single 
	calculation every time that you want to refer to it.

    And you wouldn't have a way to name things so you know what they are.

=end

# Creating a variable;
orange = 300
apple  = 120

# assigning the result to some variable.
total = orange * apple

puts "\n[+] The total is: ",total
