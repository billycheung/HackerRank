/*
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has  parameters:
A string, firstName.
A string, lastName.
An integer, id.
An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
...

*/
class Student :  public Person{
  private:
    vector<int> testScores;  
  public:
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id){
            this->testScores = scores;
        }

        char calculate(){
            int total = 0;
            int size = testScores.size();
             for (int i=0; i<size; ++i){
                total+=testScores[i];
            }
            double avg = total/size;
            if (avg >= 90 && avg <= 100)
                return 'O';
            else if (avg >= 80 && avg < 90)
                return 'E';
            else if (avg >= 70 && avg < 80)
                return 'A';
            else if (avg >=55 && avg < 70)
                return 'P';
            else if (avg >= 40 && avg < 55)
                return 'D';
            else return 'T';
        }
};