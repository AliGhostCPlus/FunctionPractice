#include <iostream>
#include <string>



////////////////////////////////////////////
//      Functions Delcared here          //
//////////////////////////////////////////


void WelcomeMessage();
void EmployeeiInformation();
void ProgramLoop();


int main()
{
    ProgramLoop();
    return 0;
}



void ProgramLoop()

{
    WelcomeMessage();
    EmployeeiInformation();

}
void WelcomeMessage()
{
    std::cout << "Please enter your information before you start your shift \n";
    std::cout << " You will enter your name first \n";
    std::cout << "Then your ID tag \n";
    std::cout << "The final data input will be your workshift \n";
}
void EmployeeiInformation()
{
    std::string employeeName;
    int badgeID;
    std::string workShift;
    std::cout << "Enter your name\n";
    std::cin >> employeeName;
    std::cout << "Enter your ID number \n";
    std::cin >> badgeID;
    std::cout << "Please enter your work shift";
    std::cin >> workShift;
    std::cout << "Welcomee : " << employeeName << std::endl;
    std::cout << "Your ID : " << badgeID << std::endl;
    std::cout << "Your shift is : " << workShift << std::endl;