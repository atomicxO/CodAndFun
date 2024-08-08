#!/usr/bin/ruby -w

str = <<-TEXT
This is a demonstration of a Multi line string. 
Iam using in the ruby programming language.

TEXT

puts str

print("\n[+] Immutable Nature: ")

str = "Hello,"
puts str

str << " world!"
puts str

# Proc and Lambda
print ("\n[+] Proc Special Data Types: ")
my_proc = Proc.new { |x|  x * 2 }

puts my_proc.call(5)


print ("\n[+] Lambda Special Data Types: ")
my_lamba = ->(x) { x * 2 }
puts my_lamba.call(5)


# Enumerators:

print ("\n[+] Enumerators Special Data Types: ")

enum = (1..5).each
puts enum.next  # 1
puts enum.next  # 2


# Files

=begin

file = File.open("main.txt","w")
file.write("Hello, Friend..?")
file.close

=end

# Struct

print ("\n[+] Struct in Ruby: ")
Person = Struct.new(:name, :age)
person = Person.new("Alice",29)

puts person.name , person.age 


