#include <iostream>
// Make (Class student) -------> [(Class Test) + (Class Sports)] --------> (Result)

using namespace std;

class Student{
  protected:
    int rollNumber;
    
  public:
    void inputRollnumber(int num){
        rollNumber = num;
    }
    void printRollnumber(void){
        cout << "Your roll number" << rollNumber << endl;
    }

};

class test: virtual public Student{
  protected:
    float maths, physics;

  public:
        void inputMarks(float num1, float num2){
        maths = num1;
        physics = num2;
    }

    void printMarks(void){
        cout << "Marks in Maths :" << maths << endl
             << "Marks in Physics :" << physics << endl;
    }
};

class sports: virtual public Student{
  protected:
    float score;

  public:
        void inputScore(float num){
        score = num;
    }

    void printScore(void){
        cout << "Your Score in sports is :" << score << endl;
    }
};

class result : public test, public sports{
 protected:
    int result;

 public:
    
    void printResult(void){
        result = (maths + physics + score);
        printRollnumber();
        printMarks();
        printScore();
        cout << "Your total result is :" << result << endl;
    }
};

int main(){
    result harsh;

    // if we dont use (virtual-base-class) feature then 
    harsh.inputRollnumber(45);  // Output ERROR : request for member ‘inputRollnumber’ is ambiguous
    harsh.inputMarks(80.34, 89.44);
    harsh.inputScore(9.8);
    harsh.printResult();

    return 0;
}