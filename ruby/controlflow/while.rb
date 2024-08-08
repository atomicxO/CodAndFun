#!/usr/bin/ruby -w

print ("[+] Enter the Input: ")
x = gets.chomp.to_i

while (x >= 0)
  puts x
  x-=1

end


puts ("\n[+] Runy while with break: ")
i = 1
while true
  if i > 5
    break
  end
  puts i
  i += 1
end


puts ("\n[+] Ruby using 'while' with 'next' ")

i = 1
while i < 100
  i += 1
# next if statement in ruby;
  next if i == 25
  puts i 
end

# Infinite Loop;
puts ("\n[+] Infinite Loop..\n")
puts ("Be cautious with infinite loops; make sure to have a proper exit condition: ")

counter = 0
while true
  puts "[+] counter: #{counter}."
  counter += 1
break if counter > 15
end

# Loop with `elsif` and `else`.
# You can incluse `elsif` and `else` for more complex conditions: 

num = 1

while num <= 10
  if num % 2 == 0
    puts "#{num} is even."
  elsif num % 2 != 0
    puts "#{num} is odd."
  else
    num += 1
  end


# While with do ...end Loop.
counter = 0

while counter < 11 do

puts "Count is: #{counter}."
counter += 1  
end

puts "Finished!"


# Looping with Multiple Conditions;

# You can have complex conditions in the 'while' loop. Conditions can involve 
#  multiple checks combined with logical operators.

count = 0
flag = true

while count < 10 && flag
  puts "Count is #{count}"
  count += 1
  flag = false if count == 5
end
