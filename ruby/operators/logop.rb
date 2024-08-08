
# Another Example Program;

# Create a simple program that determines whether a person is eligible to 
# vote based on their age and citizenship status.

puts("\n+-------------------------------+")
puts("Voting Crietaria Application")
puts("+---------------------------------+\n\n")

=begin
# Input Handling:

So, we taking the example of this code:

* Instead of assigning fixed values (`age = 28` and `citizenship = "US"`),
  we use `gets.chomp.to_i` to read the age input from the user.
  `gets_chomp` reads a line of input from the user and `to_i` converts it 
  to and integer.

* Similarly, `gets.chomp.upcase` reads the citizenship input and converts
  it to uppercase using `upcase`.
  This ensures that inputs like "us", "US",or "US" are treated the same for
  comparison. 	
=end

puts("[+] Enter your Age: ")
age = gets.chomp.to_i 

puts("[+] Enter your citizenship status: ")
citizenship = gets.chomp.upcase

if age >= 18 && citizenship == "IN"
	puts "-> Yes, You can Vote with this age and citizenship."
else
	puts "-> You have to become a citizen of this country and be 18+ to vote."
end
