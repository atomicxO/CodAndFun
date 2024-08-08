#!/usr/bin/ruby -w

# Logical operators work on bits operands.
# Ruby supports three main logical operators:
# In Ruby, logical operators are used to combine or modify the logical states of variables or expressions. 

=begin
/-----------------------------------------\	
operators	| 	   Description
  &&        ->     AND operator
  || 		-> 	   OR  operator
\-----------------------------------------/	
=end


puts("[-] Logical AND (`&&`):-")
# The `&&` operator returns `true` if both operands are `true`,otherwise it returns `false`.

# Example Code:

x = 5
y = 7
z = 10

if x < y && y < z
	puts "-> Both conditions are true."
end



puts("[-] Logical OR (`||`):-")
# The `||` operator returns `true` if at least one of its operands is 
#`true`, otherwise, it returns `false`.

age = 25

if age < 18 || age > 65
	puts "-> You can access the IRC client server."
else
	puts "-> No, You are under age client."
end



puts("[-] Logical NOT (`!`):-")
# The '!' operator negates the value of its operand; if the operand is `true`,`!` makes it `false`,and vice versa.

did_you_hack = false

#if !did_you_hack
#	puts "-> Yes, Iam Hacking right Now."
#else...

unless did_you_hack
	puts "-> No, Because Iam Working on my fundamentals and Basics of programming."
end


=begin
# Short-circuit Evaluation
[+] Ruby uses short-circuit evaluation for logical operators:

> With &&, if the first operand is false, Ruby does not evaluate the second operand because the overall expression will be false regardless.
> With ||, if the first operand is true, Ruby does not evaluate the second operand because the overall expression will be true regardless.

> Understanding logical operators is fundamental for creating conditional
  logic and controlling the flow of your Ruby Programs based on different
  conditions.

=end
