#!/usr/bin/ruby -w

age = 20
name = "Programmer"

puts "Hello, #{name} whatssupp, and your age is #{age} years old!"

=begin
A Hash is a dictionary-like collection of unique keys and their values.
Also called associative arrays, they are similar to Arrays, but where an Array 
uses integers as its index, a Hash allows you to use any object type.

Hash enumerate their values in the `order` that the corresponding keys were 
inserted.

=end

# A hash can be easily created by using its implicit form:

# 1. grades = { "ruby programmer" => 1337, "C programmer" => 404 }
# puts grades

# 2. options = { :front_size => 10, :front_family => "Hack" }
# options = { font_size: 10, font_family: "Hack" }


# A hash can alone be created through its `::` new method:

grades = Hash.new
grades["Pwning world"] = 1337
puts grades["Pwning world"]

grades = {"HackerBoy" => 8}
grades.default = 0 	
puts grades["HackerBoy"]


# Common Uses!

# Hashes are an easy way to response data structure's  such as
books = {}
books[:matz] = "The ruby programming language"
books[:black] = "The well-Grounded Rubyist"
puts books

