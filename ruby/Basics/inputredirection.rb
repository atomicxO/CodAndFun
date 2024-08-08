# Input Validation:-
=begin
puts "Enter your email address: "
email = gets.chomp

if email =~ /\A[\w+\-.]+@[a-z\d\-]+(\.[a-z]+)*\.[a-z]+\z/i
  puts "valid email address."
else
  puts "Invalid email address."
end

=end


# Error Handling:-
=begin
begin
  puts "Enter a Number: "
  number = Integer(gets.chomp)
  puts "You entered: #{number}"

  return ArgumentError
  puts "Invalid input. Please enter a valid integer."
  retry   # Retry the input operation.
end
=end


=begin
# Handling Multiple Inputs:-

puts "Enter three numbers separated by spaces: "
numbers = gets.chomp.split.map(&:to_i)
sum = numbers.sum
puts "The sum of #{numbers} is #{sum}"

=end


# `to_sym` converts a string to a symbol. (or `intern`)

# Symbols are immutable and often used as identifiers in Ruby, especially in hashes or for method names.
puts "\n[+] Choose an option (enter as text): "
option = gets.chomp.to_sym 

if option == :play
  puts "-> Starting the game..."
elsif option == :quit
  puts "-> Exiting the game..."
else
  puts "-> Invalid option."
end


# `to_f` Converts a string to a floating-point nunber (float).

puts("\n[+] Enter a numbers with Decimals: ")
decnum = gets.chomp.to_f

puts "-> The square root of #{decnum} is #{Math.sqrt(decnum)}."



# `to_s` Converts any object to a string representation.
puts("\n[+] Enter your Name: ")
name = gets.chomp.to_s 
puts "-> Hello #{name}."

puts "\n[+] Enter some names here:"
_names = gets.chomp.split.map(&:to_s)
puts "-> The Entered Names are: #{_names}."