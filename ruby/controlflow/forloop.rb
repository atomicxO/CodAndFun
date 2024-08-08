#!/usr/bin/ruby -w

# [Method 1]:
=begin

# This will iterate from 1 to 5.

for i in 1..5
puts i
end

# >> Output: 1
#            2
#            3
#            4
#            5

=end

# [Method 2]:

print ("\n[+] Enter a Number from where you want to go: ")
a = gets.chomp.to_i
for i in 1..a do 
  puts i
end

# In range this will '..' add that number in range when you print a loop iteration.
# In range '...' this will not add that number in range when you print a loop iteration.

# [Method 3]: Iterating Over an Array:

print ("\n[+] Iterating over an Array.")
cars = ['[+] dodge', '[+] mustang', '[+] ferrari', '[+] lamborghini','[+] supra','[+] GTR']
for car in cars
  puts car
end


# [Method 4]: Using 'for' Loop with a Range.
print ("\n[+] Iterate through a range with a step.")

for i in 1..10
  if i % 2 == 0
    puts i
  end
end

# [Method 5]: Nested 'for' Loops:
print ("\n[+] Nested loop to print a grid of numbers.\n")

for i in 1..3
  for j in 1..3
    print "#{i * j} "
  end
  puts
end

# [Method 6]: Iterating Over a Hash:
print ("\n[+] Iterating through each key-value pair in a Hash.\n")

grades = {'Alice' => 90, 'Bob' => 80, 'Charlie' => 85}
for name,grade in grades
  puts ">> #{name} scored #{grade}."
end


# [Method 7]: Using 'for' Loop with a Custom Range.

puts "\n[+] Custom range and iteration.\n"
range = (10..15).to_a
for num in range
  puts num * num
end


# [Method 8]: Example with Multiple Ranges.
puts ("\n[+] Iterating over multiple ranges and combining their results")

for i in 1..3
  for j in 1..2
    puts ">> i=#{i}, j=#{j}."
  end
end

