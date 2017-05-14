/*
The AdvancedArithmetic interface and the method declaration for the abstract int divisorSum(int n) method are provided for you in the editor below. Write the Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum method must be public and take an integer parameter, , and return the sum of all its divisors.
*/
class Calculator : public AdvancedArithmetic{
    public:
    int divisorSum(int n){
        int sum = 0;
        int root = sqrt(n);
        for (int i=1; i<=root; i++){
            if (n%i == 0){
                sum += i;
                if (i != n/i)
                    sum += n/i;
            }
        }
        return sum;
    }
};