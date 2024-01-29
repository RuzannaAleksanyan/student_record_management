#ifndef _ACADEMY
#define _ACADEMY

#include "student.h"

struct Academy {
    struct Student* students;
    int size;

};

int load_from_file(struct Academy* academy);
void write_in_file(struct Academy* academy);

void allocate_students(struct Academy* academy);

void add_student(struct Academy* academy, struct Student* student);
void read_records(struct Academy* academy);
void update_record(struct Academy* academy, struct Student* student);
void delete_record(struct Academy* academy, int delete_id);

#endif  // _ACADEMY