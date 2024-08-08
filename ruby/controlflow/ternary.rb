#!/usr/bin/ruby -w

# Using the Ternary Statement in the Ruby;
print ("[*] Enter your Numerical Input: ")
take_input_as_num = gets.chomp.to_i

is_even_or_odd= ((take_input_as_num % 2 == 0) ? "[+] This is an Even Number." : "[x] This is an Odd Number.");

puts is_even_or_odd
