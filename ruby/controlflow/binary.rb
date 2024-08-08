#!/usr/bin/ruby -w


=begin

# Basic `do...end` Loop:

[1,2,3,4,5].each do |number|
	puts number
end

# 'each' is an iterator method that goes through element of the array.
# 'do |number| ... end' is the block where 'number' represents each element in 
# the array during each iterations.

# Using `times`
print "\n"

5.times do |i|
	puts "Iteration: #{i}."
end

=end

# Nested Loops in while

i = 0 

while i < 2
  j = 0
  while j < 2
    k = 0
    while k < 2
      l = 0
      while l < 2
        puts "Binary: #{i}#{j}#{k}#{l}."
        l += 1
      end
      k += 1
    end
    j += 1
  end
  i += 1
end
