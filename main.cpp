#include <QCoreApplication>
#include <String>
#include <iostream>
#include <QTime>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string choice, comp_choice;
    cout << "rock, scissors or paper?" << endl;
    cin >> choice;

    if (choice == "rock" || choice == "scissors" || choice == "paper" )
    {
        QTime midnight(0,0,0);
        qsrand(midnight.secsTo(QTime::currentTime()));
        int ch = qrand()%3;
        switch (ch) {
        case 0:
            comp_choice = "rock";
            break;
        case 1:
            comp_choice = "scissors";
            break;
        case 2:
            comp_choice = "paper";
            break;
        default:
            break;
        }
cout << ch << "  " << comp_choice << endl;
        if (choice == comp_choice) {
            cout << "draw!" << endl;
        }
        else if ((choice == "rock" && comp_choice == "scissors") ||
                 (choice == "scissors" && comp_choice == "paper") ||
                 (choice == "paper" && comp_choice == "rock")) {
            cout << "you win!" << endl;
        }
        else
        {
            cout << "looser!" << endl;
        }
    }
    else
    {
        cout << "wrong input" << endl;
    }


    cin.get();
    return a.exec();
}
