#!/usr/bin/ruby -w

# Ruby Break Statement:

# The Ruby break statement is used to terminate a loop. It is mostly used in 
# while loop where value is printed till the condition is true, then break
# statement termintes the loop.

=begin
	
Syntax: 

```
break 
```
=end

# Example usage of the Break Statement in Loops.
print ("[+] Break Statement in Ruby:-\n")
i = 1

while true
	if i * 5 >= 35
		puts "break"
    break
	end
	puts i * 5
	i += 1
end


# Ruby Next Statement:-

# The Ruby next statement is used to skip loop's next iteration/ Once the next 
# statement is executed, no further iteration will be performed.


# Notice: "The next statement in Ruby is equivalent to continue statement in  other languages."

#```
# next
#```

puts "\n"

# Example usage of next statement;
print ("[+] Next statement in Ruby:-\n")
for i in 20...35 
	if i == 30 then
    puts "Next."
    next
	end
	puts i 
end
