#!/usr/bin/ruby -w

# Program to demonstrate the case and when statement in ruby programming language,
# Like switch..case in other programming languages.

print ("[-] Enter a day: ")
day = gets.chomp

# This is the formatted variable that can both capitalize and lowecae string of letters.
f_day = day.downcase.capitalize

case f_day
when "Monday" || "monday"
  puts "[+] You have meeting with Board."
when "Tuesday" || "tuesday"
  puts "[+] You have to do a team metting."
when "Wednesday" || "wednesday"
  puts "[+] You have to work on a personal project."
when "Thursday" || "thursday"
  puts "[+] You have to take the interview of the freshers."
when "Friday" || "friday"
  puts "[+] You have to mitigates the vulnerability in application."
when "Saturday" || "saturday"
  puts "[+] It's a weekend, So Play CTF's do laundary and chill."
when "Sunday" || "sunday"
  puts "[+] It's sunday, Go to Gym, and sleep all day and if you want play games all day."
else
  puts "[x] AAh... Wrong Input!\n"

end



# You can also do the this if you want to give a little suggestion not a todolist for 
# week.

=begin

[V2.0]

puts "Enter a day of the week:"
day = gets.chomp.capitalize

case day
when "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
  puts "It's a weekday!"
  puts "Suggested activity: Go to work or Attend classes."
when "Saturday", "Sunday"
  puts "It's the weekend!"
  puts "Suggested activity: Relax at home or Go for a hike."
else
  puts "Error: Invalid day of the week."
end

=end
