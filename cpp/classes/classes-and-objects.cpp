/*
Sample Input
The first line contains n, the number of students in Kristen's class. The n subsequent lines contain each student's exam grades for this semester.

3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10

Sample Output
1
*/

class Student{
    int scores[5];
    public:
    void input(){
        for (int i=0; i<5; i++)
            cin >> scores[i];
    }
    
    int calculateTotalScore(){
        int sum = 0;
        for (int i=0; i<5; i++)
            sum += scores[i];
        return sum;
    }
};