#include <iostream>
#include <string>
using namespace std;
// using std::string;

// class AbstractMegaphone {
//     virtual void AskForPromotion()=0;
// };

// class megaphone:AbstractMegaphone {
// private:
//     string Name;
//     int Age;
// public:
//     void setName(string name) {
//         Name = name;
//     }
//     string getName() {
//         return (Name);
//     }
//     void setAge(int age) {
//         if (age >= 18)
//         Age = age;
//     }
//     int getAge() {
//         return (Age);
//     }
//     void Introduce() {
//         std::cout << "Name - " << Name << std::endl;
//         std::cout << "Age - " << Age << std::endl;
//     }
//     megaphone(string name, int age) {
//         Name = name;
//         Age = age;
//     }
    
//     void AskForPromotion() {
//         if (Age >= 30)
//             std::cout << Name << " got promoted!" << std::endl;
//         else
//             std::cout << Name << " , sorry NO promotin for you!" << std::endl;
//     }

// };

string Upper(string str)
{
    for (char &c : str)
    {
        if (c >= 'a' && c <= 'z')
            c -= 32;
    }
    return (str);
}

// int main(int argc, char **argv)
// {
//     int i = 1;
//     if (argc == 1)
//         cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
//     while (i < argc)
//     {
//         if (i < argc)
//             cout << Upper(argv[i]);
//         i++;
//         cout << endl;
//     }
    
// }

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    }
    int i = 1;

    while (argv[i])
    {
        cout << Upper(argv[i]);
        i++;
    }
    cout << endl;
}