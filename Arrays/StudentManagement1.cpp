#include <iostream>
#include <string>

class Student {
    public:
    int rollno;
    std::string name;
    int m1;
    int m2;
    int m3;
};

void insertBegin (Student students[], int &n) {
    Student s;
    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Array is full!\n";
            return;
        } else {
            std::cout <<"Enter rollno : ";
            std::cin >>s.rollno;

            std::cout <<"Enter student name : ";
            std::cin >>s.name;

            std::cout <<"Enter marks in subject 1 : ";
            std::cin >>s.m1;

            std::cout <<"Enter marks in subject 2 : ";
            std::cin >>s.m2;

            std::cout <<"Enter marks in subject 3 : ";
            std::cin >>s.m3;

            for (int i = n - 1; i >= 0; i--) {
                students[i+1] = students[i];
            }
            students[0] = s;
            n++;
            std::cout <<"Details inserted!\n";
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
            std::cout <<"Array is full!\n";
            return;
        } else {
            std::cout <<"Enter rollno : ";
            std::cin >>s.rollno;

            std::cout <<"Enter student name : ";
            std::cin >>s.name;

            std::cout <<"Enter marks in subject 1 : ";
            std::cin >>s.m1;

            std::cout <<"Enter marks in subject 2 : ";
            std::cin >>s.m2;

            std::cout <<"Enter marks in subject 3 : ";
            std::cin >>s.m3;

            students[n] = s;
            n++;
            std::cout <<"Details inserted!\n";
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
            std::cout <<"Array is full!\n";
            return;
        } else {
            std::cout <<"Enter position to insert details : ";
            std::cin >>pos;

            if (pos < 0 || pos > n) {
                std::cout <<"Invalid position!\n";
                return;
            } else {
                std::cout <<"Enter rollno : ";
                std::cin >>s.rollno;

                std::cout <<"Enter student name : ";
                std::cin >>s.name;

                std::cout <<"Enter marks in subject 1 : ";
                std::cin >>s.m1;

                std::cout <<"Enter marks in subject 2 : ";
                std::cin >>s.m2;

                std::cout <<"Enter marks in subject 3 : ";
                std::cin >>s.m3;

                for (int i = n - 1; i >= pos; i--) {
                    students[i+1] = students[i];
                }
                students[pos] = s;
                n++;
                std::cout <<"Details inserted!\n";
            }
        }
    }
}

void deleteBegin (Student students[], int &n) {
    if (n == 0) {
        std::cout <<"Details are empty!\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            students[i] = students[i+1];
        }
        n--;
        std::cout <<"Details deleted!\n";
    }
}

void deleteEnd (Student students[], int &n) {
    if (n == 0) {
        std::cout <<"Details are empty!\n";
        return;
    } else {
        n--;
        std::cout <<"Details deleted!\n";
    }
}

void deletePosition (Student students[], int &n) {
    int pos;
    if (n == 0) {
        std::cout <<"Details are empty!\n";
        return;
    } else {
        std::cout <<"Enter a position to delete details : ";
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

void display (Student students[], int &n) {
    if (n == 0) {
        std::cout <<"Details are empty!\n";
        return;
    } else {
        std::cout <<"Student Details : \n";
        for (int i = 0; i < n; i++) {
            std::cout <<i+1<<") Roll No : "<<students[i].rollno
                      <<" | Name : "<<students[i].name
                      <<" | Average Marks : "<<double (students[i].m1 + students[i].m2 + students[i].m3) / 3<<"\n";
        }
        std::cout <<"\n";
    }
}

void update (Student students[], int &n) {
    int pos;

    if (n == 0) {
        std::cout << "Student list is empty!\n";
        return;
    }

    std::cout << "Enter position to update student : ";
    std::cin >> pos;

    if (pos < 0 || pos >= n) {
        std::cout <<"Invaild position!\n";
        return;
    } else {
        std::cout <<"\nCurrent details : \n";
        std::cout <<"Roll No : "<<students[pos].rollno
                  <<" | Name : "<<students[pos].name
                  <<" | Average Marks : "<<double (students[pos].m1 + students[pos].m2 + students[pos].m3) / 3;
        
        std::cout <<"\nEnter new details : \n";

        std::cout <<"Enter rollno : ";
        std::cin >>students[pos].rollno;

        std::cout <<"Enter student name : ";
        std::cin >>students[pos].name;

        std::cout <<"Enter marks in subject 1 : ";
        std::cin >>students[pos].m1;

        std::cout <<"Enter marks in subject 2 : ";
        std::cin >>students[pos].m2;

        std::cout <<"Enter marks in subject 3 : ";
        std::cin >>students[pos].m3;

        std::cout <<"Details Updated!\n";
    }
}

int main () {
    Student students[10];
    int n = 0;
    int choice;
    char exit = 'y';

    do {
        std::cout <<"\n--- |Student Information| ---\n";
        std::cout <<"[1].Insert details at beginning\n";
        std::cout <<"[2].Insert details at ending\n";
        std::cout <<"[3].Insert details at position\n";
        std::cout <<"[4].Delete details at beginning\n";
        std::cout <<"[5].Delete details at ending\n";
        std::cout <<"[6].Delete details at position\n";
        std::cout <<"[7].Display details\n";
        std::cout <<"[8].Update details\n";
        std::cout <<"[9].Exit\n";
        std::cout <<"Enter choice (1 - 9) : ";
        std::cin >>choice;

        switch (choice) {
            case 1: insertBegin(students , n);
            break;

            case 2: insertEnd(students , n);
            break;

            case 3: insertPosition(students, n);
            break;

            case 4: deleteBegin(students, n);
            break;

            case 5: deleteEnd(students, n);
            break;

            case 6: deletePosition(students, n);
            break;

            case 7: display(students, n);
            break;

            case 8: update(students, n);
            break;

            case 9:
            std::cout <<"Do you want to exit? (y/n) : ";
            std::cin >>exit;

            if (exit == 'y' || exit == 'Y') {
                std::cout <<"Program Exited Sucessfully!\n";
            } else {
                choice = 0;
            }
            break;

            default: std::cout <<"Invalid choice!\n";
            break;
        }

    } while (choice != 9);

    return 0;
}
