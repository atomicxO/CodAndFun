#/usr/bin/ruby -w

# Integer to Float

int = 127
flt = int.to_f
print "[+] ", flt    # Output: 127.0

# Float to Integer (truncates the decimal part)
flt = 404.12
inte = flt.to_i
print "\n[+] ", inte   # Output: 404

# Float to Rational
flt = 32.14
rat = flt.to_r
print "\n[+] ", rat      # Output: 2261651437870121/70368744177664

# Rational to Float
rat = Rational(1,2)
flt = rat.to_f

print "\n[+] ", flt      # Output: 0.5
