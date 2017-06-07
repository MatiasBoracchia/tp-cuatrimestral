//
// Created by Usuario on 31-May-17.
//

#include "Student.h"

Student* createStudent(int id, Person* person1) {
    Student *student1 = malloc(sizeof(Student));
    student1->person1 = malloc(sizeof(Person));
    student1->person1 = person1;
    student1->id = id;
    person1->studentOrProfessor = "Student";
    return student1;
}