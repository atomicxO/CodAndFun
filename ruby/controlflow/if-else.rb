#!/usr/bin/ruby -w

# This program demonstrates the use of if..else statement in ruby programming language.
print("Enter your age: ")
age = gets.chomp.to_i

if age < 18
  puts "\n[+] You are not Allowed to Vote."
elsif age >= 18 && age <= 102
  puts "\n[+] You are Allowed to Vote."
else
  puts "\n[-] May be You Input something wrong please input valid,\n>> Have a Good Day"
end

