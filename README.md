# Student Record Management System

This is a simple C program for managing student records in an educational institution. The program allows users to add new student records, display existing records, update records, and delete records. The data is stored in a file (`student_data.txt`), and the program uses a basic console-based user interface.

## Table of Contents
- [Features](#features)
- [Prerequisites](#prerequisites)
- [How to Use](#how-to-use)
- [Compilation](#compilation)

## Features

1. **Add a new student record:** Allows users to input information for a new student and adds it to the records.

2. **Display all records:** Prints out all existing student records in a tabular format.

3. **Update a record:** Enables users to update the information of a specific student record.

4. **Delete a record:** Allows users to delete a student record based on the student's ID.

5. **File Storage:** The program reads and writes student records to a file (`student_data.txt`).

## Prerequisites

- [GCC](https://gcc.gnu.org/): The GNU Compiler Collection.

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/RuzannaAleksanyan/student_record_management.git
   ```

2. Navigate to the project directory:

   ```bash
   cd student-record-management
   ```

3. Compile the program:

   ```bash
   make
   ```

4. Run the program:

   ```bash
   ./student_record_management
   ```

5. Follow the on-screen instructions to perform actions like adding, displaying, updating, and deleting student records.

6. When you are finished, exit the program. The records will be saved in the `student_data.txt` file.

## Compilation

If you need to recompile the program, you can use the provided Makefile:

```bash
make clean
make
```
