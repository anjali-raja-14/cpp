

#include "rockpaperscissors.h"

RockPaperScissors::RockPaperScissors(QWidget *parent) : QMainWindow(parent) {
    // ... (rest of the constructor remains the same)

    // Add a label to display the result
    resultLabel = new QLabel("Result:", centralWidget);
    layout->addWidget(resultLabel);
}

void RockPaperScissors::playGame(int userChoice) {
    int computerChoice = QRandomGenerator::global()->bounded(1, 4);

    QString userChoiceStr;
    QString computerChoiceStr;

    switch (userChoice) {
        case 1:
            userChoiceStr = "Rock";
            break;
        case 2:
            userChoiceStr = "Paper";
            break;
        case 3:
            userChoiceStr = "Scissors";
            break;
    }

    switch (computerChoice) {
        case 1:
            computerChoiceStr = "Rock";
            break;
        case 2:
            computerChoiceStr = "Paper";
            break;
        case 3:
            computerChoiceStr = "Scissors";
            break;
    }

    QString result;
    if (userChoice == computerChoice) {
        result = "It's a tie!";
    } else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)) {
        result = "You win!";
    } else {
        result = "Computer wins!";
    }

    // Display the result in the label
    resultLabel->setText("You chose: " + userChoiceStr + "\nComputer chose: " + computerChoiceStr + "\n" + result);
}


