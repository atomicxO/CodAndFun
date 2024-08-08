#!/usr/bin/ruby -w

# Ruby Until Loop:

# The ruby until loop runs until the given condition evaluated to true.
# It exits the loop when condition becomes true. 
# It is just opposite of the while loop runs untol the given conditions evaluates to false.

# The until loop allows you to write code which is more readable and logical.


=begin

###  Syntax:

```
until conditional
	# code to execute
end

```

=end


# Example for code usage of until loop;
print ("[+] Example 1:- ")
i = 1

until i == 11
	print i * 10, "\n"
	i += 1
end 


print ("\n[+] Example 2:- \n")

count = 1

until count > 5
	puts "Count is #{count}."
	count += 1
end

print ("\n[+] Example 3:- \n")

count = 10

until count == 0
	puts "Count is: #{count}."
	count -= 1
end

print ("\n[+] Example 4:- \n")
print("\n>> Using `Until` with an Inline Condition...\n")

count = 0

begin
	puts "Count is #{count}."
	count += 1
end until count > 5

puts "\n[+] Example 5:- \n"
print ("Combining `until` with other constructs;")
print ("\n>> You can combine `until` with other constructs like `next` and `break` to 
	    control the flow:\n")

count = 0

until count > 5
	count += 1
	next if count == 3
	puts "Count is #{count}."
end

puts "\n More Examples...\n"

input = ""

until input.downcase == "exit"
	print "Enter something(type 'exit' to quit): "
	input = gets.chomp
	puts "You entered: #{input}" unless input.downcase == "exit"
end

puts "Program Terminated!"