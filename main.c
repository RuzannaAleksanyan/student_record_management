// #include "student.h"
#include "academy.h"


void student_record_management(struct Academy* academy);

int main() {
    struct Academy academy;
    allocate_students(&academy);

    student_record_management(&academy);
}