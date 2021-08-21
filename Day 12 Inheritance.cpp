#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int idNumber, vector<int> scores) : Person(firstName, lastName, idNumber)
    {
        this->testScores = scores;
    }

    char calculate()
    {
        char ch;

        int sum = 0;

        int n = testScores.size();

        for (int i = 0; i < n; i++)
            sum += testScores[i];

        int score = sum / n;

        if (score < 40)
            ch = 'T';

        else if ((score >= 40) && (score < 55))
            ch = 'D';

        else if ((score >= 55) && (score < 70))
            ch = 'P';

        else if ((score >= 70) && (score < 80))
            ch = 'A';

        else if ((score >= 80) && (score < 90))
            ch = 'E';

        else
            ch = 'O';

        return ch;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}