# Finding the File which is `human-readable`, `1033 bytes in size`, `not executable` in so many directories.
>> find . -type f -size 1033c -exec du -h {} + 

# Finding the File owned by `user` and `group` with `33 bytes` of size in whole linux system.
>>  find / -type f -size 33c -user bandit7 -group bandit6 2>/dev/null

# Using `grep` command to find the password in specific database.
>> cat data.txt | grep -E "millionth"

# Finding the File or string which is only occur one time.
>> cat data.txt | sort -R | uniq -c 

# Decoding the Base64 encrypted data with the use of terminal tools.
>> echo "VGhlIHBhc3N3b3JkIGlzIGR0UjE3M2ZaS2IwUlJzREZTR3NnMlJXbnBOVmozcVJyCg==" | base64 -d

# Something About `ROT13` encoding algorithm.

> small letters are stand with small letters there is no entry of captial letters in the encoding of the string.
> Capital letters are stand with Capital Letters there is no entry of small letters inthe encoding of the string.

[+] How you can decode the string of rot13 with the use of `tr` command in terminal.

>> cat data.txt | tr '[A-Za-z]' '[N-ZA-Mn-za-m]'
 
# You can make a Temporary Directory without using `mkdir` command.
>> mktemp -d 

# which is a hexdump of a file that has been repeatedly compressed and get the file.
~ Reverse The hexdump to binary file.

>> xxd -r hexdump.txt data.bin

>>  mv data.bin data.bin.gz

>> gunzip data.bin.gz

>> mv data.bin data.bin.bz2

>> bunzip2 data.bin.bz2

>> mv data.bin data.bin.tar

>> tar -xf data.bin.tar

Note: Use `file filename` or best thing `file *` to know what is the type of file.

-> From Now you get some more binaries do the same step above and in the end you get the flag or (password).


# We have the Private key in the system and get access to the another system.

>> ssh -i ssh_private_key bandit14@localhost -p 2220

# The password for the next level can be  retrieved by submitting the password of the current level to port 30000 on
  `localhost`.

>> nc localhost 30000


# Using the OpenSSL s_client for the next password or flag string:

Note:-

```
[+] s_client:-

> This command implements a generic SSL/TLS client which connects to a remote host using 
  SSL/TLS. It is a very useful diagnostic tool for SSL Servers.

[+] s_server:-

> This command implements a generic SSL/TLS server which listens for connections on a 
  given port using SSL/TLS.

```

In the challenge we use `s_client` to get the password for the next level.

>> `openssl s_client -connect localhost:30001` and then the password for previous level 
    and yes we get the password for current level.





# Openssls LEvel 16-17
-ign_of


>> Change the permission of the ssh private key:

chmod 400 or chmod 600 and also learn about it.

you can change the `localhost ` or `bandit.labs.overthewire.org -p 2220`


# A program is running automatically at regular intervals from `cron`, the time-based      job schedular. Look in /etc/cron.d/ for the configuration and see what command is        being executed.

>> bash /usr/bin/cronjob_bandit22.sh 

after this it will give you the error and flag too so get the flag by catting the file in
 temp directory.


