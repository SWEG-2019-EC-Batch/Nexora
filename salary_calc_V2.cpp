#include <iostream>
#include <string>
using namespace std;

int main()
{
    double gross_salary, tax, net_salary, pension;
    double base_salary, bonus, bonus_payment;
    int hours, choice, employee_type;
    char again;
    string name;

    do
    {
        cout << "\n================================\n";
        cout << "   EMPLOYEE SALARY MANAGEMENT\n";
        cout << "================================\n";

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Select employee type:\n";
        cout << "1. Regular Employee\n";
        cout << "2. Laborer\n";
        cout << "Enter your choice: ";
        cin >> employee_type;

        cout << "Enter base salary: ";
        cin >> base_salary;

        cout << "Enter working hours per week: ";
        cin >> hours;

        cout << "Enter overtime bonus per hour: ";
        cin >> bonus;

        // Calculate overtime bonus
        bonus_payment = 0;

        if (hours > 40)
        {
            bonus_payment = bonus * (hours - 40);
        }

        // Calculate gross salary
        if (hours >= 40)
        {
            gross_salary = base_salary + bonus_payment;
        }
        else
        {
            gross_salary = base_salary -
                           ((40 - hours) * base_salary / 40);
        }

        // Calculate pension
        pension = 0.07 * gross_salary;

        // Calculate tax
        if (employee_type == 2)
        {
            tax = 0;
        }
        else
        {
            if (gross_salary <= 3500)
                tax = 0;
            else if (gross_salary <= 10000)
                tax = 0.01 * gross_salary;
            else if (gross_salary <= 25000)
                tax = 0.15 * gross_salary;
            else if (gross_salary <= 50000)
                tax = 0.20 * gross_salary;
            else if (gross_salary <= 100000)
                tax = 0.25 * gross_salary;
            else
                tax = 0.30 * gross_salary;
        }

        // Calculate net salary
        net_salary = gross_salary - tax - pension;

        // Salary menu
        cout << "\n========== SALARY MENU ==========\n";
        cout << "Employee: " << name << endl;
        cout << "1. Bonus payment\n";
        cout << "2. Gross salary\n";
        cout << "3. Net salary\n";
        cout << "4. Pension\n";
        cout << "5. Tax\n";
        cout << "6. Display all\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Bonus payment: " << bonus_payment << endl;
                break;

            case 2:
                cout << "Gross salary: " << gross_salary << endl;
                break;

            case 3:
                cout << "Net salary: " << net_salary << endl;
                break;

            case 4:
                cout << "Pension: " << pension << endl;
                break;

            case 5:
                cout << "Tax: " << tax << endl;
                break;

            case 6:
                cout << "\n======= SALARY DETAILS =======\n";
                cout << "Employee: " << name << endl;
                cout << "Bonus payment: " << bonus_payment << endl;
                cout << "Gross salary: " << gross_salary << endl;
                cout << "Pension: " << pension << endl;
                cout << "Tax: " << tax << endl;
                cout << "Net salary: " << net_salary << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to calculate another employee? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using the Salary Management System!\n";

    return 0;
}
