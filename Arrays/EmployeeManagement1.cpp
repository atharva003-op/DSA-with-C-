#include <iostream>
#include <string>

class Employee {
    public:
    int id;
    std::string name;
    std::string dept;
    char gender;
    float salary;
};

void insertBegin(Employee employees[], int &n) {
    Employee e;

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter employee id : ";
            std::cin >>e.id;

            std::cin.ignore();

            std::cout <<"Enter employee name : ";
            std::getline(std::cin , e.name);

            std::cout <<"Enter department name : ";
            std::getline(std::cin , e.dept);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>e.gender;

            std::cout <<"Enter employee salary : ";
            std::cin >>e.salary;

            for (int i = n - 1; i >= 0; i--) {
                employees[i+1] = employees[i];
            }
            employees[0] = e;
            n++;
            std::cout <<"Details inserted!\n";
        }
    }
}

void insertEnd (Employee employees[], int &n) {
    Employee e;

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter employee id : ";
            std::cin >>e.id;

            std::cin.ignore();

            std::cout <<"Enter employee name : ";
            std::getline(std::cin , e.name);

            std::cout <<"Enter department name : ";
            std::getline(std::cin , e.dept);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>e.gender;

            std::cout <<"Enter employee salary : ";
            std::cin >>e.salary;

            employees[n] = e;
            n++;
            std::cout <<"Details inserted!\n";
        }
    }
}

void insertPosition (Employee employees[], int &n) {
    Employee e;
    int pos;

    if (n > 10) {
        std::cout <<"Size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"List is full!\n";
            return;
        } else {
            std::cout <<"Enter position to insert details : ";
            std::cin >>pos;

            if (pos < 0 || pos > n) {
                std::cout <<"Invalid position!\n";
                return;
            } else {
                std::cout <<"Enter employee id : ";
                std::cin >>e.id;

                std::cin.ignore();

                std::cout <<"Enter employee name : ";
                std::getline(std::cin , e.name);

                std::cout <<"Enter department name : ";
                std::getline(std::cin , e.dept);

                std::cout <<"Enter gender (M/F) : ";
                std::cin >>e.gender;

                std::cout <<"Enter employee salary : ";
                std::cin >>e.salary;

                for (int i = n - 1; i >= pos; i--) {
                    employees[i+1] = employees[i];
                }
                employees[pos] = e;
                n++;
                std::cout <<"Details inserted!\n";
            }
        }
    }
}

void deleteBegin (Employee employees[], int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            employees[i] = employees[i+1];
        }
        n--;
        std::cout <<"Details deleted!\n";
    }
}

void deleteEnd (Employee employees[], int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        n--;
        std::cout <<"Details deleted!\n";
    }
}

void deletePosition (Employee employees[], int &n) {
    int pos;

    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to delete : ";
        std::cin >>pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            for (int i = pos; i < n - 1; i++) {
                employees[i] = employees[i+1];
            }
            n--;
            std::cout <<"Details deleted!\n";
        }
    }
}

void display (Employee employees[], int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        for (int i = 0; i < n; i++) {
            std::cout <<"Emp id : "<<employees[i].id
                      <<" | Employe Name : "<<employees[i].name
                      <<" | Department : "<<employees[i].dept
                      <<" | Gender : "<<employees[i].gender
                      <<" | Salary : "<<employees[i].salary
                      <<"\n";
        }
        std::cout <<"\n";
    }
}

void update (Employee employees[], int &n) {
    int pos;

    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to update details : ";
        std::cin >>pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            std::cout <<"\nCurrent details\n";
            std::cout <<"Emp id : "<<employees[pos].id
                      <<" | Employe Name : "<<employees[pos].name
                      <<" | Department : "<<employees[pos].dept
                      <<" | Gender : "<<employees[pos].gender
                      <<" | Salary : "<<employees[pos].salary
                      <<"\n";
            
            std::cout <<"\nEnter new details : \n";

            std::cout <<"Enter employee id : ";
            std::cin >>employees[pos].id;

            std::cin.ignore();

            std::cout <<"Enter employee name : ";
            std::getline(std::cin , employees[pos].name);

            std::cout <<"Enter department name : ";
            std::getline(std::cin , employees[pos].dept);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>employees[pos].gender;

            std::cout <<"Enter employee salary : ";
            std::cin >>employees[pos].salary;

            std::cout <<"Details updated!\n";
        }
    }
}

void count (int &n) {
     std::cout << "Number of employees : " << n << "\n";
}

int main () {
    Employee employees[10];
    int n = 0;
    int choice;
    char exit = 'y';

    do {
        std::cout <<"\n--- |Employee Details| ---\n";
        std::cout <<"[1].Insert employee details at beginning\n";
        std::cout <<"[2].Insert employee details at ending\n";
        std::cout <<"[3].Insert employee details at position\n";
        std::cout <<"[4].Delete employee details at beginning\n";
        std::cout <<"[5].Delete employee details at ending\n";
        std::cout <<"[6].Delete employee details at position\n";
        std::cout <<"[7].Display employee details\n";  
        std::cout <<"[8].Update employee details\n";
        std::cout <<"[9].Count employees\n";
        std::cout <<"[10].Exit\n";
        std::cout <<"Enter choice (1 - 10) : ";
        std::cin >>choice;
        
        switch (choice) {
            case 1: insertBegin(employees, n);
            break;

            case 2: insertEnd(employees, n);
            break;

            case 3: insertPosition(employees, n);
            break;

            case 4: deleteBegin(employees, n);
            break;

            case 5: deleteEnd(employees, n);
            break;

            case 6: deletePosition(employees, n);
            break;

            case 7: display(employees, n);
            break;

            case 8: update(employees, n);
            break;

            case 9: count(n);
            break;

            case 10:
            std::cout <<"Do you want to exit? (y/n) : ";
            std::cin >>exit;

            if (exit == 'y' || exit == 'Y') {
                std::cout <<"Program Exited Sucessfully!";
            } else {
                choice = 0;
            }
            break;

            default: std::cout <<"Invalid choice!\n";
            break;
        }

    } while (choice != 10);

    return 0;
}
