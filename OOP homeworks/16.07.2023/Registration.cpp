#include "Registration.h"

Registration ::Registration(std::string &name, std::string &surname, std::string &email, std::string &phone,
                            std::string &password, std::string &login) {
    this->name = name;
    this->surname = surname;
    this->email = email;
    this->phone = phone;
    this->password = password;
    this->login = login;


    std :: regex emailRegex(R"(([a-zA-Z0-9]+)(\.|_)?([a-zA-Z0-9])+@([a-zA-Z0-9]+)((\.)[a-zA-Z]{2,})+)");
    std :: regex phoneRegex("([+]{1})([994]{3})([0-9]{2})([0-9]{3})([0-9]{2})([0-9]{2})");
    std :: regex fullnameRegex("([A-Z{1}][a-z]+)");
    std :: regex passwordRegex("(?=.*[A-Z])(?=.*[a-z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{6,}");
    std :: regex loginRegex("^(?!.*[-_]{2,})[a-zA-Z0-9_-]{3,19}[a-zA-Z0-9]$");

    if (!regex_match(email,emailRegex))
        throw std :: invalid_argument("Invalid email");
    if (!regex_match(phone,phoneRegex))
        throw std :: invalid_argument("Invalid number");
    if (!regex_match(name,fullnameRegex))
        throw std :: invalid_argument("Invalid name");
    if  (!regex_match(surname,fullnameRegex))
        throw std :: invalid_argument("Invalid surname");
    if  (!regex_match(password, passwordRegex))
        throw std :: invalid_argument("Invalid password");
    if  (!regex_match(login,loginRegex))
        throw std :: invalid_argument("Invalid login");
}




std::string Registration::getName() {
    return this->name;
}

std :: string Registration ::getSurname() {
    return this->surname;

}

std :: string Registration ::getEmail() {
    return this->email;
}

std :: string Registration ::getPassword() {
    return this->password;

}

std :: string Registration ::getPhone() {
    return this->phone;

}

std :: string Registration ::getLogin() {
    return this->login;

}

void Registration::info() const {
    std :: cout << "Name: " << this->name << std :: endl;
    std :: cout << "Surname: " << this->surname << std :: endl;
    std :: cout << "Login: "<< this->login << std :: endl;
    std :: cout << "Email: "<< this->email << std :: endl;
    std :: cout << "Phone: " << this->phone << std :: endl;
    std :: cout << "Password: " << this->password << std :: endl;
}
