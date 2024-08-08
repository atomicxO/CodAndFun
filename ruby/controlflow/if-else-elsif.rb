#!/usr/bin/ruby -w

# This program demonstrate the use of if..elsif..else statement in ruby programming 
# language.
print ("[+] Enter your Marks: ")
marks = gets.chomp.to_i

if marks >= 90
  puts ("[+] Your Grade is: \'A\'")

elsif marks >= 80
  puts ("[+] Your Grade is: \'B\'")

elsif marks >= 70
  puts ("[+] Your Grade is: \'C\'")

elsif marks >= 60 
  puts ("[+] Your Grade is: \'D\'")

else 
  puts ("[+] You are Fail, Your Grade is: \'F\'")

end



