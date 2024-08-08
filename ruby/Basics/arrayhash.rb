#!/usr/bin/ruby -w

###############################
# 		Arrays 				  #
###############################

# If you want to have many of the same thing then arrays are very useful.
# An array is a collection of items in a single locations.

# Here's an Example:

#```
# [1, 2, 3, 4, 5]
#```
# This is an array of integers.
#
# [+] You can access every element by its position.
# We call that position an index.
#
#Example:

letters = ['a', 'b', 'c']

letters[0]
puts letters[0]
# 'a'

letters[1]
# 'b'
puts letters[1] 

letters[2]
puts letters[2]
# 'c'

# The first element in an array is always on position 0.

#Note: If you ask for an index that is bigger than the array size you'll get a nil value.

# It's look like this:
#```
#letters[4]

# nil
# A nul value is RUby telling you:

# I can't find what you want so here is a generic response And just like strings,
# arrays have a set of methods you can use to make them do things.

# For Example:
letters.size


# adding new elements to an array like this:
puts "Adding a new elements to an array;"
numbers = []

numbers << 1
numbers << 2
numbers << 3

puts numbers

# This is a very useful array method.

# Both strings & arrays are very important building blocks for writing 
# your Ruby programs.

# Note: If you don’t understand how these 2 work you won’t be able to write even the most basic projects you can think of.



=begin
***********************
* 		Hash 		  *
***********************
=end


# A hash is like a directory.

# > It helps you `match two values together...`

# ...like a domain name to an IP address, or a phone number to a person's name.


# Here's how to creae a hash in Ruby:

ip_to_domain = { "rubyguides.com" => "185.14.187.159" }

# You can get the calue for a hash key like this:

ip_to_domain["rubyguides.com"]

# And you can change the value like this:

ip_to_domain["rubyguides.com"] = "127.0.0.1"

# There are the 3 main operations you can do with a hash.

# btw, you use a comma to separate multiple key/value pairs.

# Like this:

values = { "a" => 1, "b" => 2 }
puts "#{values}"