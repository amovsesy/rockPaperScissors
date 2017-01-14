/*
    Aleksandr Movsesyan
    CS 110 A
    Craig Persiko
    Practice Problem 5
    pp5.cpp

    This program lets two users play a game of rock, paper, scissors and tells
which won.
  */

#include <iostream>
using namespace std;

void Output_Winner ( int num_1, int num_2);
// takes the two numbers adds them together and then uses a switch statement to
see who wins

int main ()
{

  int play_1, play_2;
  char player_1_move, player_2_move, run_again;

  cout << "\nWelcome to the game of Rock, Paper, Scissors.\n";

  do
  {
    do
    {
      cout << "\nPlayer One, please enter your move: \n ('P' for Paper, 'R' for
Rock, 'S' for Scissor)";
      cin >> player_1_move;
      if ( player_1_move != 'P' && player_1_move != 'p' && player_1_move != 'R'
&& player_1_move != 'r' && player_1_move != 'S' &&
           player_1_move != 's' )
        cout << "You have entered an invalid move!" <<endl;
    }while ( player_1_move != 'P' && player_1_move != 'p' && player_1_move !=
'R' && player_1_move != 'r' && player_1_move != 'S' &&
             player_1_move != 's' );

    if ( player_1_move == 'R' || player_1_move == 'r' )
      play_1 = 100;
    else if ( player_1_move == 'P' || player_1_move == 'p' )
      play_1 = 104;
    else if ( player_1_move == 'S' || player_1_move == 's' )
      play_1 = 110;

    do
    {
      cout << "Player Two, please enter your move: \n ('P' for Paper, 'R' for
Rock, 'S' for Scissor)";
      cin >> player_2_move;
      if ( player_2_move != 'P' && player_2_move != 'p' && player_2_move != 'R'
&& player_2_move != 'r' && player_2_move != 'S' &&
           player_2_move != 's' )
        cout << "You have entered an invalid move!" <<endl;
    }while ( player_2_move != 'P' && player_2_move != 'p' && player_2_move !=
'R' && player_2_move != 'r' && player_2_move != 'S' &&
             player_2_move != 's' );

    if ( player_2_move == 'R' || player_2_move == 'r' )
      play_2 = 100;
    else if ( player_2_move == 'P' || player_2_move == 'p' )
      play_2 = 104;
    else if ( player_2_move == 'S' || player_2_move == 's' )
      play_2 = 110;

    Output_Winner ( play_1, play_2 );

    cout << "\n\n Would you like to play again? \n (press y for yes and n for
no)";
    cin >> run_again;
  }while ( run_again == 'Y' || run_again == 'y' );

    cout << "\n Thank you for playing." << endl << endl;

  return 0;
}

// takes the two numbers adds them together and then uses a switch statement to
see who wins
void Output_Winner ( int num_1, int num_2)
{

  int add_num;

  add_num = num_1 + num_2;

  switch ( add_num )
  {
    case 200:
      cout << "It's a Tie!!";
      return;
    case 208:
      cout << "It's a Tie!!";
      return;
    case 220:
      cout << "It's a Tie!!";
      return;
    case 204:
      cout << "Paper covers Rock!!";
      return;
    case 210:
      cout << "Rock breaks Scissors!!";
      return;
    case 214:
      cout << "Scissors cuts Paper!!";
      return;
    default:
      cout << "One of the players entered and invalid move.";
  }
}
