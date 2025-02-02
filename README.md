# File Management System in C

## Description
This is a simple File Management System implemented in C. It allows users to create, write to, read, and delete files through a command-line interface.

## Features
- Create a new file
- Write content to a file
- Read content from a file
- Delete an existing file

## How to Compile and Run

### Compilation
Use the following command to compile the program:
```sh
gcc file_management.c -o file_management
```

### Running the Program
After compilation, execute the program using:
```sh
./file_management
```

## Usage
Once the program starts, you will be presented with a menu:

1. **Create a File** - Prompts for a file name and creates it.
2. **Write to a File** - Allows you to append text to an existing file.
3. **Read a File** - Displays the contents of a file.
4. **Delete a File** - Deletes the specified file.
5. **Exit** - Exits the program.

## Example Run
```
File Management System

Select an option:
1. Create a File
2. Write to a File
3. Read a File
4. Delete a File
5. Exit
Enter your choice: 1
Enter the name of the file: example.txt
File created successfully.
```

## Notes
- The file name should not contain spaces.
- Writing to a file appends content rather than overwriting it.
- The program does not handle permissions-related errors.

## License
This project is open-source and available for modification and distribution.

