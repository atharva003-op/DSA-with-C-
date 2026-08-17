#include <iostream>
#include <string>

class Employee {
    public:
    int id;
    std::string name;
    std::string dept;
    std::string address;
    char gender;
    int salary;
    int commission;
};

void insertBegin (Employee employees[], int &n) {
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

            std::cout <<"Enter address : ";
            std::getline(std::cin , e.address);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>e.gender;

            std::cout <<"Enter salary : ";
            std::cin >>e.salary;

            std::cout <<"Enter commission : ";
            std::cin >>e.commission;

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
        std::cout <<"List is empty!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Size cannot exceed 10!\n";
            return;
        } else {
            std::cout <<"Enter employee id : ";
            std::cin >>e.id;

            std::cin.ignore();

            std::cout <<"Enter employee name : ";
            std::getline(std::cin , e.name);

            std::cout <<"Enter department name : ";
            std::getline(std::cin , e.dept);

            std::cout <<"Enter address : ";
            std::getline(std::cin , e.address);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>e.gender;

            std::cout <<"Enter salary : ";
            std::cin >>e.salary;

            std::cout <<"Enter commission : ";
            std::cin >>e.commission;

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
                std::cout <<"Invaild choice!\n";
                return;
            } else {
                std::cout <<"Enter employee id : ";
                std::cin >>e.id;

                std::cin.ignore();

                std::cout <<"Enter employee name : ";
                std::getline(std::cin , e.name);

                std::cout <<"Enter department name : ";
                std::getline(std::cin , e.dept);

                std::cout <<"Enter address : ";
                std::getline(std::cin , e.address);

                std::cout <<"Enter gender (M/F) : ";
                std::cin >>e.gender;

                std::cout <<"Enter salary : ";
                std::cin >>e.salary;

                std::cout <<"Enter commission : ";
                std::cin >>e.commission;

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

void deleteEnd (Employee employees[] , int &n) {
    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        n--;
        std::cout <<"Details deleted!\n";
    }
}

void deletePosition (Employee employees[] ,int &n) {
    int pos;

    if (n == 0) {
        std::cout <<"List is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to delete details : ";
        std::cin >>pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invaild choice!\n";
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
            std::cout <<"Id : "<<employees[i].id
                      <<" | Name : "<<employees[i].name
                      <<" | Department : "<<employees[i].dept
                      <<" | Address : "<<employees[i].address
                      <<" | Gender : "<<employees[i].gender
                      <<" | Salary : "<<employees[i].salary
                      <<" | Commission : "<<employees[i].commission
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
        std::cout <<"Enter position to update deatils : ";
        std::cin >>pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            std::cout <<"\nCurrent Details : \n";

            std::cout <<"Id : "<<employees[pos].id
                      <<" | Name : "<<employees[pos].name
                      <<" | Department : "<<employees[pos].dept
                      <<" | Address : "<<employees[pos].address
                      <<" | Gender : "<<employees[pos].gender
                      <<" | Salary : "<<employees[pos].salary
                      <<" | Commission : "<<employees[pos].commission
                      <<"\n";

            std::cout <<"\nEnter new details : \n";

            std::cout <<"Enter employee id : ";
            std::cin >>employees[pos].id;

            std::cin.ignore();

            std::cout <<"Enter employee name : ";
            std::getline(std::cin , employees[pos].name);

            std::cout <<"Enter department name : ";
            std::getline(std::cin , employees[pos].dept);

            std::cout <<"Enter address : ";
            std::getline(std::cin , employees[pos].address);

            std::cout <<"Enter gender (M/F) : ";
            std::cin >>employees[pos].gender;

            std::cout <<"Enter salary : ";
            std::cin >>employees[pos].salary;

            std::cout <<"Enter commission : ";
            std::cin >>employees[pos].commission;


            std::cout <<"Details updated!\n";
        }
    }
}

void search (Employee employees[], int &n) {
    int key;
    bool found = false;

    if (n == 0) {
        std::cout <<"List is empty! nothing to search!\n";
        return;
    } else {
        std::cout <<"Enter employee ID to get details : ";
        std::cin >>key;

        for (int i = 0; i < n; i++) {
            if (key == employees[i].id) {
                std::cout <<"Details Found!\n";
                std::cout <<"Id : "<<employees[i].id
                      <<" | Name : "<<employees[i].name
                      <<" | Department : "<<employees[i].dept
                      <<" | Address : "<<employees[i].address
                      <<" | Gender : "<<employees[i].gender
                      <<" | Salary : "<<employees[i].salary
                      <<" | Commission : "<<employees[i].commission
                      <<"\n";
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout <<"Details not found!\n";
        }
    }
}

void count (int n) {
    std::cout <<"Numbder of employees : "<<n <<"\n";
}

int main () {
    Employee employees[10];
    int n = 0;
    int choice;
    char exit = 'y';

    do {
        std::cout <<"\n--- |Employee Details| ---\n";
        std::cout <<"[1].Insert details at beginning\n";
        std::cout <<"[2].Insert details at ending\n";
        std::cout <<"[3].Insert details at position\n";
        std::cout <<"[4].Delete details at beginning\n";
        std::cout <<"[5].Delete details at ending\n";
        std::cout <<"[6].Delete details at position\n";
        std::cout <<"[7].Display details\n";
        std::cout <<"[8].Update details\n";
        std::cout <<"[9].Search details\n";
        std::cout <<"[10].Count employees\n";
        std::cout <<"[11].Exit\n";
        std::cout <<"Enter choice (1 - 11) : ";
        std::cin >>choice;

        switch (choice) {
            case 1: insertBegin(employees, n);
            break;

            case 2: insertEnd(employees, n);
            break;

            case 3: insertPosition(employees , n);
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

            case 9: search(employees, n);
            break;

            case 10: count(n);
            break;

            case 11: 
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

    } while (choice != 11);

    return 0;
}
