#!/usr/bin/ruby -w

input = ""

while input != "coder"
print ("[+] Enter the Password: ")
	input = gets.chomp
	if input != "coder"
	puts "Invalid Password."
	
	elsif input == "coder"
		print ("\nLogin Successfully, Welcome #{input}.")
	end
end
