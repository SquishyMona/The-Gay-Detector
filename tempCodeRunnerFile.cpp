#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    cout << "-----------------------------------------------------" << endl
    << "Welcome to the Gay Detector(TM)." << endl
    << "This program was written by Squishy C++ Programs Inc." << endl
    << "'Written by the gays, for the gays (and the straights too) (or any other identity)'" << endl
    << "-----------------------------------------------------" << endl
    << "This program will detect if you are gay or if you are not gay." << endl
    << "WARNING!!!!!: If you are sensitive to gay material, please stop using this program." << endl
    << "-----------------------------------------------------" << endl;

    srand (time(NULL));
    int score;
    score = (rand() % 10)+1;
    string terms;
    cout << "Would you like to continue using this program? (y/n) ";
    cin >> terms;

    if (terms == "n")
    {
        cout << "lol pussy" << endl;
    }
    else
    {
        cout << endl
        << "This program will ask a series of questions to detect whether or not you are gay with a series of yes or no questions." << endl
        << endl
        << "Please answer 'y' for yes and 'n' for no for all questions (except the following question)" << endl
        << endl
        << "At the end of the program, your result will be calculated. My program has been tested and is 100% ACCURATE, so you can trust these results." << endl
        << "-----------------------------------------------------" << endl;

        cout << "To get started, what is your gender identity?" << endl
        << "(Please enter 'male', 'female', or 'non-binary'. If you identify as a trans male or female, simply input 'male' or 'female'.)" << endl;
        string gender, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
        cin >> gender;
        if (gender == "male" || gender == "Male")
        {
            cout << "Remember to enter either 'y' or 'n' from this point on." << endl;
            cout << "Question 1: Do you like men? ";
            cin >> q1;
            if (q1 == "y")
            {
                score = score + 5;
            }
            
            cout << "Question 2: Did you hesitate answering the last question? ";
            cin >> q2;
            if (q2 == "y")
            {
                score = score + 1;
            }

            cout << "Question 3: Do you think it's gay to kiss the homies? ";
            cin >> q3;
            if (q3 == "y")
            {
                score = score + 1;
            }

            cout << "Question 4: Do you play Super Smash Bros. Ultimate for the Nintendo Switch? ";
            cin >> q4;
            if (q4 == "y")
            {
                score = score + 2;
            }

            cout << "Question 5: Do the boys often tell you that you look 'submissive and breedable'? ";
            cin >> q5;
            if (q5 == "y")
            {
                score = score + 3;
            }

            cout << "Question 6: Are you afraid that this program may tell you that you are gay? ";
            cin >> q6;
            if (q6 == "y")
            {
                score = score + 2;
            }

            cout << "Question 7: If given the oppertunity, would you engage in sexual activity with a person of the opposite sex? ";
            cin >> q7;
            if (q7 == "n")
            {
                score = score + 5;
            }

            cout << "Question 8: Are you attracted to Dwayne 'The Rock' Johnson? ";
            cin >> q8;
            if (q8 == "y")
            {
                score = score + 3;
            }

            cout << "Question 9: Do you like Oreos? ";
            cin >> q9;
            if (q9 == "y")
            {
                score = score - 3;
            }

            cout << "Question 10: Are you ready to know if you are gay or not? ";
            cin >> q10;
            if (q10 == "n")
            {
                score = score + 3;
            }
            cout << "Thank you for answering these questions. ";
            if(score >= 15)
            {
                cout << "This program has detected that you are: GAY" << endl;
            }
            else
            {
                cout << "This program has detected that you are: NOT GAY" << endl;
            }
            cout << "Thank you for your time. The program will now end." << endl;
            cin >> gender;
        }
        else if (gender == "female" || gender == "Female")
        {
            cout << "Remember to enter either 'y' or 'n' from this point on." << endl;
            cout << "Question 1: Do you like women? ";
            cin >> q1;
            if (q1 == "y")
            {
                score = score + 5;
            }
            
            cout << "Question 2: Did you hesitate answering the last question? ";
            cin >> q2;
            if (q2 == "y")
            {
                score = score + 1;
            }

            cout << "Question 3: Do you think it's gay to kiss the girls? ";
            cin >> q3;
            if (q3 == "y")
            {
                score = score + 1;
            }

            cout << "Question 4: Do you play Animal Crossing: New Horizons for the Nintendo Switch? ";
            cin >> q4;
            if (q4 == "y")
            {
                score = score + 2;
            }

            cout << "Question 5: Do the girls often tell you that you look 'submissive and breedable'? ";
            cin >> q5;
            if (q5 == "y")
            {
                score = score + 3;
            }

            cout << "Question 6: Are you afraid that this program may tell you that you are gay? ";
            cin >> q6;
            if (q6 == "y")
            {
                score = score + 2;
            }

            cout << "Question 7: If given the oppertunity, would you engage in sexual activity with a person of the opposite sex? ";
            cin >> q7;
            if (q7 == "n")
            {
                score = score + 5;
            }

            cout << "Question 8: Are you attracted to Dwayne 'The Rock' Johnson? ";
            cin >> q8;
            if (q8 == "n")
            {
                score = score + 3;
            }

            cout << "Question 9: Do you like Oreos? ";
            cin >> q9;
            if (q9 == "y")
            {
                score = score - 3;
            }

            cout << "Question 10: Are you ready to know if you are gay or not? ";
            cin >> q10;
            if (q10 == "n")
            {
                score = score + 3;
            }
            cout << "Thank you for answering these questions. ";
            if(score >= 15)
            {
                cout << "This program has detected that you are: GAY" << endl;
            }
            else
            {
                cout << "This program has detected that you are: NOT GAY" << endl;
            }
            cout << "Thank you for your time. The program will now end." << endl;
            cin >> gender;
        }
        else
        {
            {
            cout << "Remember to enter either 'y' or 'n' from this point on." << endl;
            cout << "Question 1: Do you think you are gay? ";
            cin >> q1;
            if (q1 == "y")
            {
                score = score + 5;
            }
            
            cout << "Question 2: Did you hesitate answering the last question? ";
            cin >> q2;
            if (q2 == "y")
            {
                score = score + 1;
            }

            cout << "Question 3: Do you like Ed Sheeren? ";
            cin >> q3;
            if (q3 == "y")
            {
                score = score + 1;
            }

            cout << "Question 4: Do you play Animal Crossing: New Horizons for the Nintendo Switch? ";
            cin >> q4;
            if (q4 == "y")
            {
                score = score + 2;
            }

            cout << "Question 5: Do your friends often tell you that you look 'submissive and breedable'? ";
            cin >> q5;
            if (q5 == "y")
            {
                score = score + 3;
            }

            cout << "Question 6: Are you afraid that this program may tell you that you are gay? ";
            cin >> q6;
            if (q6 == "y")
            {
                score = score + 2;
            }

            cout << "Question 7: If given the oppertunity, would you engage in gay sexual activity? ";
            cin >> q7;
            if (q7 == "n")
            {
                score = score + 5;
            }

            cout << "Question 8: Are you attracted to Dwayne 'The Rock' Johnson? ";
            cin >> q8;
            if (q8 == "n")
            {
                score = score + 3;
            }

            cout << "Question 9: Do you like Oreos? ";
            cin >> q9;
            if (q9 == "y")
            {
                score = score - 3;
            }

            cout << "Question 10: Are you ready to know if you are gay or not? ";
            cin >> q10;
            if (q10 == "n")
            {
                score = score + 3;
            }
        }
        cout << "Thank you for answering these questions. ";
        if(score >= 15)
        {
            cout << "This program has detected that you are: GAY" << endl;
        }
        else
        {
            cout << "This program has detected that you are: NOT GAY" << endl;
        }
        cout << "Thank you for your time. The program will now end." << endl;
        cin >> gender;
    }


}
}