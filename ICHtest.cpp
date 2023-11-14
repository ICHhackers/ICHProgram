#include <iostream>
#include <string>
#include <fstream>

void CommandProccesor(std::string& input1);
int main();

void CommandProccesor(std::string& input1)
{
    system("cls");
    system("color f");
    std::string programname;
    if (input1 == "program aval")
    {
        //show available programs
    }
    else if(input1 == "program find")
    {
        std::cout << "Enter program name: ";
        std::cin >> programname;
    }
    else if (input1 == "program update")
    {
        std::cout << "Enter program name: ";
        std::cin >> programname;
    }
}

int main()
{
    system("cls");
    std::string input1;
    system("color B");
    std::cout << "_____    _______    ____   ____" << '\n';
    std::cout << "|   |   /       \\   |  |   |  |" << '\n';
    std::cout << "|   |   |   | |_|   |  |   |  |" << '\n';
    std::cout << "|   |   |   |       |  ____   |" << '\n';
    std::cout << "|   |   |   |  _    |  |   |  |" << '\n';
    std::cout << "|   |   |   | | |   |  |   |  |" << '\n';
    std::cout << "\\___/   \\_______/   \\__/   \\__/" << '\n';
    //the logo!
    std::cout << "Welcome to ICH" << '\n';
    std::cout << "Default commands:" << '\n';
    std::cout << "program find " << '\n';
    std::cout << "clear" << '\n';
    while (input1.empty())
    {
            std::cout << "User> ";
            std::getline(std::cin, input1);
            CommandProccesor(input1);
    }
}
