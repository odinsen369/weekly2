#include <iostream>
#include <conio.h>

int main()
{
start:
    int count{ 1 };
    int fivecount{ 5 };
    int task;
    std::cout << "which task do you want to go to? (1-6) (or 0 to exit): ";
    std::cin >> task;
    if (task == 1)
        goto TaskOne;
    if (task == 2)
        goto TaskTwo;
    if (task == 3)
        goto TaskThree;
    if (task == 4)
        goto TaskFour;
    if (task == 5)
        goto TaskFive;
    if (task == 6)
        goto TaskSix;
    if (task == 7 or task == 8 or task == 9)
        goto start;
    if (task == 0)
        exit(0);

TaskOne:


    while (count <= 100)
    {
        std::cout << count << ' '; count++;
    }
    std::cout << "\nnumbers with while loop\n\n";

    for (count = 1; count <= 100; count++)
        std::cout << count << ' ';
    std::cout << "\nnumbers with for loop\n\n";
    goto start;

TaskTwo:

    for (count = 100; count > 0; count--)
        std::cout << count << ' ';
    std::cout << "\nnumbers 100-1\n\n";
    goto start;

TaskThree:

    fivecount;
    while (fivecount <= 50)
    {
        std::cout << fivecount << ' '; fivecount += 5;
    }
    std::cout << "\nwhile loop 5-50 with a interval of 5\n\n";
    goto start;


TaskFour:

    for (count = 5; count <= 50; count += 5)
        std::cout << count << ' ';
    std::cout << "\nfor loop 5-50 with a interval of 5\n\n";
    goto start;

TaskFive:

    do {
        std::cout << fivecount << ' '; fivecount += 5;
    } while (fivecount <= 50);
    std::cout << "\ndo while loop 5-50 with a interval of 5\n\n";
    goto start;

TaskSix:


    char grade;
    std::cout << "what grade do you want in programming 1?: ";
    std::cin >> grade;


    switch (grade) {
    case('a'):
    case('A'):
        std::cout << "Outstanding\n";
        goto start;
    case('b'):
    case('B'):
        std::cout << "Very good\n";
        goto start;
    case('c'):
    case('C'):
        std::cout << "Good\n";
        goto start;
    case('d'):
    case('D'):
        std::cout << "Some flaws\n";
        goto start;
    case('e'):
    case('E'):
        std::cout << "Not very good...\n";
        goto start;
    case('f'):
    case('F'):
        std::cout << "Fail\n";
        goto start;
    }


}
