#!/usr/bin/ruby -w

# Simulating `do-while` with `begin...end while`

=begin
	
A `begin...end while` loop executes the code block at least once before checking
the condition at the end of the loop.


### Syntax: 

```
begin 
	# code to execute
	end while condition
```	
=end

# Usage Examples:

count = 0
print ("\n[+] Usage Example of begin end loop.\n")

begin
puts "Count is #{count}."
count += 1
end until count >= 5

puts "Finished"


#Another Example:

count = 1
print ("\n[+] Usage Example of begin end loop.\n")

begin
	puts "[+] Count is #{count}."
	count += 1
end while count < 5

puts "Finished"



=begin 

# Using `Loop` with `Break`:

# The 'Loop' method creates an infinite loop, which can be exited using the 
# `break` keyword when a condition is met.


### Syntax:

```
loop do
	# code to execute
	break if condtion
end

```
=end


# Some Usage Examples:

count = 0

print ("\n[+] Usage Example of loop do.\n")
loop do
	puts "Count is #{count}."
	count += 1
	break if count >= 5
end

puts "Finished!"



=begin

#### Summary

Ruby doesn't have a direct `do-while` loop syntax, but you can use the following
construncts to achieve behaviour.


* `begin...end while`: Executes the code block at least once before checking 
					   the condition at the end.
* `begin...end until`: Continues execution until the condition becomes true.

* `loop with break`: Creates an infinite loop and uses break to exit when a 
 					 condition is met.

=end


