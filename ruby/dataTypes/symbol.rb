#!/usr/bin/ruby -w

# Define a hash with symbols as keys

user = {
  name: "Eliiot Alderson",
  email: "samsepoil@euser.mail",
  role: :security_engineer
}

# Access Hash values using symbols
print ("[+] Username: "+ user[:name])
print ("\n[+] Email: "+ user[:email])
puts user[:role]

# using symbols in a method call
def greet(user_role)
  case user_role
  when :security_engineer
    "\n>> Welcome, Elliot."
  when :guest
    "\n> welcome, Guest let's get started with some tour"
  else
    "[-] Hi There!"
  end
end

puts greet(:security_engineer)
