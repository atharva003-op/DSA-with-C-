#include <iostream>
#include <string>

class Student {
    public:
    int rollno;
    std::string name;
    int age;
};

void insertBegin (Student students[], int &n) {
    Student s;

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter student rollno : ";
            std::cin >>s.rollno;

            std::cin.ignore();

            std::cout <<"Enter student name : ";
            std::getline(std::cin, s.name);

            std::cout <<"Enter student age : ";
            std::cin >>s.age;

            for (int i = n - 1; i >= 0; i--) {
                students[i+1] = students[i];
            }
            students[0] = s;
            n++;
            std::cout <<"\nDetails inserted!\n";
        }
    }
}

void insertEnd (Student students[], int &n) {
    Student s; 

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter student rollno : ";
            std::cin >>s.rollno;

            std::cin.ignore();

            std::cout <<"Enter student name : ";
            std::getline(std::cin, s.name);

            std::cout <<"Enter student age : ";
            std::cin >>s.age;

            students[n] = s;
            n++;
            std::cout <<"\nDetails inserted!\n";
        }
    }
}

void insertPosition (Student students[], int &n) {
    Student s;
    int pos;

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter position to insert : ";
            std::cin >>pos;

            if (pos < 0|| pos > n) {
                std::cout <<"Invalid position!\n";
                return;
            } else {
                std::cout <<"Enter student rollno : ";
                std::cin >>s.rollno;

                std::cin.ignore();

                std::cout <<"Enter student name : ";
                std::getline(std::cin, s.name);

                std::cout <<"Enter student age : ";
                std::cin >>s.age;

                for (int i = n - 1; i >= pos; i--) {
                    students[i+1] = students[i];
                }

                students[pos] = s;
                n++;
                std::cout <<"\nDetails inserted!\n";
            }
        }
    }
}

void deleteBegin (Student students[], int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            students[i] = students[i+1];
        }
        n--;
        std::cout <<"\nDetails deleted!\n";
    }
}

void deleteEnd (Student students[], int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        n--;
        std::cout <<"\nDetails deleted!\n";
    }
}

void deletePostion (Student students[], int &n) {
    int pos;

    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        std::cout <<"Enter a position to delete : ";
        std::cin >>pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            for (int i = pos; i < n - 1; i++) {
                students[i] = students[i+1];
            }
            n--;
            std::cout <<"Details deleted!\n";
        }
    }
}

void display (Student students[], int n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        std::cout <<"\nAll student records : \n";
        for (int i = 0; i < n; i++) {
            std::cout <<"RollNo : "<<students[i].rollno
                      <<" | Name : "<<students[i].name
                      <<" | Age : "<<students[i].age
                      <<"\n";
        }
        std::cout <<"\nDetails fetched sucessfully!\n";
    }
}

int main () {
    Student students[10];
    int n = 0;
    int choice;
    char exit = 'y';

    do {
        std::cout <<"\n--- |Student Management| ---\n";
        std::cout <<"[1].Insert details at beginning\n";
        std::cout <<"[2].Insert details at ending\n";
        std::cout <<"[3].Insert details at position\n";
        std::cout <<"[4].Delete details at beginning\n";
        std::cout <<"[5].Delete details at ending\n";
        std::cout <<"[6].Delete details at position\n";
        std::cout <<"[7].Display details\n";
        std::cout <<"[8].Exit\n";
        std::cout <<"Enter choice (1 - 8) : ";
        std::cin >>choice;

        switch (choice) {
            case 1: insertBegin(students, n);
            break;

            case 2: insertEnd(students, n);
            break;

            case 3: insertPosition(students, n);
            break;

            case 4: deleteBegin(students, n);
            break;

            case 5: deleteEnd(students, n);
            break;

            case 6: deletePostion(students, n);
            break;

            case 7: display(students, n);
            break;

            case 8:
            std::cout <<"Do you want to exit? (y/n): ";
            std::cin >>exit;

            if (exit == 'y' || exit == 'Y') {
                std::cout <<"Program Exited sucessfully!";
            } else {
                choice = 0;
            }
            break;

            default:
            std::cout <<"Invalid choice!\n";
            break;
        }

    } while (choice != 8);

    return 0;
}
