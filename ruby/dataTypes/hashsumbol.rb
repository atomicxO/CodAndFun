#!/usr/bin/ruby -w

strza = gets.chomp
strzb = gets.chomp
strzc = gets.chomp
strzd = gets.chomp

# When you use hash function with symbols don't forget commas ',' they are key player.
person = {
  :name =>  strza,
  :age =>   strzb,
  :city =>  strzc,
  :anime => strzd
}

puts "\n[+]" + " " + person[:name]
puts "[+]" + " " + person[:age]
puts "[+]" + " " + person[:city]
puts "[+]" + " " + person[:anime]
