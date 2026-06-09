#include <iostream>

char getUserChoice();
char getCompChoice();
std::string showChoice(char c);
void selectWinner(char player, char computer);

int main()
{
    std::cout << "Rock, Paper & Scissors Game" << std::endl;
    char player = getUserChoice();
    std::cout << "Your choice : " << showChoice(player) << std::endl;

    char comp = getCompChoice();
    std::cout << "Computer's choice : " << showChoice(comp) << std::endl;

    selectWinner(player, comp);
}

std::string showChoice(char c)
{
    switch (c)
    {
    case 'r':
        return "Rock";
    case 'p':
        return "Paper";
    case 's':
        return "Scissors";
    default:
        return "Error";
    }
}

char getUserChoice()
{
    char p;
    do
    {
        std::cout << "Choose your move : " << std::endl;
        std::cout << "'r' for rock" << std::endl;
        std::cout << "'p' for paper" << std::endl;
        std::cout << "'s' for scissors" << std::endl;

        std::cin >> p;
    } while (p != 'r' && p != 'p' && p != 's');

    return p;
}

char getCompChoice()
{
    srand(time(NULL));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        return '0';
    }
}

void selectWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie." << std::endl;
        }
        else if (computer == 'p')
        {
            std::cout << "You Lose." << std::endl;
        }
        else
        {
            std::cout << "You Win." << std::endl;
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You Win." << std::endl;
        }
        else if (computer == 'p')
        {
            std::cout << "It's a tie." << std::endl;
        }
        else
        {
            std::cout << "You Lose." << std::endl;
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You Lose." << std::endl;
        }
        else if (computer == 'p')
        {
            std::cout << "You Win." << std::endl;
        }
        else
        {
            std::cout << "It's a tie." << std::endl;
        }
        break;
    default:
        std::cout << "Error" << std::endl;
    }
}