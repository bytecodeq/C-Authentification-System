#include <iostream>
#include <string>

using namespace std;

void licensesystem() {
    std::cout << "Username: ";
    std::string Username; 
    std::cin >> Username;

    std::cout << "Password: \n";
    std::cin.ignore();
    std::string Password;  
    std::cin >> Password;
    std::getline(std::cin, Password);

    std::string License; 
    std::cin >> License;

    std::cout << "License entered: " << License << std::endl;
}

std::string license = "LICENSESYSTEMMADEBYEVILSTRIXONGH\n"; 

int main() {
    system("cls");
    std::cout << "License system\n";

    licensesystem();

    std::string correctLicense = "LICENSESYSTEMMADEBYEVILSTRIXONGH";
    std::string enteredLicense; 

    std::cout << "Enter the license to register: ";
    std::cin >> enteredLicense;

    if (enteredLicense == correctLicense) {
        std::cout << "Successfully registered! Your license is: " << correctLicense << " Enjoy your plan!\n";
        succes();
    }
    else {
        std::cout << "Invalid license\n";
    }

    return 0;
}

int succes() {
    while (true) {
        std::cout << "SUCCESFULLY LOGGED IN!!! [200]" << endl;
 }
    return 0;
}
