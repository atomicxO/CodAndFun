# Making Directories:

**Q. Create a directory named tmp/files in the current working directory.**

**Hint: The directory "tmp/" doesn't exist, with one command you need to create both "tmp/" and 
"tmp/files"**

```
 -p, --parents
```
>> no error if existing, make parent directories as needed

> This will make the directory and files which is not existing with only one liner.


# Symbolic Links In Linux:

**A Symbolic link is a type of file that is a reference to another file.**
**Create a symbolic link named files0101 that points to the file tmp/files/files0101**
```
>> ln -s tmp/files/files0101 files0101
```

>> Symbolic Link (ln -s):
```
ln -s /path/to/target  /path/to/link
```

**Example for Files:**
```
ln -s /home/user/originalfile /home/user/symlink
```
>> This creates a symbolic link named symlink in the directory /home/user that points to 
   originalfile.

**Example for Directories:**
```
ln -s /path/to/original/directory /path/to/symlink/directory
```

>> This creates a symbolic link directory named directory in /path/to/symlink that points to 
   /path/to/original/directory.

```
Note: A Hard Link is a duplicate entry it doesn't point any direcotry to any file name.
      It just a normal file created like duplicate one. "-rw-r--r--".

You can share the hard link files in the anytype of other drives like usb drives,hard disk,
because the inode number in starting which is not similar to anyone in the file system.

>> Hard Link (ln without -s):

```


# Deleting all the files without using "rm -rf * ":

> Delete all of the files in this challenge directory including all subdirectories and their 
  contents.

Hint: There are files and directories that start with a dot ".", "rm -rf * " won't work here.

**This command is used to delete the contents of the file without using rm -rf * and rm command.**
```
>> find . -name "*" -delete
```


> There are files in this challenge with different file extensions. Remove all files with the 
  `.doc` extension recursively in the current working directory.

```
find . -name "*.doc" -delete
```


# Print all files in the current directory, one per line (not the path, just the filename) that      contain the stirng "500".

```
>> cat access.log | grep -l "500" *
```

**-l : --files-with-matches**


# Print the relative file paths, one path per line for all filenames that start with "access.log"   in the current directory.

```
ls -laps | grep -L "access.log" *
```

**-L, --files-without-match**


# Print all matching lines (without the filename or the file path) in all files under the current    directory that start with "access.log" that contain the string "500".

**Note that there are no files names `access.log` in the current directory, you will need to search  recursively.**

```
ls -alps | grep -hr <'or you can use -h -r'> "500" *
```

**Explanation:**

>> `-h` :   -h, --no-filename.
>> `-r` :  recursively finding.


# Extract all IP addresses from files that start with "access.log" printing the IP address per       line.

> Using the awk command.
**This command is used to extract the IP addresses from access logs in Unix-like systems.**
```
cat **/access.log* | awk '{print $1}'
```

>> [`**`] is a globbing pattern that matches zero or more directories).
This will find the all directories and subdirectories file finding.


# Count the number of files in the current working directory. print the number of files as a single  integer.

```
>> ls -l | wc -l 
```

# Print the contents of access.log sorted.

```
>> cat access.log | sort
```

# Print the number of lines in access.log that contain the string "GET".

```
cat access.log |  grep -E "GET" | wc -l
```

# The file split-me.txt contains a list of number separated by a ; character. Split the number on    the ; character, one number per line.

```
cat main.txt | tr ';' '\n '

  AND

cat main.txt | tr ';' ' '
```

This commands replace the `;` to a space between the strings.



# Print the numbers 1 to 100 separated by spaces.

```
 for i in {1..100}; do echo $i; done | tr '\n' ' '
```

This will print the 1 to 100 with space.


# This challenge has text files (with a .txt extension) that contain the phrase "challenges are      difficult". Delete this phrase form all text files recursively.

Note that some files are in subdirectories so you will need to search for them.

```
find . -type f -name "*.txt" -exec sed -i 's/challenges are difficult//g' {} +     [***]
```

Somethings I need to know here:
```
> First, `Find` command if you want to need to do something with file directory or anything in the 
  file and directory or you think you have to use a chain of tools or command line with `find`
  command then use `-exec` to execute the another command with the `find` command.


> `sed`: Stream editor that can perform basic text transformations on an input stream 
       (a file or input from a pipeline).

> `-i` flag: Stands for "in-place" and allows `sed` to edit files directly rather than sending
   the output to the standard output (stdout).

> `s/old_string/new_string//g`: The `s` command is used to `substitute` `old_string` with 
  `new_string`. The `g` at the end means "global," which means all occurrences in the line will 
  be replaced.

> '//g' The //g syntax is a shorthand`sed`when you want to repeat used pattern,This is useful if
  you need to preform the same substitution multiple times without retyping the patterns.

```

# The file sum-me.txt has a list of numbers, one per line. Print the sum of these numbers.
```
jq -s add same-me.txt

>> man jq --> command line json processor.

>> awk --> awk '{sum += $1}END{print sum}' same-me.txt
```

# Print all files in the current directory recursively without the leading directory path.
```
find . -type f -exec  basename {} \; 

>>  basename - strip directory and suffix from filenames.

example:
  basename /usr/bin/sort
              -> "sort"

>> \; --> This is for escaped the command line;

>> {} --> this is for end of the exec command in find command.
```


# The files in this challenge contain spaces. List all of the files (filenames only) in the current   directory but replace all space with a '.' character.

```
ls | tr ' ' '.'

>> tr --> tr command used to translate and delete the character from the file.
```

# In this challenge there are some directories containing files with different extensions.           print all directories, one per line without duplicates that contain one or more files with a       ".tf" extension.

```
dirname **/*tf | sort -u

>> dirname - strip slast component from the file name.
example:  dirname /usr/share/applications/
        -> /usr/share
>> sort -u the files which are unique.
```

# There are a mix of files in this directory that start with letters and numbers. Print the          filenames (just the filenames) of all files that start with a number recursively in the current    directory.

```
find . -type f -printf '%f\n' | grep ^[0-9]

>> -printf print  format  on  the standard output, interpreting `\' escapes and `%' 
direc-tives.  

    ^[0-9]
>>  Therefore, grep will only match lines where the filename starts with a digit ([0-9]). 
   This is useful for filtering filenames that start with a numeric character.
```

# print the 25th of the file faces.txt
```
head -n 25 file.txt | tail -n 1

>> head -n 25 example.txt --> outputs the first 25 lines of example.txt.

>> tail -n 1 outputs the last line of the output from 'head'  which in this case is the 10th 
   line of example.txt.

```

# Print the lines of the file reverse-me.txt in this directory in reverse line order so that the    last line is printed first and the first line is printed last.
```
tac *.txt

>> tac is command to use when you want to print the output and contents of file in reverse.

```

# Print the file faces.txt, but only print the first instance of each duplicate line, even if the   duplicates don't appear next to each other.                                                                                                                                                         Note that order matters so don't sort the lines before removing duplicates.

```
nl faces.txt | sort -u -k 2 | sort -n | cut -f2-
```

# The file random-numbers.txt contains a list of 100 random integers. Print the number of unique    prime numbers contained in the file.

```
cat randon-numbers.txt | sort| uniq| factor| awk 'NF==2' | wc -l

>> factor -> Print the prime factor of each integer numbers.
```

# access.log.1 and access.log.2 are http server logs.                                               print the IP addresses common to both files, one per line.

```
cat * | awk '{print $1}' | sort | uniq -d

```

# Print all matching lines (without the filename or the file path) in all files under the current   directory that start with "access.log", where the next line contains the string "404".                  Note that you will need to search recursively.

```
find -name "access.log*" -exec awk '/404/ {print a; } { a=$0 }'  {} \;

```

# Print all files with a .bin extension in the current directory that are different than the file   named base.bin.


```
diff * .bin --to-file=base.bin | cut -d ' ' -f3

>> this command gives you a list of .bin files that differ from base.bin
```

# There is a file: ./.../ /. .the flag.txt Show its contents on the screen.

```
cat ./.../*/.*flag.txt

>> In this type of files where you see the space or blank line put the ' * ' for all like file 
   contents.
```

# How many lines contain tab characters in the file name file-with-tabs.txt in the current          directory.

```
grep -o $'\t' file.txt | wc -l

>> -o means only matching.
```

# There are files in this challenge with different file extensions. Remove all files without the    .txt and .exe extensions recursively in the current working directory.

```
find .  ! -iname "*.txt" ! -iname "*.exe" -delete

>> this means it contains only txt and exe extensions file and delete all the file and directories
   which are not equal to this.
```

# There are some files in this directory that start with a dash in the filename. Remove those       files.

```
rm -- -*
```

# There are two files in this directory, ps-ef1 and ps-ef2. Print the contents of both files        sorted by PID and delete repeated lines.

```
cat ps-ef* | sort -unk2
>> -k2 instructs sort to base its sorting on the content of the second column.
```

# In the current directory there is a file called netstat.out.                                      Print all the IPv4 listening ports sorted from the higher to lower.

```
cat netstat.out | grep -w "LISTEN" | awk '{print $4}' | cut -d":" -f2 |  sort -rn

Explanation:

This command sequence performs a series of text processing operations on the file `netstat.out`. Here's a step-by-step breakdown of what each part does:

1. **`cat netstat.out`**: This outputs the contents of the file `netstat.out`.

2. **`grep -w "LISTEN"`**: This filters the output to include only lines that contain the exact word "LISTEN". The `-w` option ensures that only whole words are matched.

3. **`awk '{print $4}'`**: This extracts the fourth column (field) from each line of the filtered output. In the context of `netstat` output, this typically corresponds to the address and port combination where the service is listening.

4. **`cut -d":" -f2`**: This uses `cut` to split each line using `:` as the delimiter (`-d":"`) and extracts the second field (`-f2`). This isolates the port number from the address:port combination.

5. **`sort -rn`**: Finally, `sort` sorts the extracted port numbers in reverse numerical (`-n`) order (`-r`), which means it sorts from highest to lowest port number.

### Summary:

The entire command sequence extracts and sorts port numbers that are in the "LISTEN" state from the `netstat.out` file. It does this by:
- Filtering lines to include only those with "LISTEN".
- Extracting the fourth column (which typically contains the address:port combination).
- Isolating the port number from the address:port using `cut`.
- Sorting these port numbers in descending order. 

This sequence is useful for analyzing network activity and identifying which ports are actively listening for incoming connections based on the `netstat` output.
```
