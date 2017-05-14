/*
Complete the Difference class by writing the following:

A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.
A computeDifference method that finds the maximum absolute difference between any 2 numbers in N and stores it in the maximumDifference instance variable.
*/
    Difference(vector<int> elements){
        this->elements = elements;
    }

    void computeDifference(){
        int max = elements[0];
        int min = elements[0];
        
        for (int e:elements){
            if (e > max)
                max = e;
            if (e < min)
                min = e;
        }
        maximumDifference = max - min;
    }