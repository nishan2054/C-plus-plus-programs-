#include <iostream>
#include <string>

using namespace  std;

int Guess; 
int Total;

class Question 
{
private:
  string Question_Text;
  string Answer_1;
  string Answer_2;
  string Answer_3;
  string Answer_4;

  int Correct_Answer;
  int Question_Score;

public:
  void setValues (string, string, string, string, string, int, int);
  void askQuestion ();
};
int main()
{
  cout << " *******ARE YOU READY TO TAKE THE QUIZ******** " <<endl;
  cout << "        Hit ENTER to start this quiz!!         " << endl;
  cin.get();

  string Name;
  int Age;
  cout << "Enter your name: ";
  cin >> Name;
  cout << endl;
  cout << "Enter your age: ";
  cin >> Age;
  cout << endl;
  cout << "*****GOOD LUCK*****" << endl;

  Question q1;
  Question q2;
  Question q3;
  Question q4;
  Question q5;

  q1.setValues("The statement i++; is equivalent to: ", 
                "i = i", " i = i + i", "i = i + 1", "i--", 3, 20);
  q2.setValues("The statement i--; is equivalent to: ", 
     "i = i", " i = i - i1", "i = i + 1", "i--", 2, 20);
  q3.setValues("Who developed the C++ programming language?", "Bjarne Stroustrup", "James Gosling", "Guy Steele", "Guid Rossum", 1, 20);
  q4.setValues("In C++, 10%3 = ", "7", "2", "1", "4", 3, 20);
  q5.setValues("The relational operator for equal is: ", 
    "==", ":", ";;", "=", 1, 20);
  q1.askQuestion();
  q2.askQuestion();
  q3.askQuestion();
  q4.askQuestion();
  q5.askQuestion();

  cout << "Your Total Score is " << Total << " out of 100" << endl;
  cout << endl;

  if (Total >= 80)
  {
    cout << "Congratulations you passed the quiz " << endl;
  }
  else{
    cout << "Sorry, you failed the quiz" << endl;
  }
  return 0;
}
void Question::setValues(string ques, string a1, string a2, string a3, string a4, int correc_answ, int points){
  Question_Text = ques;
  Answer_1 = a1;
  Answer_2 = a2;
  Answer_3 = a3;
  Answer_4 = a4;
  Correct_Answer = correc_answ;
  Question_Score = points;
}

void Question::askQuestion()
{
  cout<<endl;
  cout << Question_Text << endl;
  cout << "1. " << Answer_1 << endl;
  cout << "2. " << Answer_2 << endl; 
  cout << "3. " <<Answer_3 << endl;
  cout << "4. " << Answer_4 << endl;
  cout << endl;

  cout << "Enter your asnwer ";
  cin >> Guess;
  cout << endl;

  if(Guess == Correct_Answer)
  {
    cout << endl;
    cout << "Nice! Your answer is correct" << endl;
    Total = Total + Question_Score;
    cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
    cout << endl;
  }
  else
  {
    cout << endl;
    cout << "SOrry! Your answer is wrong." << endl;
    cout << "Score: 0" << " Out of " << Question_Score << "!" << endl;
    cout << "The correct answer is " << Correct_Answer << "." < endl;
    cout << endl;
  }
}