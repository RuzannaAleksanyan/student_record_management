#include "student.h"
#include "academy.h"

#include <stdio.h>

void student_record_management(struct Academy* academy) {
    int choice;
    struct Student new_student;
    int id = 0;

    int records_loaded = load_from_file(academy);

    if (records_loaded == -1) {
        return;
    } else {
        id = records_loaded;
    }

    do {
        printf("1. Add a new student record\n");
        printf("2. Display all records\n");
        printf("3. Update a record\n");
        printf("4. Delete a record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student information: \n");
                printf("Name: ");
                scanf("%s", new_student.name);
                printf("Surname: ");
                scanf("%s", new_student.surname);
                printf("Age: ");
                scanf("%d", &new_student.age);
                printf("Grade: ");
                scanf("%d", &new_student.grade);
                new_student.id = ++id;
                add_student(academy, &new_student);
                break;
            case 2:
                read_records(academy);
                break;
            case 3:
                printf("Enter the ID of the record to update: ");
                int target_id;
                scanf("%d", &target_id);
                printf("Enter new student information: \n");
                printf("Name: ");
                scanf("%s", new_student.name);
                printf("Surname: ");
                scanf("%s", new_student.surname);
                printf("Age: ");
                scanf("%d", &new_student.age);
                printf("Grade: ");
                scanf("%d", &new_student.grade);
                new_student.id = target_id;
                update_record(academy, &new_student);
                break;
            case 4:
                if(academy->size <= 0) {
                    // student chenq karox heracnel qani vor chka student
                    printf("");
                } else {
                    printf("Enter the ID of the record to delete: ");
                    int delete_id;
                    
                    do {
                        printf("Enter the ID of the record to delete (0 to %d): ", academy->size - 1);
                        scanf("%d", &delete_id);

                        if (delete_id < 0 || delete_id >= academy->size) {
                            printf("Invalid ID. Please enter a value between 0 and %d.\n", academy->size - 1);
                        }
                    } while (delete_id < 0 || delete_id >= academy->size);
                    
                    delete_record(academy, delete_id);
                }
                
                break;
            case 5:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);
    write_in_file(academy);
}