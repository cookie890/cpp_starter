hi

## File organization
You will notice there are some folders for each chapter i.e `01` 
This is where you can complete your exercises for each chapter

Note `main.cpp` from `01`. Any file that wants to include `PPPheaders.h` will
need to do so by adding the relative path to the header file. Namely,  `../` 
which means previous directory from the one I am currently in. 

So, if you are in `01` and want to include the headers please write it as
follows. 

```cpp
#include "../PPPheaders.h"
int main(){
    cout << "Hello World" << endl;
    return 0;
}
```

As long as you don't mess with these header files everything will be fine.

## How to compile and run
From inside `01` here is how to compile `main.cpp`.

Compile and generate and exectubale called main.
`g++ -std=c++23 main.cpp -o main`

Note that we specify the c++ standard with the option  `std`

You should now have an executable called `main`.

Run the executable with 
`.\main`


## Useful Bash
```
ls          # List files and directories in the current directory
ls -l       # Detailed list including file permissions, owner, size, and modification date
ls -a       # List all files including hidden files

cd path/to/directory   # Change to a specific directory
cd ..                  # Move up one directory level
cd -                   # Return to the previous directory

mkdir new_directory          # Create a new directory
mkdir -p parent/child        # Create nested directories

cp source.txt destination.txt   # Copy a file
cp -r source_directory/ destination_directory/ # Copy a directory and its contents
mv old_name.txt new_name.txt    # Rename or move a file
mv file.txt /path/to/directory/ # Move a file to another directory

find . -name "file.txt"          # Find a file named "file.txt" in the current directory and subdirectories
find /path/to/directory -type d  # Find directories within a specified path

cat file.txt          # Display the contents of a file
less file.txt         # View file contents page by page
more file.txt         # Similar to less, but with simpler navigation
head file.txt         # Show the first 10 lines of a file
tail file.txt         # Show the last 10 lines of a file
tail -f file.txt      # Monitor the end of a file in real-time

grep "search_term" file.txt         # Search for a term within a file
grep -r "search_term" directory/    # Recursively search for a term within a directory
```

## Useful Git
```
# Initialize a new Git repository in the current directory
git init

# Clone an existing Git repository from a remote URL
git clone https://github.com/username/repository.git

# Stage changes for the next commit
# Use '.' to stage all changes or specify files
git add .

# Commit the staged changes with a message
git commit -m "Commit message"

# Show the status of changes in the working directory and staging area
git status

# Push changes to the remote repository
git push origin branch_name

# Pull changes from the remote repository
git pull origin branch_name
```
